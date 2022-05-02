// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuickUISetup.h"
#include "QuickUISetupStyle.h"
#include "QuickUISetupCommands.h"
#include "ToolMenus.h"
#include "UIPythonBridge.h"
#include "LevelEditor.h"
#include "ISettingsModule.h"
#include "QuickUISettings.h"

#include "HoudiniPythonManger.h"
#include "HoudiniPythonClass.h"
#include "HoudiniDetails.h"
#include "HoudiniEngineRuntime/Private/HoudiniAsset.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetActor.h"
#include "HoudiniEngineRuntime/Private/HoudiniPublicAPIProcessedAsset.h"



static const FName QuickUISetupTabName("QuickUISetup");

#define LOCTEXT_NAMESPACE "FQuickUISetupModule"

void FQuickUISetupModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FQuickUISetupStyle::Initialize();
	FQuickUISetupStyle::ReloadTextures();

	FQuickUISetupCommands::Register();
	
	if(ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project","Plugins","Quick_UI_Settings",LOCTEXT("RuntimeSettingName","Python UI"),
			LOCTEXT("RuntimeSettingDescription", "Configure UI window setup."), GetMutableDefault<UQuickUISettings>());
	}
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FQuickUISetupCommands::Get().CreateUI,
		FExecuteAction::CreateRaw(this, &FQuickUISetupModule::PluginCreateNew)
	);
	PluginCommands->MapAction(
		FQuickUISetupCommands::Get().LoadUI,
		FExecuteAction::CreateRaw(this, &FQuickUISetupModule::PluginLoadUI)
	);
	
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> NewToolbarExtender = MakeShareable(new FExtender);
		NewToolbarExtender->AddToolBarExtension("Content", 
												EExtensionHook::Before, 
												PluginCommands, 
												FToolBarExtensionDelegate::CreateRaw(this, &FQuickUISetupModule::AddToolbarButton));
	
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(NewToolbarExtender);
	}

	{
		TSharedPtr<FExtender> NewMenuExtender = MakeShareable(new FExtender); 
		NewMenuExtender->AddMenuExtension("LevelEditor", 
											EExtensionHook::After, 
											PluginCommands, 
											FMenuExtensionDelegate::CreateRaw(this, &FQuickUISetupModule::AddMenuEntry));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(NewMenuExtender);
	}
	
	const bool ModuleCheck = FModuleManager::Get().IsModuleLoaded("HoudiniEngine");
	const bool HoudiniEnable = GetDefault<UQuickUISettings>()->HoudiniWins;

	if(ModuleCheck && HoudiniEnable)
	{
		UHoudiniPublicAPIProcessedAsset::Get().OnProcessedAsset.BindRaw(this,&FQuickUISetupModule::NewHoudiniAssetLayout);
		
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.RegisterCustomClassLayout(AHoudiniAssetActor::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FHoudiniDetails::MakeInstance));
		PropertyModule.NotifyCustomizationModuleChanged();
	}
}

void FQuickUISetupModule::AddToolbarButton(FToolBarBuilder& Builder)
{
	Builder.AddComboButton(
		FUIAction(),
		FOnGetContent::CreateRaw(this, &FQuickUISetupModule::FillComboButton, PluginCommands),
		LOCTEXT("QuickUISetup", "Quick UI Setup"),
		LOCTEXT("QuickUISetupTootlip", "Make Quick UI Layout for Editor Tools"),
		TAttribute<FSlateIcon>(),
		false
		);

}

void FQuickUISetupModule::AddMenuEntry(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.BeginSection("PyUIMenu", TAttribute<FText>(FText::FromString("Python UI")));
	
	MenuBuilder.AddSubMenu(FText::FromString("Quick UI Setup"), 
							FText::FromString("Python UI Setup toolkit"), 
							FNewMenuDelegate::CreateRaw(this, &FQuickUISetupModule::FillSubmenu));

	MenuBuilder.EndSection();
}

void FQuickUISetupModule::FillSubmenu(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.BeginSection("Create_New_UI", LOCTEXT("CreateNewUI", "Create"));
	{
		MenuBuilder.AddMenuEntry(FQuickUISetupCommands::Get().CreateUI);
	}
	MenuBuilder.EndSection();

	MenuBuilder.BeginSection("Loaded_UIs", LOCTEXT("LoadedUIs","Loaded"));
	{
		MenuBuilder.AddMenuEntry(FQuickUISetupCommands::Get().LoadUI);
	}
	MenuBuilder.EndSection();

}

void FQuickUISetupModule::FillUISubMenu(FMenuBuilder& MenuBuilder)
{
	
	TArray<FString> LoadedNames =  UUIPythonBridge::Get()->LoadedUI();
	TArray<FString> LoadedCategories = UUIPythonBridge::Get()->LoadedCategories();

	struct FuncLocal
	{
		static void OpenWin(FString name, FString win_string, FString category)
		{
			UUIPythonBridge* UIBridge = UUIPythonBridge::Get();
			UIBridge->OpenUI(name, win_string, category);
			UE_LOG(LogTemp, Warning, TEXT("Win_Type: %s"), *win_string);
		}
	};
	
	struct Local
	{
		static void FillLastSub(FMenuBuilder& MenuBuilder,FString categoryIn, FString currentName, bool state)
		{
			FText layout_text = FText::Format(LOCTEXT("UISubNames", "{0}{1}"), FText::FromString(currentName), FText::FromString("_layout"));
			TArray<FText> Names;
			if(state)
			{
				Names.Add( FText::Format(LOCTEXT("UISubNames", "{0}{1}"), FText::FromString(currentName), FText::FromString("_editor")));
				Names.Add(layout_text);
			}
			else
			{
				Names.Add(layout_text);
			}
			
			for(auto& name: Names)
			{
				MenuBuilder.AddMenuEntry(
				FText::Format(LOCTEXT("UINames", "{0}"), name),
				LOCTEXT("UINames_Tooltip", "Display this Pyside UI layout."),
				FSlateIcon(),
				FExecuteAction::CreateStatic(&FuncLocal::OpenWin, currentName, name.ToString(), categoryIn),
				NAME_None,
				EUserInterfaceActionType::Button
				);
			}
			
		}
	};

	for(auto& CategoryName : LoadedCategories)
	{
		MenuBuilder.BeginSection(NAME_Name,  FText::Format(LOCTEXT("CategoryName", "{0}"), FText::FromString(CategoryName)));
		{
			for(auto& KeyName: LoadedNames)
			{
				if(UUIPythonBridge::Get()->CheckUIName(KeyName, CategoryName))
				{
					MenuBuilder.AddSubMenu(FText::Format(LOCTEXT("UINames", "{0}"), FText::FromString(KeyName)), 
								LOCTEXT("UINames_Tooltip", "Display this Pyside UI layout."), 
								FNewMenuDelegate::CreateStatic(&Local::FillLastSub,CategoryName, KeyName, true));
				}
			}
		}
		MenuBuilder.EndSection();
	}
	
}

TSharedRef<SWidget> FQuickUISetupModule::FillComboButton(TSharedPtr<class FUICommandList> Commands)
{
	FMenuBuilder MenuBuilder(true, Commands);

	MenuBuilder.BeginSection("Create_New_UI", LOCTEXT("CreateNewUI", "Create"));
	{
		MenuBuilder.AddMenuEntry(FQuickUISetupCommands::Get().CreateUI);
	}
	MenuBuilder.EndSection();

	MenuBuilder.BeginSection("Loaded_UIs", LOCTEXT("LoadedUIs","Loaded"));
	{
		MenuBuilder.AddMenuEntry(FQuickUISetupCommands::Get().LoadUI);
		MenuBuilder.AddSubMenu(FText::FromString("Loaded UIs"), 
							FText::FromString("Saved UI Layouts"), 
							FNewMenuDelegate::CreateRaw(this, &FQuickUISetupModule::FillUISubMenu));
	}
	MenuBuilder.EndSection();

	return MenuBuilder.MakeWidget();
}

void FQuickUISetupModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FQuickUISetupStyle::Shutdown();

	FQuickUISetupCommands::Unregister();
	
	if(ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "Quick_UI_Settings");
	}
}

void FQuickUISetupModule::PluginCreateNew()
{
	UUIPythonBridge* UIBridge = UUIPythonBridge::Get();
	UIBridge->SetupInitCall();
}

void FQuickUISetupModule::PluginLoadUI()
{
	UUIPythonBridge* UIBridge = UUIPythonBridge::Get();
	UIBridge->LoadUI();
}

void FQuickUISetupModule::PluginOpenUI(const FString& name, const FString& WinType, const FString& CategoryName)
{
	UUIPythonBridge* UIBridge = UUIPythonBridge::Get();
	UIBridge->OpenUI(name, WinType, CategoryName);
}

void FQuickUISetupModule::NewHoudiniAssetLayout(UHoudiniAssetComponent* HoudiniAsset)
{
	UE_LOG(LogTemp, Warning, TEXT("Houdini Processed"));
	UHoudiniPythonManger::Get().Create(HoudiniAsset);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FQuickUISetupModule, QuickUISetup)
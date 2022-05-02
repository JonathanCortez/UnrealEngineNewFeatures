// Fill out your copyright notice in the Description page of Project Settings.


#include "HoudiniPythonClass.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetComponent.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameter.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFolder.h"

#include "Dom/JsonObject.h"
#include "JsonObjectConverter.h"
#include "Misc/FileHelper.h"
#include "QuickUISettings.h"

#include "HoudiniEngineRuntime/Private/HoudiniParameterButton.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterButtonStrip.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterChoice.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterColor.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFile.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFloat.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFolder.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFolderList.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterInt.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterLabel.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterMultiParm.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterRamp.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterSeparator.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterString.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterToggle.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterFile.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterOperatorPath.h"

#define LOCTEXT_NAMESPACE "FHoudiniPythonClassData"

UHoudiniPythonClass::UHoudiniPythonClass()
{
	
}

void UHoudiniPythonClass::ConstructParameterLayout(UHoudiniAssetComponent* HoudiniAssetComponent)
{
	ClassHoudiniAssetComponent = HoudiniAssetComponent;
	ParameterCount = HoudiniAssetComponent->GetNumParameters();
	HoudiniAssetName = HoudiniAssetComponent->GetAttachmentRootActor()->GetName();
	TArray<UHoudiniParameter*> Parameters;
	
	//Get User made/added Parameters
	for(int32 i = 0; i < HoudiniAssetComponent->GetNumParameters(); i++)
	{
		UHoudiniParameter* Parameter = HoudiniAssetComponent->GetParameterAt(i);

		if(Parameter->GetParentParmId() != -1)
		{
			UHoudiniParameter* ParentParm = HoudiniAssetComponent->GetParameterAt(Parameter->GetParentParmId());
			if(ParentParm->GetParameterType() == EHoudiniParameterType::FloatRamp)
				continue;
		}
		
		Parameters.Add(Parameter);
	}
	
	// Fill Struct to later make to a json file.
	for(UHoudiniParameter* Parm : Parameters)
	{
		EHoudiniParameterType parmType = Parm->GetParameterType();
		FString typeString = *UEnum::GetDisplayValueAsText(Parm->GetParameterType()).ToString();
		
		if(parmType == EHoudiniParameterType::Folder)
		{
			UHoudiniParameterFolder* FolderParm = CastChecked<UHoudiniParameterFolder>(Parm);
 
			FFolderSetup FolderStruct;
			FolderStruct.FolderName = Parm->GetParameterName();
			FolderStruct.FolderLabel = Parm->GetParameterLabel();
			FolderStruct.FolderID = Parm->GetParmId();
			FolderStruct.FolderConditions.HideCondition = Parm->GetHideCondition();
			FolderStruct.FolderConditions.DisableCondition = Parm->GetDisableCondition();
			FolderStruct.FolderExpression = Parm->GetExpression();
			FolderStruct.FolderVisible = Parm->IsVisible();
			FolderStruct.FolderDisable = Parm->IsDisabled();
			
			FString folderTypeString = *UEnum::GetDisplayValueAsText(FolderParm->GetFolderType()).ToString();
			FolderStruct.FolderType = folderTypeString;
 
			int32 parentId;
			if(IsTabChild(FolderParm, Parameters, parentId))
			{
				FolderListLayout[parentId].FolderSetups.Add(FolderStruct);
				FolderLayout.Add(Parm->GetParmId(),FolderStruct);
   
				LayoutSetup[FolderListLayout[parentId].ParentName].ParameterTypes.Add(Parm->GetParmId(),"Folder");
				
				FLayoutSetup newLayoutSetup;
                LayoutSetup.Add(Parm->GetParameterName(), newLayoutSetup);
				
				continue;
			}
			
			if(IsFolderChild(Parm, Parameters))
			{
				int32 ParentId = Parm->GetParentParmId();
				for(auto& folder : FolderLayout)
				{
					if(folder.Value.FolderID == ParentId)
					{
						if(LayoutSetup.Contains(folder.Value.FolderName))
						{
							LayoutSetup[folder.Value.FolderName].ParameterTypes.Add(Parm->GetParmId(),"Folder");
						}
						else
						{
							FLayoutSetup newLayoutSetup;
							newLayoutSetup.ParameterTypes.Add(Parm->GetParmId(),"Folder");
							LayoutSetup.Add(folder.Value.FolderName, newLayoutSetup);
						}
						break;
					}
				}
			}
			else
			{
				if(LayoutSetup.Contains("Root"))
				{
					LayoutSetup["Root"].ParameterTypes.Add(Parm->GetParmId(),"Folder");
				}
				else
				{
					FLayoutSetup newLayoutSetup;
					newLayoutSetup.ParameterTypes.Add(Parm->GetParmId(),"Folder");
					LayoutSetup.Add("Root", newLayoutSetup);
					UE_LOG(LogTemp, Warning, TEXT("Add Folder to Root"));
				}
				
				FLayoutSetup newLayoutSetup;
				LayoutSetup.Add(Parm->GetParameterName(), newLayoutSetup);
				
			}
			FolderLayout.Add(Parm->GetParmId(),FolderStruct);
			
		}
		else if(parmType == EHoudiniParameterType::MultiParm)
		{
			UHoudiniParameterMultiParm* MultiParmClass = CastChecked<UHoudiniParameterMultiParm>(Parm);
			
			FFolderSetup FolderStruct;
			FolderStruct.FolderName = Parm->GetParameterName();
			FolderStruct.FolderLabel = Parm->GetParameterLabel();
			FolderStruct.FolderID = Parm->GetParmId();
			FolderStruct.FolderConditions.HideCondition = Parm->GetHideCondition();
			FolderStruct.FolderConditions.DisableCondition = Parm->GetDisableCondition();
			FolderStruct.FolderExpression = Parm->GetExpression();
			FolderStruct.FolderVisible = Parm->IsVisible();
			FolderStruct.FolderDisable = Parm->IsDisabled();
 
			FString folderTypeString = *UEnum::GetDisplayValueAsText(Parm->GetParameterType()).ToString();
			FolderStruct.FolderType = folderTypeString;
 
			if(IsFolderChild(Parm, Parameters))
			{
				int32 ParentId = Parm->GetParentParmId();
				for(auto& folder : FolderLayout)
				{
					if(folder.Value.FolderID == ParentId)
					{
						if(LayoutSetup.Contains(folder.Value.FolderName))
						{
							LayoutSetup[folder.Value.FolderName].ParameterTypes.Add(Parm->GetParmId(),"Folder");
						}
						else
						{
							FLayoutSetup newLayoutSetup;
							newLayoutSetup.ParameterTypes.Add(Parm->GetParmId(),"Folder");
							LayoutSetup.Add(folder.Value.FolderName, newLayoutSetup);
						}
						break;
					}
				}
			}
			else
			{
				if(LayoutSetup.Contains("Root"))
				{
					LayoutSetup["Root"].ParameterTypes.Add(Parm->GetParmId(),"Folder");
				}
				else
				{
					FLayoutSetup newLayoutSetup;
					newLayoutSetup.ParameterTypes.Add(Parm->GetParmId(),"Folder");
					LayoutSetup.Add("Root", newLayoutSetup);
					UE_LOG(LogTemp, Warning, TEXT("Add Folder to Root"));
				}
				
				FLayoutSetup newLayoutSetup;
				LayoutSetup.Add(Parm->GetParameterName(), newLayoutSetup);
				
			}
			FolderLayout.Add(Parm->GetParmId(),FolderStruct);
 
			
		}
		else if(parmType == EHoudiniParameterType::FolderList)
		{
			UHoudiniParameterFolderList* FolderListClass = CastChecked<UHoudiniParameterFolderList>(Parm);
 
			if(FolderListClass->IsTabMenu())
			{
				FFolderListSetup FolderListSetup;
				FolderListSetup.bIsTab = FolderListClass->IsTabMenu();
				FolderListSetup.TabsCount = FolderListClass->GetTabs().Num();
				FolderListSetup.ParentName = Parm->GetParameterName();
				FolderListSetup.ParentID = Parm->GetParmId();
 
				FString folderTypeString = *UEnum::GetDisplayValueAsText(FolderListClass->GetTabs()[0]->GetFolderType()).ToString();
				FolderListSetup.FolderListType = folderTypeString;
 
				if(Parm->IsChildParameter())
				{
					int32 ParentId = Parm->GetParentParmId();
					UE_LOG(LogTemp, Warning, TEXT("FolderList ParentID: %d"),ParentId);
				}
				else
				{
					if(LayoutSetup.Contains("Root"))
					{
						LayoutSetup["Root"].ParameterTypes.Add(Parm->GetParmId(),"FolderList");
					}
					else
					{
						FLayoutSetup newLayoutSetup;
						newLayoutSetup.ParameterTypes.Add(Parm->GetParmId(),"FolderList");
						LayoutSetup.Add("Root", newLayoutSetup);
					}
 
					FLayoutSetup newLayoutSetup;
					LayoutSetup.Add(Parm->GetParameterName(), newLayoutSetup);
				}
				FolderListLayout.Add(Parm->GetParmId(), FolderListSetup);
			}
			
		}
		else
		{
			FParameterSetup ParmStruct;
			ParmStruct.ParameterName = Parm->GetParameterName();
			ParmStruct.ParameterLabel = Parm->GetParameterLabel();
			ParmStruct.ParameterID = Parm->GetParmId();
			ParmStruct.ParameterVisible = Parm->IsVisible();
			ParmStruct.ParameterDisable = Parm->IsDisabled();
			ParmStruct.ParameterNeighbour = Parm->GetJoinNext();
			ParmStruct.ParameterValue = GetParameterValue(Parm,ParmStruct);
			
			ParmStruct.ParameterConditions.HideCondition = Parm->GetHideCondition();
			ParmStruct.ParameterConditions.DisableCondition = Parm->GetDisableCondition();
	
			if(Parm->HasExpression())
				ParmStruct.ParameterExpression = Parm->GetExpression();
			
			if(Parm->IsChildParameter())
			{
				int32 ParentId = Parm->GetParentParmId();
				bool bfolderFound = false;
				for(auto& folderList : FolderListLayout)
				{
					for(auto& folder : folderList.Value.FolderSetups)
					{
						if(folder.FolderID == ParentId)
						{
							folder.FolderParameters.Add(ParmStruct);
							bfolderFound = true;
							LayoutSetup[folder.FolderName].ParameterTypes.Add(Parm->GetParmId(),ParmStruct.ParameterType);
							break;
						}
					}
 
					if(bfolderFound)
						break; 
				}
 
				if(bfolderFound)
					continue;
				
				for(auto& folder : FolderLayout)
				{
					if(folder.Value.FolderID == ParentId)
					{
						folder.Value.FolderParameters.Add(ParmStruct);
						LayoutSetup[folder.Value.FolderName].ParameterTypes.Add(Parm->GetParmId(),ParmStruct.ParameterType);
						break;
					}
				}
			}
			else
			{
				if(LayoutSetup.Contains("Root"))
				{
					LayoutSetup["Root"].ParameterTypes.Add(Parm->GetParmId(),ParmStruct.ParameterType);
				}
				else
				{
					FLayoutSetup newLayoutSetup;
					newLayoutSetup.ParameterTypes.Add(Parm->GetParmId(),ParmStruct.ParameterType);
					LayoutSetup.Add("Root", newLayoutSetup);
				}
				RootLayout.Add(Parm->GetParmId(),ParmStruct);
			}
			
		}
	}
	
}

void UHoudiniPythonClass::ConstructJsonLayout(FString Path)
{
	HoudiniPythonJsonFullPath = Path;
	TSharedPtr<FJsonObject> RootJsonObject = MakeShareable(new FJsonObject());
	TArray< TSharedPtr<FJsonValue> > RootParmsArray;
	RecursiveLayoutBuild(RootParmsArray,"Root");
	RootJsonObject->SetArrayField("Root", RootParmsArray);
	
	FString OutputString;
	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(RootJsonObject.ToSharedRef(), Writer);

	FFileHelper::SaveStringToFile(*OutputString,*Path);
}

void ParameterLayout(TSharedPtr<FJsonObject>& Obj, FParameterSetup Parm)
{
	Obj->SetStringField("Name", Parm.ParameterName);
	Obj->SetStringField("Label", Parm.ParameterLabel);
	Obj->SetStringField("Type", Parm.ParameterType);
	Obj->SetStringField("Default", Parm.ParameterValue);
	Obj->SetStringField("Callback Script", Parm.ParameterExpression);
	Obj->SetBoolField("Invisible", !Parm.ParameterVisible);
	Obj->SetBoolField("Disable", Parm.ParameterDisable);
	Obj->SetBoolField("Horizontal join", Parm.ParameterNeighbour);

	TSharedPtr<FJsonObject> ParmConditionJsonObject = MakeShareable(new FJsonObject());
	ParmConditionJsonObject->SetStringField("Hide When", Parm.ParameterConditions.HideCondition);
	ParmConditionJsonObject->SetStringField("Disable When", Parm.ParameterConditions.DisableCondition);
	Obj->SetObjectField("Conditions", ParmConditionJsonObject);

	if(Parm.bParameterSettings)
	{
		TSharedPtr<FJsonObject> ParmSettingJsonObject = MakeShareable(new FJsonObject());
		ParmSettingJsonObject->SetStringField("Min", Parm.ParameterSettings.minValue);
		ParmSettingJsonObject->SetStringField("Max", Parm.ParameterSettings.maxValue);
		ParmSettingJsonObject->SetBoolField("MinLock", Parm.ParameterSettings.hasMin);
		ParmSettingJsonObject->SetBoolField("MaxLock", Parm.ParameterSettings.hasMax);
		ParmSettingJsonObject->SetStringField("Size", Parm.ParameterSettings.CountValues);
		ParmSettingJsonObject->SetStringField("Values", Parm.ParameterSettings.Values);

		Obj->SetObjectField("Settings", ParmSettingJsonObject);
	}
}

void FolderLayoutSetup(TSharedPtr<FJsonObject>& JsonObj, FFolderSetup Folder)
{
	TArray< TSharedPtr<FJsonValue> > FolderParmsArray;
	
	JsonObj->SetStringField("Name", Folder.FolderName);
	JsonObj->SetStringField("Label", Folder.FolderLabel);
	JsonObj->SetStringField("Type", Folder.FolderType);
	JsonObj->SetStringField("Callback Script", Folder.FolderExpression);
	JsonObj->SetBoolField("Invisible", Folder.FolderVisible);
	JsonObj->SetBoolField("Disable", Folder.FolderDisable);

	TSharedPtr<FJsonObject> FolderConditionJsonObject = MakeShareable(new FJsonObject());
	FolderConditionJsonObject->SetStringField("Hide When", Folder.FolderConditions.HideCondition);
	FolderConditionJsonObject->SetStringField("Disable When", Folder.FolderConditions.DisableCondition);
	JsonObj->SetObjectField("Conditions", FolderConditionJsonObject);

	for(auto& parameterChild : Folder.FolderParameters)
	{
		TSharedPtr<FJsonObject> newParmJsonObject = MakeShareable(new FJsonObject());
		ParameterLayout(newParmJsonObject, parameterChild);
		TSharedRef< FJsonValueObject > JsonValue = MakeShareable( new FJsonValueObject( newParmJsonObject) );
		FolderParmsArray.Add(JsonValue);
	}

	JsonObj->SetArrayField("FolderParameters", FolderParmsArray);
}

void UHoudiniPythonClass::RecursiveLayoutBuild(TArray< TSharedPtr<FJsonValue> >& JsonArray, const FString name)
{
	
	for(auto Parameter : LayoutSetup[name].ParameterTypes)
	{
		if(Parameter.Value == "FolderList")
		{
			TSharedPtr<FJsonObject> FolderListJsonObject = MakeShareable(new FJsonObject());
			TArray< TSharedPtr<FJsonValue> > FolderListObjArray;
			
			FolderListJsonObject->SetStringField("Parent Name",FolderListLayout[Parameter.Key].ParentName);
			FolderListJsonObject->SetNumberField("Tab Count",FolderListLayout[Parameter.Key].TabsCount);
			FolderListJsonObject->SetStringField("Type", FolderListLayout[Parameter.Key].FolderListType);

			for(auto& folderChild :  FolderListLayout[Parameter.Key].FolderSetups)
			{
				TSharedPtr<FJsonObject> newFolderJsonObject = MakeShareable(new FJsonObject());
				// RecursiveLayoutBuild(newFolderJsonObject, folderChild.FolderName);
				FolderLayoutSetup(newFolderJsonObject, folderChild);
				TSharedRef< FJsonValueObject > FolderListValue = MakeShareable( new FJsonValueObject( newFolderJsonObject) );
				FolderListObjArray.Add(FolderListValue);
			}

			FolderListJsonObject->SetArrayField("Folders", FolderListObjArray);
			TSharedRef< FJsonValueObject > FolderListValue = MakeShareable( new FJsonValueObject( FolderListJsonObject) );
			JsonArray.Add(FolderListValue);
			// JsonObj->SetObjectField("FolderList",FolderListJsonObject);
			
		}
		else if(Parameter.Value == "Folder")
		{
			TSharedPtr<FJsonObject> FolderJsonObject = MakeShareable(new FJsonObject());
			TArray< TSharedPtr<FJsonValue> > FolderObjArray;

			FolderJsonObject->SetStringField("Name", FolderLayout[Parameter.Key].FolderName);
			FolderJsonObject->SetStringField("Label", FolderLayout[Parameter.Key].FolderLabel);
			FolderJsonObject->SetStringField("Type", FolderLayout[Parameter.Key].FolderType);

			for(auto& parameterChild : FolderLayout[Parameter.Key].FolderParameters)
			{
				TSharedPtr<FJsonObject> newParmJsonObject = MakeShareable(new FJsonObject());
				ParameterLayout(newParmJsonObject, parameterChild);
				TSharedRef< FJsonValueObject > JsonValue = MakeShareable( new FJsonValueObject( newParmJsonObject) );
				FolderObjArray.Add(JsonValue);
			}

			FolderJsonObject->SetArrayField("FolderParameters", FolderObjArray);
			TSharedRef< FJsonValueObject > FolderValue = MakeShareable( new FJsonValueObject( FolderJsonObject) );
			JsonArray.Add(FolderValue);
			// JsonObj->SetObjectField("Folder",FolderJsonObject);
		}
		else
		{
			TSharedPtr<FJsonObject> ParameterJsonObject = MakeShareable(new FJsonObject());
			ParameterLayout(ParameterJsonObject, RootLayout[Parameter.Key]);
			TSharedRef< FJsonValueObject > ParameterValue = MakeShareable( new FJsonValueObject( ParameterJsonObject) );
			JsonArray.Add(ParameterValue);
			// JsonObj->SetObjectField(Parameter.Value, ParameterJsonObject);
		}
	}
}

int32 RampEnum(EHoudiniRampInterpolationType rampType)
{
	switch (rampType)
	{
		case EHoudiniRampInterpolationType::InValid:
			return -1;

		case EHoudiniRampInterpolationType::CONSTANT:
			return 0;

		case EHoudiniRampInterpolationType::LINEAR:
			return 1;

		case EHoudiniRampInterpolationType::CATMULL_ROM:
			return 2;

		case EHoudiniRampInterpolationType::MONOTONE_CUBIC:
			return 3;

		case EHoudiniRampInterpolationType::BEZIER:
			return 4;

		case EHoudiniRampInterpolationType::BSPLINE:
			return 5;

		case EHoudiniRampInterpolationType::HERMITE:
			return 6;
	}
	return -1;
}


FString UHoudiniPythonClass::GetParameterValue(UHoudiniParameter* Parameter, FParameterSetup& ParameterStruct)
{
	switch (Parameter->GetParameterType())
	{
		case EHoudiniParameterType::Float:
		{
			UHoudiniParameterFloat* FloatClass = CastChecked<UHoudiniParameterFloat>(Parameter);

			if(FloatClass)
			{
				FParameterSettingSetup floatSetting;
				floatSetting.minValue = FString::SanitizeFloat(FloatClass->GetMin());
				floatSetting.maxValue = FString::SanitizeFloat(FloatClass->GetMax());
				floatSetting.hasMin = FloatClass->HasMin();
				floatSetting.hasMax = FloatClass->HasMax();
				floatSetting.CountValues = FString::SanitizeFloat(FloatClass->GetNumberOfValues());
				ParameterStruct.ParameterSettings = floatSetting;
				ParameterStruct.bParameterSettings = true;

				if(FloatClass->GetNumberOfValues() == 4)
				{
					ParameterStruct.ParameterType = TEXT("Float Vector 4");
				}
				else if(FloatClass->GetNumberOfValues() == 3)
				{
					ParameterStruct.ParameterType = TEXT("Float Vector 3");
				}
				else if(FloatClass->GetNumberOfValues() == 2)
				{
					ParameterStruct.ParameterType = TEXT("Float Vector 2");
				}
				else
				{
					ParameterStruct.ParameterType = TEXT("Float");
				}
				
				if(FloatClass->GetNumberOfValues() > 1)
				{
					FString floatString = "(";
					for(int32 i = 0; i < FloatClass->GetNumberOfValues(); i++)
					{
						float value;
						FloatClass->GetValueAt(i,value);
						floatString += FString::SanitizeFloat(value);
					
						if(i != FloatClass->GetNumberOfValues()-1)
							floatString += ", ";
					}
					floatString += ")";
					return floatString;
				}
				
				float value;
				FloatClass->GetValueAt(0,value);
				return FString::SanitizeFloat(value);
			}
			return "Failed";
		}
		
		case EHoudiniParameterType::Int:
		{
			UHoudiniParameterInt* IntClass = CastChecked<UHoudiniParameterInt>(Parameter);

			if(IntClass)
			{
				FParameterSettingSetup intSetting;
				intSetting.minValue = FString::FromInt(IntClass->GetMin());
				intSetting.maxValue = FString::FromInt(IntClass->GetMax());
				intSetting.hasMin = IntClass->HasMin();
				intSetting.hasMax = IntClass->HasMax();
				intSetting.CountValues = FString::FromInt(IntClass->GetNumberOfValues());
				ParameterStruct.ParameterSettings = intSetting;
				ParameterStruct.bParameterSettings = true;
				
				if(IntClass->GetNumberOfValues() == 4)
				{
					ParameterStruct.ParameterType = "Integer Vector 4";
				}
				else if(IntClass->GetNumberOfValues() == 3)
				{
					ParameterStruct.ParameterType = "Integer Vector 3";
				}
				else if(IntClass->GetNumberOfValues() == 2)
				{
					ParameterStruct.ParameterType = "Integer Vector 2";
				}
				else
				{
					ParameterStruct.ParameterType = "Integer";
				}

				if(IntClass->GetNumberOfValues() > 1)
				{
					FString floatString = "(";
					for(int32 i = 0; i < IntClass->GetNumberOfValues(); i++)
					{
						int32 value;
						IntClass->GetValueAt(i,value);
						floatString += FString::FromInt(value);
					
						if(i != IntClass->GetNumberOfValues()-1)
							floatString += ", ";
					}
					floatString += ")";
					return floatString;
				}
				
				int32 value;
				IntClass->GetValueAt(0,value);
				return FString::FromInt(value);
				
			}
			return "Failed";
		}

		case EHoudiniParameterType::Button:
		{
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "Button";
			return "None";
		}

		case EHoudiniParameterType::Separator:
		{
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "Separator";
			return "None";
		}

		case EHoudiniParameterType::Color:
		{
			UHoudiniParameterColor* ColorClass = CastChecked<UHoudiniParameterColor>(Parameter);
			ParameterStruct.ParameterType = "Color";
			ParameterStruct.bParameterSettings = false;
				
			if(ColorClass)
				return ColorClass->GetColorValue().ToString();

			return "Failed";
		}

		case EHoudiniParameterType::Label:
		{
			UHoudiniParameterLabel* LabelClass = CastChecked<UHoudiniParameterLabel>(Parameter);
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "Label";
				
			if(LabelClass)
			{
				TArray<FString> StringItems = LabelClass->LabelStrings;
				
				FParameterSettingSetup LabelSetting;
				LabelSetting.CountValues = FString::FromInt(StringItems.Num());

				FString labelValue = "(";
				for(int32 i = 0; i < StringItems.Num(); i++)
				{
					labelValue += LabelClass->GetStringAtIndex(i);

					if(i != StringItems.Num()-1)
						labelValue += ", ";
				}
				labelValue += ")";
				return labelValue;
			}

			return "Failed";
		}

		case EHoudiniParameterType::Toggle:
		{
			UHoudiniParameterToggle* ToggleClass = CastChecked<UHoudiniParameterToggle>(Parameter);
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "Toggle";
				
			if(ToggleClass)
			{
				FParameterSettingSetup ToggleSetting;
				ToggleSetting.CountValues = FString::FromInt(ToggleClass->GetNumValues());

				FString toggleValues = "(";
				for(int32 i = 0; i < ToggleClass->GetNumValues(); i++)
				{
					toggleValues += ToggleClass->GetValueAt(i) ? "True" : "False";

					if(i != ToggleClass->GetNumValues()-1)
						toggleValues += ", ";
				}
				toggleValues += ")";
				return toggleValues;
			}
			return "Failed";
		}

		case EHoudiniParameterType::IntChoice:
		{
			UHoudiniParameterChoice* ChoiceClass = CastChecked<UHoudiniParameterChoice>(Parameter);
			ParameterStruct.bParameterSettings = true;
			ParameterStruct.ParameterType = "Ordered Combo/Menu";

			if(ChoiceClass)
			{
				FParameterSettingSetup ChoiceSetting;

				FString ChoiceValuesLabel = "[[";
				FString ChoiceValuesIndex = "[";
				// ChoiceValues += "'current_value' : '" + ChoiceClass->GetStringValue() + "', 'general_values' : [";
				for(int32 i = 0;  i < ChoiceClass->GetNumChoices(); i++)
				{
					ChoiceValuesLabel += "'" + *ChoiceClass->GetStringChoiceLabelAt(i) + "'";
					ChoiceValuesIndex += "'" + FString::FromInt(i) + "'";
					
					if(i != ChoiceClass->GetNumChoices()-1)
					{
						ChoiceValuesLabel += ", ";
						ChoiceValuesIndex	+= ", ";
					}
					
				}
				ChoiceValuesLabel += "],";
				ChoiceValuesIndex += "]]";
				
				ChoiceSetting.Values = ChoiceValuesLabel + ChoiceValuesIndex;
				ParameterStruct.ParameterSettings = ChoiceSetting;
				return "Failed";
			}
				
			return "Failed";
		}

		case EHoudiniParameterType::StringChoice:
		{
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "Ordered Combo/Menu";
			return "Failed";
		}

		case EHoudiniParameterType::ButtonStrip:
		{
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "Button Strip";
			return "Failed";
		}

		case EHoudiniParameterType::File:
		{
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "File";
			return "Failed";
		}

		case EHoudiniParameterType::FloatRamp:
		{
			ParameterStruct.bParameterSettings = true;
			ParameterStruct.ParameterType = "Ramp";
			UHoudiniParameterRampFloat* FloatRampClass = CastChecked<UHoudiniParameterRampFloat>(Parameter);
			
			if(FloatRampClass)
			{
				FParameterSettingSetup RampSetting;
				
				FString rampValue = "{";
				FString positionsStr = "'positions' : [";
				FString valuesStr = "'values' : [";
				FString interpStr = "'interpolations' : [";
				int32 index = 0;
				TArray<UHoudiniParameterRampFloatPoint*> Points = FloatRampClass->Points;
				for(auto point : Points)
				{
					positionsStr += "'" + FString::FromInt(point->Position) + "'";
					valuesStr +=  "'" + FString::FromInt(point->Value) + "'";
					interpStr +=  "'" + FString::FromInt(RampEnum(point->GetInterpolation())) + "'";

					if(index != Points.Num()-1)
					{
						positionsStr += ", ";
						valuesStr	+= ", ";
						interpStr	+= ", ";
					}
					index++;
				}
				positionsStr += "],";
				valuesStr += "],";
				interpStr += "]}";
				rampValue += positionsStr + valuesStr + interpStr;
				RampSetting.Values = rampValue;
				ParameterStruct.ParameterSettings = RampSetting;
				return "None";
			}
				
			return "Failed";
		}

		case EHoudiniParameterType::String:
		{
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "String";
			return "Failed";
		}

		case EHoudiniParameterType::ColorRamp:
		{
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "Ramp Color";
			return "Failed";
		}

		case EHoudiniParameterType::StringAssetRef:
		{
			ParameterStruct.bParameterSettings = false;
			ParameterStruct.ParameterType = "String Asset Ref";
			return "Failed";
		}
		
		default:
		{
			
		}
		
	}
	return "Failed";
}

bool UHoudiniPythonClass::IsFolderChild(UHoudiniParameter* FolderParm, TArray<UHoudiniParameter*> Parameters)
{
	if(FolderParm->IsChildParameter())
	{
		int32 parentID = FolderParm->GetParentParmId();
		UHoudiniParameter* parentParm = nullptr; //FolderList Parameter.
		for(UHoudiniParameter* Parm : Parameters)
		{
			if(parentID == Parm->GetParmId())
			{
				parentParm = Parm;
				break;
			}
		}

		if(parentParm)
		{
			//Check if FolderList Parameter is in another folder or on root.
			if(parentParm->IsChildParameter())
			{
				return true;
			}
			return false;
		}
		
	}
	return false;
}


bool UHoudiniPythonClass::IsTabChild(UHoudiniParameterFolder* FolderParm, TArray<UHoudiniParameter*> Parameters, int32& parentID)
{
	UHoudiniParameter* parentParm = nullptr;
	for(auto& folderlist : FolderListLayout)
	{
		for(UHoudiniParameter* Parm : Parameters)
		{
			if(folderlist.Value.ParentID == Parm->GetParmId())
			{
				parentParm = Parm;
				parentID = folderlist.Key;
				break;
			}
		}
		if(parentParm)
			break;
	}
	
	if(parentParm)
	{
		UHoudiniParameterFolderList* FolderListClass = CastChecked<UHoudiniParameterFolderList>(parentParm);
		if(FolderListClass)
		{
			for(auto& folder : FolderListClass->GetTabs())
			{
				if(folder == FolderParm)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool UHoudiniPythonClass::NeedUpdate(UHoudiniAssetComponent* HoudiniAssetComponent)
{
	if(ParameterCount != HoudiniAssetComponent->GetNumParameters())
	{
		ConstructParameterLayout(HoudiniAssetComponent);
		ConstructJsonLayout(HoudiniPythonJsonFullPath);

		return true;
	}
	return false;
}


UHoudiniAssetComponent* UHoudiniPythonClass::GetComponent()
{
	return ClassHoudiniAssetComponent;
}

// TArray<FParameterSetup> UHoudiniPythonClass::GetLayoutInfo()
// {
// }

#undef LOCTEXT_NAMESPACE
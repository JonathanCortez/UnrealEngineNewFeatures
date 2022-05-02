#include "SHoudiniAssetEditorViewportToolBar.h"
#include "SHoudiniAssetEditorViewport.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "UObject/Package.h"
#include "Components/StaticMeshComponent.h"
#include "EditorStyleSet.h"
#include "Engine/StaticMesh.h"
#include "IHoudiniAssetEditor.h"
#include "HoudiniAssetEditorActions.h"
#include "Slate/SceneViewport.h"
#include "ComponentReregisterContext.h"
#include "Runtime/Analytics/Analytics/Public/AnalyticsEventAttribute.h"
#include "Runtime/Analytics/Analytics/Public/Interfaces/IAnalyticsProvider.h"
#include "EngineAnalytics.h"
#include "Widgets/Docking/SDockTab.h"
#include "Engine/StaticMeshSocket.h"
#include "Editor/UnrealEd/Public/SEditorViewportToolBarMenu.h"
#include "HoudiniAssetViewportLODCommands.h"

#define LOCTEXT_NAMESPACE "HoudiniAssetEditorViewportToolbar"

void SHoudiniAssetEditorViewportToolbar::Construct(const FArguments& InArgs,
	TSharedPtr<ICommonEditorViewportToolbarInfoProvider> InInfoProvider)
{
	SCommonEditorViewportToolbarBase::Construct(SCommonEditorViewportToolbarBase::FArguments(), InInfoProvider);

}

TSharedRef<SWidget> SHoudiniAssetEditorViewportToolbar::GenerateShowMenu() const
{
	GetInfoProvider().OnFloatingButtonClicked();

	TSharedRef<SEditorViewport> ViewportRef = GetInfoProvider().GetViewportWidget();

	const bool bInShouldCloseWindowAfterMenuSelection = true;
	FMenuBuilder ShowMenuBuilder(bInShouldCloseWindowAfterMenuSelection, ViewportRef->GetCommandList());
	{
		auto Commands = FHoudiniAssetEditorCommands::Get();

		// ShowMenuBuilder.AddMenuEntry(Commands.SetShowSockets);
		ShowMenuBuilder.AddMenuEntry(Commands.SetShowPivot,
		NAME_None,
		Commands.SetShowPivot->GetLabel(),
		Commands.SetShowPivot->GetDescription(),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowPivot.Small")
		);
		ShowMenuBuilder.AddMenuEntry(Commands.SetShowVertices,
		NAME_None,
		Commands.SetShowVertices->GetLabel(),
		Commands.SetShowVertices->GetDescription(),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowVertices.Small")
		);

		ShowMenuBuilder.AddMenuSeparator();

		ShowMenuBuilder.AddMenuEntry(Commands.SetShowGrid,
		NAME_None,
		Commands.SetShowGrid->GetLabel(),
		Commands.SetShowGrid->GetDescription(),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowGrid.Small")
		);
		
		ShowMenuBuilder.AddMenuEntry(Commands.SetShowBounds,
		NAME_None,
		Commands.SetShowBounds->GetLabel(),
		Commands.SetShowBounds->GetDescription(),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowBounds.Small")
		);
		
		ShowMenuBuilder.AddMenuEntry(Commands.SetShowSimpleCollision);
		ShowMenuBuilder.AddMenuEntry(Commands.SetShowComplexCollision);
		
		ShowMenuBuilder.AddMenuEntry(Commands.SetShowPhysicalMaterialMasks,
		NAME_None,
		Commands.SetShowPhysicalMaterialMasks->GetLabel(),
		Commands.SetShowPhysicalMaterialMasks->GetDescription(),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowVertexColor.Small")
		);

		ShowMenuBuilder.AddMenuSeparator();

		ShowMenuBuilder.AddMenuEntry(Commands.SetShowNormals,
		NAME_None,
		Commands.SetShowNormals->GetLabel(),
		Commands.SetShowNormals->GetDescription(),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowNormals.Small")
		);
		
		ShowMenuBuilder.AddMenuEntry(Commands.SetShowTangents,
		NAME_None,
		Commands.SetShowTangents->GetLabel(),
		Commands.SetShowTangents->GetDescription(),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowTangents.Small")
		);
		
		ShowMenuBuilder.AddMenuEntry(Commands.SetShowBinormals,
		NAME_None,
		Commands.SetShowBinormals->GetLabel(),
		Commands.SetShowBinormals->GetDescription(),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowBinormals.Small")
		);

		//ShowMenuBuilder.AddMenuSeparator();
		//ShowMenuBuilder.AddMenuEntry(Commands.SetShowMeshEdges);
	}

	return ShowMenuBuilder.MakeWidget();
}

void SHoudiniAssetEditorViewportToolbar::ExtendLeftAlignedToolbarSlots(TSharedPtr<SHorizontalBox> MainBoxPtr,
	TSharedPtr<SViewportToolBar> ParentToolBarPtr) const
{
	const FMargin ToolbarSlotPadding(2.0f, 2.0f);

	if (!MainBoxPtr.IsValid())
	{
		return;
	}

	MainBoxPtr->AddSlot()
		.AutoWidth()
		.Padding(ToolbarSlotPadding)
		[
			SNew(SEditorViewportToolbarMenu)
			.Label(this, &SHoudiniAssetEditorViewportToolbar::GetLODMenuLabel)
			.OnGetMenuContent(this, &SHoudiniAssetEditorViewportToolbar::GenerateLODMenu)
			.Cursor(EMouseCursor::Default)
			.ParentToolBar(ParentToolBarPtr)
		];
}

TSharedRef<SWidget> SHoudiniAssetEditorViewportToolbar::GenerateLODMenu() const
{
	const FHoudiniAssetViewportLODCommands& Actions = FHoudiniAssetViewportLODCommands::Get();

	TSharedRef<SEditorViewport> BaseViewportRef = GetInfoProvider().GetViewportWidget();
	TSharedRef<SHoudiniAssetEditorViewport> ViewportRef = StaticCastSharedRef<SHoudiniAssetEditorViewport, SEditorViewport>(BaseViewportRef);

	TSharedPtr<FExtender> MenuExtender = GetInfoProvider().GetExtenders();

	const bool bInShouldCloseWindowAfterMenuSelection = true;
	FMenuBuilder InMenuBuilder(bInShouldCloseWindowAfterMenuSelection, ViewportRef->GetCommandList(), MenuExtender);

	InMenuBuilder.PushCommandList(ViewportRef->GetCommandList().ToSharedRef());
	if (MenuExtender.IsValid())
	{ 
		InMenuBuilder.PushExtender(MenuExtender.ToSharedRef());
	}

	{
		// LOD Models
		InMenuBuilder.BeginSection("StaticMeshViewportPreviewLODs", LOCTEXT("ShowLOD_PreviewLabel", "Preview LODs"));
		{
			InMenuBuilder.AddMenuEntry(Actions.LODAuto);
			InMenuBuilder.AddMenuEntry(Actions.LOD0);

			int32 LODCount = ViewportRef->GetLODModelCount();
			for (int32 LODId = 1; LODId < LODCount; ++LODId)
			{
				FString TitleLabel = FString::Printf(TEXT(" LOD %d"), LODId);

				FUIAction Action(FExecuteAction::CreateSP(ViewportRef, &SHoudiniAssetEditorViewport::OnSetLODModel, LODId + 1),
					FCanExecuteAction(),
					FIsActionChecked::CreateSP(ViewportRef, &SHoudiniAssetEditorViewport::IsLODModelSelected, LODId + 1));

				InMenuBuilder.AddMenuEntry(FText::FromString(TitleLabel), FText::GetEmpty(), FSlateIcon(), Action, NAME_None, EUserInterfaceActionType::RadioButton);
			}
		}
		InMenuBuilder.EndSection();
	}

	InMenuBuilder.PopCommandList();
	if (MenuExtender.IsValid())
	{
		InMenuBuilder.PopExtender();
	}

	return InMenuBuilder.MakeWidget();	
}

FText SHoudiniAssetEditorViewportToolbar::GetLODMenuLabel() const
{
	FText Label = LOCTEXT("LODMenu_AutoLabel", "LOD Auto");

	TSharedRef<SEditorViewport> BaseViewportRef = GetInfoProvider().GetViewportWidget();
	TSharedRef<SHoudiniAssetEditorViewport> ViewportRef = StaticCastSharedRef<SHoudiniAssetEditorViewport, SEditorViewport>(BaseViewportRef);

	int32 LODSelectionType = ViewportRef->GetLODSelection();

	if (LODSelectionType > 0)
	{
		FString TitleLabel = FString::Printf(TEXT("LOD %d"), LODSelectionType - 1);
		Label = FText::FromString(TitleLabel);
	}

	return Label;
}

#undef LOCTEXT_NAMESPACE
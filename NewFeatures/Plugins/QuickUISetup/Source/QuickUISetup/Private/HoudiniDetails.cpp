#include "HoudiniDetails.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"

#include "UIPythonBridge.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetActor.h"


#define LOCTEXT_NAMESPACE "HoudiniPythonDetail"

TSharedRef<IDetailCustomization> FHoudiniDetails::MakeInstance()
{
	return MakeShareable(new FHoudiniDetails);
}

void FHoudiniDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	DetailBuilder.GetObjectsBeingCustomized(SelectedObjects);
	
	DetailBuilder.HideCategory("HoudiniParameters");
	const FText HoudiniPythonText = LOCTEXT("HoudiniPythonParameters", "Houdini Parameters");
	
	//Edits a category. If it doesn't exist it creates a new one
	IDetailCategoryBuilder& CustomCategory = DetailBuilder.EditCategory("Houdini Parameters", HoudiniPythonText,ECategoryPriority::Important);
	const FText HoudiniPythonButtonText = LOCTEXT("HoudiniPython", "Parameter Window");
	
	CustomCategory.AddCustomRow(HoudiniPythonText, true)
	.ValueContent()
	.VAlign(VAlign_Center)
	.MaxDesiredWidth(250)
	[
		SNew(SButton)
		.VAlign(VAlign_Center)
		.ToolTipText(LOCTEXT("HoudiniPythonTooltip", "Open Houdini Digital Asset Parameter Window."))
		.OnClicked(this, &FHoudiniDetails::ClickedOnButton)
		.Content()
		[
			SNew(STextBlock)
			.Text(HoudiniPythonButtonText)
		]
	];
	
	
}

FReply FHoudiniDetails::ClickedOnButton()
{
	for (const TWeakObjectPtr<UObject>& Object : SelectedObjects)
	{
		AHoudiniAssetActor* HDA = Cast<AHoudiniAssetActor>(Object.Get());
		if (HDA)
		{
			UUIPythonBridge::Get()->OpenUI(HDA->GetName(),HDA->GetName() + "_layout","Houdini");
		}
	}
	
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
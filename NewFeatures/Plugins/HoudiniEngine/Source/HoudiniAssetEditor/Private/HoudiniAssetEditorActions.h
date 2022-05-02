#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EditorStyleSet.h"

class FHoudiniAssetEditorCommands : public TCommands<FHoudiniAssetEditorCommands>
{
public:
	FHoudiniAssetEditorCommands() : TCommands<FHoudiniAssetEditorCommands>
	(
		"HoudiniAssetEditor", // Context name for fast lookup
		NSLOCTEXT("Contexts", "HoudiniAssetEditor", "HoudiniAsset Editor"), // Localized context name for displaying
		"EditorViewport",  // Parent
		FEditorStyle::GetStyleSetName() // Icon Style Set
	)
	{
	}
	
	/**
	 * HoudiniAsset Editor Commands
	 */
	
	/**  */
	TSharedPtr< FUICommandInfo > SetShowWireframe;
	TSharedPtr< FUICommandInfo > SetShowVertexColor;
	TSharedPtr< FUICommandInfo > SetShowPhysicalMaterialMasks;
	TSharedPtr< FUICommandInfo > SetDrawUVs;
	TSharedPtr< FUICommandInfo > SetShowGrid;
	TSharedPtr< FUICommandInfo > SetShowBounds;
	TSharedPtr< FUICommandInfo > SetShowSimpleCollision;
	TSharedPtr< FUICommandInfo > SetShowComplexCollision;
	TSharedPtr< FUICommandInfo > ResetCamera;
	// TSharedPtr< FUICommandInfo > SetShowSockets;
	TSharedPtr< FUICommandInfo > SetDrawAdditionalData;

	// Mesh toolbar Commands
	TSharedPtr< FUICommandInfo > ReimportMesh;
	TSharedPtr< FUICommandInfo > ReimportMeshWithNewFile;
	TSharedPtr< FUICommandInfo > ReimportAllMesh;
	TSharedPtr< FUICommandInfo > ReimportAllMeshWithNewFile;

	// toolbar commands
	TSharedPtr< FUICommandInfo > ToggleShowNormals;
	TSharedPtr< FUICommandInfo > ToggleShowTangents;
	TSharedPtr< FUICommandInfo > ToggleShowBinormals;
	TSharedPtr< FUICommandInfo > ToggleShowPivots;
	TSharedPtr< FUICommandInfo > ToggleShowVertices;
	TSharedPtr< FUICommandInfo > ToggleShowGrids;
	TSharedPtr< FUICommandInfo > ToggleShowBounds;
	TSharedPtr< FUICommandInfo > ToggleShowSimpleCollisions;
	TSharedPtr< FUICommandInfo > ToggleShowComplexCollisions;
	// TSharedPtr< FUICommandInfo > ToggleShowSockets;
	TSharedPtr< FUICommandInfo > ToggleShowWireframes;
	TSharedPtr< FUICommandInfo > ToggleShowVertexColors;

	// View Menu Commands
	TSharedPtr< FUICommandInfo > SetShowNormals;
	TSharedPtr< FUICommandInfo > SetShowTangents;
	TSharedPtr< FUICommandInfo > SetShowBinormals;
	TSharedPtr< FUICommandInfo > SetShowPivot;
	TSharedPtr< FUICommandInfo > SetShowVertices;

	// Mesh Menu Commands
	TSharedPtr< FUICommandInfo > FindSource;
	TSharedPtr< FUICommandInfo > ChangeMesh;

	// TSharedPtr< FUICommandInfo > SaveGeneratedLODs;

	TSharedPtr< FUICommandInfo > Recook;
	TSharedPtr< FUICommandInfo > Rebuild;
	TSharedPtr< FUICommandInfo > ResetParm;

	TSharedPtr< FUICommandInfo > Bake;
	TSharedPtr< FUICommandInfo > ActorBake;
	TSharedPtr< FUICommandInfo > BlueprintBake;
	TSharedPtr< FUICommandInfo > FoliageBake;
	TSharedPtr< FUICommandInfo > WorldOutlinerBake;

	TSharedPtr< FUICommandInfo > RemoveHDABake;
	TSharedPtr< FUICommandInfo > RecenterBakeActor;
	TSharedPtr< FUICommandInfo > AutoBake;
	TSharedPtr< FUICommandInfo > ReplacePrevious;

	TSharedPtr< FUICommandInfo > OnParmChange;
	TSharedPtr< FUICommandInfo > OnAssetInputCook;
	
	TSharedPtr< FUICommandInfo > ShowCookLog;
	TSharedPtr< FUICommandInfo > AssetHelp;
	
	/**
	 * Initialize commands
	 */
	virtual void RegisterCommands() override;
};

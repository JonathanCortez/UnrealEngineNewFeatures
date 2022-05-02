#include "HoudiniAssetEditorActions.h"

#define LOCTEXT_NAMESPACE "HoudiniAssetEditorCommands"

void FHoudiniAssetEditorCommands::RegisterCommands()
{
	UI_COMMAND( SetShowWireframe, "Wireframe", "Toggles the viewmode of the Preview Pane between a lit view and a wireframe view.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetShowVertexColor, "Vert Colors", "Toggles vertex colors.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetShowPhysicalMaterialMasks, "Physical Material Masks", "Toggles physical material masks.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( SetDrawUVs, "UV", "Toggles display of the static mesh's UVs for the specified channel.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetShowGrid, "Grid", "Displays the viewport grid.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetShowBounds, "Bounds", "Toggles display of the bounds of the static mesh.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetShowSimpleCollision, "Simple Collision", "Toggles display of the simplified collision mesh of the static mesh, if present.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( SetShowComplexCollision, "Complex Collision", "Toggles display of the complex collision for this static mesh.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ResetCamera, "Reset Camera", "Resets the camera to focus on the static mesh", EUserInterfaceActionType::Button, FInputChord() );
	// UI_COMMAND( SetShowSockets, "Sockets", "Displays the static mesh sockets.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetDrawAdditionalData, "Additional Data", "Draw additional user data associated with asset.", EUserInterfaceActionType::ToggleButton, FInputChord() );

	UI_COMMAND( ReimportMesh, "Reimport Houdini Asset", "Reimport the base mesh.", EUserInterfaceActionType::Button, FInputChord() );
	UI_COMMAND( ReimportMeshWithNewFile, "Reimport Base Mesh With New File", "Reimport the base mesh using a new source file.", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND( ReimportAllMesh, "Reimport Base Mesh + LODs", "Reimport the base mesh and all the custom LODs.", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND( ReimportAllMeshWithNewFile, "Reimport Base Mesh + LODs With New File", "Reimport the base mesh using a new source file and all the custom LODs (No new source file for the custom LODs).", EUserInterfaceActionType::Button, FInputChord() );

	UI_COMMAND( ToggleShowNormals, "Normals", "Toggles display of vertex normals in the Preview Pane.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowTangents, "Tangents", "Toggles display of vertex tangents in the Preview Pane.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowBinormals, "Binormals", "Toggles display of vertex binormals (orthogonal vector to normal and tangent) in the Preview Pane.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowVertices, "Vertices", "Toggles display of vertices in the Preview Pane.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowPivots, "Show Pivot", "Display the pivot location of the static mesh.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowGrids, "Grid", "Displays the viewport grid.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowBounds, "Bounds", "Toggles display of the bounds of the static mesh.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowSimpleCollisions, "Simple Collision", "Toggles display of the simplified collision mesh of the static mesh, if present.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowComplexCollisions, "Complex Collision", "Toggles display of the complex collision for this static mesh.", EUserInterfaceActionType::ToggleButton, FInputChord());
	// UI_COMMAND( ToggleShowSockets, "Sockets", "Displays the static mesh sockets.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowWireframes, "Wireframe", "Toggles the viewmode of the Preview Pane between a lit view and a wireframe view.", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND( ToggleShowVertexColors, "Vert Colors", "Toggles vertex colors.", EUserInterfaceActionType::ToggleButton, FInputChord());

	UI_COMMAND( SetShowNormals, "Normals", "Toggles display of vertex normals in the Preview Pane.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetShowTangents, "Tangents", "Toggles display of vertex tangents in the Preview Pane.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetShowBinormals, "Binormals", "Toggles display of vertex binormals (orthogonal vector to normal and tangent) in the Preview Pane.", EUserInterfaceActionType::ToggleButton, FInputChord() );
	UI_COMMAND( SetShowVertices, "Vertices", "Toggles display of vertices in the Preview Pane.", EUserInterfaceActionType::ToggleButton, FInputChord() ); 
	UI_COMMAND( SetShowPivot, "Show Pivot", "Display the pivot location of the static mesh.", EUserInterfaceActionType::ToggleButton, FInputChord() );

	UI_COMMAND( FindSource, "Find Source", "Opens explorer at the location of this asset.", EUserInterfaceActionType::Button, FInputChord() );
	
	UI_COMMAND( ChangeMesh, "Change Mesh", "Changes the static mesh asset loaded in the Static Mesh Editor to the asset currently selected in the Content Browser.", EUserInterfaceActionType::Button, FInputChord() );

	// UI_COMMAND( SaveGeneratedLODs, "Save Generated LODs", "Saves the generated LODs in the mesh package.", EUserInterfaceActionType::Button, FInputChord());

	UI_COMMAND(Recook, "Recook", "Recook the current Houdini Asset: All parameters and inputs are re-uploaded to Houdini and the asset is then force to recook.", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(Rebuild, "Rebuild", "Rebuild the current Houdini Asset: Its source .HDA file is reimported and updated, the asset nodes in Houdini are destoryed and recorded, and then the asset is force to recook", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(ResetParm, "Reset Parameters", "Rest the current Houdini Asseet Parameters to their default values", EUserInterfaceActionType::Button, FInputChord() );

	UI_COMMAND(Bake, "Bake", "Bake this Houdini Asset and its components to native unreal actors and component.", EUserInterfaceActionType::Button, FInputChord() );
	UI_COMMAND(ActorBake, "Actor", "Bake out as Actor.", EUserInterfaceActionType::Check, FInputChord() );
	UI_COMMAND(BlueprintBake, "Blueprint", "Bake out as Blueprint Actor.", EUserInterfaceActionType::Check, FInputChord() );
	UI_COMMAND(FoliageBake, "Foliage", "Bake out as Foliage.", EUserInterfaceActionType::Check, FInputChord() );
	UI_COMMAND(WorldOutlinerBake, "Wrold Outliner", "Use as WorldOutliner.", EUserInterfaceActionType::Check, FInputChord() );

	UI_COMMAND(RemoveHDABake, "Remove HDA Output After Bake", "After baking the existing output of this Houdini Asset will be removed.", EUserInterfaceActionType::Check, FInputChord() );
	UI_COMMAND(RecenterBakeActor, "Recenter Baked Actor", "After baking recenter the baked actors to their bounding box center.", EUserInterfaceActionType::Check, FInputChord() );
	UI_COMMAND(AutoBake, "Auto Bake", "Automatically bake the next cook.", EUserInterfaceActionType::Check, FInputChord() );
	UI_COMMAND(ReplacePrevious, "Replace Previous Bake", "When baking replace the previous bake's output instead of creating additional output actors/conmponents/objects.", EUserInterfaceActionType::Check, FInputChord() );

	UI_COMMAND(OnParmChange, "On Parameter/Input Change", "If enable, modifying a parameter or input on this Houdini Asset will automatically trigger a cook.", EUserInterfaceActionType::Check, FInputChord() );
	UI_COMMAND(OnAssetInputCook, "On Asset Input Cook", "When enable, this asset will automatically re-cook after one of its asset input has finished cooking.", EUserInterfaceActionType::Check, FInputChord() );
	
	UI_COMMAND(ShowCookLog, "Show Cook Log", "Fetch and display all cook logs available for this Houdini Asset.", EUserInterfaceActionType::Button, FInputChord() );
	UI_COMMAND(AssetHelp, "Asset Help", "Dispaly this Houdni Asset HDA help.", EUserInterfaceActionType::Button, FInputChord() );

	
}


#undef LOCTEXT_NAMESPACE
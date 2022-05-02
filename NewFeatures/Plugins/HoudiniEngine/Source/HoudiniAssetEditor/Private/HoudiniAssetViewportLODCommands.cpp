#include "HoudiniAssetViewportLODCommands.h"

#define LOCTEXT_NAMESPACE "HoudiniAssetViewportLODCommands"

void FHoudiniAssetViewportLODCommands::RegisterCommands()
{
	UI_COMMAND( LODAuto, "LOD Auto", "Automatically select LOD", EUserInterfaceActionType::RadioButton, FInputChord() );
	UI_COMMAND( LOD0, "LOD 0", "Force select LOD 0", EUserInterfaceActionType::RadioButton, FInputChord() );
}

#undef LOCTEXT_NAMESPACE

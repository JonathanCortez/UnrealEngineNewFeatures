// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuickUISetupCommands.h"

#define LOCTEXT_NAMESPACE "FQuickUISetupModule"

void FQuickUISetupCommands::RegisterCommands()
{
	UI_COMMAND(CreateUI, "Create New UI", "New UI Layout.", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(LoadUI, "Load", "Open saved UI Layouts.", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE

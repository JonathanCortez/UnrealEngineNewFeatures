// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "QuickUISetupStyle.h"

class FQuickUISetupCommands : public TCommands<FQuickUISetupCommands>
{
public:

	FQuickUISetupCommands()
		: TCommands<FQuickUISetupCommands>(TEXT("QuickUISetup"), NSLOCTEXT("Contexts", "QuickUISetup", "QuickUISetup Plugin"), NAME_None, FQuickUISetupStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > CreateUI;
	TSharedPtr< FUICommandInfo > LoadUI;
	
};

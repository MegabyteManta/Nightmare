// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NightmareHUD.generated.h"

UCLASS()
class ANightmareHUD : public AHUD
{
	GENERATED_BODY()

public:
	ANightmareHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Laser_BounceHUD.generated.h"

UCLASS()
class ALaser_BounceHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALaser_BounceHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;
	
	virtual void Tick(float DeltaTime) override;

	// Start tank moving the barrel so a shot will hit where the crosshair intersects the world
	void AimTowardCrossHair();

	virtual void BeginPlay() override;
	
};

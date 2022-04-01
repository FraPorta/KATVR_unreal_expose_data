// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class EXPOSEKATDATA_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BLueprintCallable, Category = "MyCategory")
		static FString ExposeKATData(float Yaw, float WalkPower , FVector TargetPos);
	
		//UFUNCTION(BLueprintCallable, Category = "MyCategory")
		//static FString ExposeExtraKATData(int MoveDirection, bool IsMoving, float WalkDistance);
};

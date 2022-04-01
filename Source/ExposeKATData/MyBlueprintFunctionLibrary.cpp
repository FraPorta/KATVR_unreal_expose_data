// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::ExposeKATData(float Yaw, float WalkPower, FVector TargetPos, int Direction)
{
	FString DirectionStr = FString();

	FString PosStr = TargetPos.ToCompactString();
	FString YawStr = FString::Printf(TEXT("Yaw: %f\n"), Yaw);
	FString WalkPowerStr = FString::Printf(TEXT("WalkPower: %f\n"), WalkPower);
	
	DirectionStr = FString::Printf(TEXT("%i\n"), Direction);

	return DirectionStr + YawStr + WalkPowerStr + PosStr ;
}

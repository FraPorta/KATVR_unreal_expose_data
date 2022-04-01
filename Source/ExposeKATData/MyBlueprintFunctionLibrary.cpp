// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::ExposeKATData(float Yaw, float WalkPower, FVector TargetPos)
{

	FString PosStr = TargetPos.ToCompactString();
	FString YawStr = FString::Printf(TEXT(" %f"), Yaw);
	FString WalkPowerStr = FString::Printf(TEXT(" %f"), WalkPower);


	return PosStr + YawStr + WalkPowerStr;
}

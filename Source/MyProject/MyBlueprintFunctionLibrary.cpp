// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary::PrintKATData(float Speed, float Yaw, FVector TargetPos)
{
	FString TargetString = (FString::Printf(TEXT("The current speed is %f\nThe current Yaw is: %f \nThe target position is: "), Speed, Yaw)) + TargetPos.ToString();
	return TargetString;
}

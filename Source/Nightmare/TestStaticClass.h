// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TestStaticClass.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class NIGHTMARE_API UTestStaticClass : public UObject
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Return Two")
	static int ReturnTwo();

};

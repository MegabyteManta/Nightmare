// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class NIGHTMARE_API UTestBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Return Two")
	static int ReturnThree() { return 3; }
};

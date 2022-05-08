#pragma once

#include "NightmareStruct.generated.h"

UENUM(BlueprintType)
enum ESettingType
{
    Bool     UMETA(DisplayName = "Bool"),
    Int      UMETA(DisplayName = "Int"),
};

USTRUCT(BlueprintType)
struct FMyStructParent
{
    GENERATED_BODY()
public:
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Bool")
        TEnumAsByte<ESettingType> Type;
};

USTRUCT(BlueprintType)
struct FMyStructChildBool : public FMyStructParent
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Bool")
    FName GameplayTag;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Bool")
    bool BoolValue;
    TEnumAsByte<ESettingType> Type;

};

USTRUCT(BlueprintType)
struct FMyStructChildInt : public FMyStructParent
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Int")
    int IntValue;
};
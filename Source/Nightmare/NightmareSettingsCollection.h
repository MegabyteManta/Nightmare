#pragma once

#include "NightmareStruct.h"
#include "NightmareSettingsCollection.generated.h"


UCLASS(Blueprintable)
class UNightmareSettingsCollection : public UObject
{
	GENERATED_BODY()
public:
	UNightmareSettingsCollection();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parent")
	TArray<FMyStructParent> ParentSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parent")
	TArray<UNightmareSetting*> ObjectSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay|Discrete")
	FMyStructChildBool BoolSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay|Slider")
	FMyStructChildInt IntSetting;
};

UCLASS(Blueprintable)
class UNightmareSetting : public UObject
{
	GENERATED_BODY()
public:
	UNightmareSetting();
};

UCLASS(Blueprintable)
class UNightmareSettingBool : public UNightmareSetting
{
	GENERATED_BODY()
public:
	UNightmareSettingBool();
};

UCLASS(Blueprintable)
class UNightmareSettingInt : public UNightmareSetting
{
	GENERATED_BODY()
public:
	UNightmareSettingInt();
};
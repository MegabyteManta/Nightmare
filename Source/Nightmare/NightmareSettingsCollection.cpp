#include "NightmareSettingsCollection.h"

UNightmareSettingsCollection::UNightmareSettingsCollection() {
	//UNightmareSetting* NewSetting = NewObject<UNightmareSetting>(UNightmareSetting::StaticClass());
	ParentSettings.Add(BoolSetting);
	ParentSettings.Add(IntSetting);

	UNightmareSettingBool* NewBoolSetting = NewObject<UNightmareSettingBool>(UNightmareSettingBool::StaticClass());
	ObjectSettings.Add(NewBoolSetting);
}

UNightmareSetting::UNightmareSetting() {
}

UNightmareSettingBool::UNightmareSettingBool() {

}

UNightmareSettingInt::UNightmareSettingInt() {

}
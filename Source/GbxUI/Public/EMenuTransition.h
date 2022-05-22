#pragma once
#include "CoreMinimal.h"
#include "EMenuTransition.generated.h"

UENUM(BlueprintType)
enum class EMenuTransition : uint8 {
    CreateCharacterMenu_MainMenu,
    LoadCharacterMenu_MainMenu,
    MainMenu_LoadCharacterMenu,
    MainMenu_NewGameSettingMenu,
    MainMenu_OptionMenu,
    NewGameSettingsMenu_MainMenu,
    OptionMenu_MainMenu,
    TitleScreen_MainMenu,
    TitleScreen_FirstBoot,
    FirstBoot_MainMenu,
    PlaythroughSelectionMenu_MainMenu,
    MainMenu_PlaythroughSelectionMenu,
    Invalid,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "EGFxFrontendMenuMode.generated.h"

UENUM(BlueprintType)
enum class EGFxFrontendMenuMode : uint8 {
    Unknown,
    MainMenu,
    EchoNetMenus,
    SettingsMenus,
    NewGameMenu,
};


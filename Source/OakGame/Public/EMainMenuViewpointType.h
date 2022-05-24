#pragma once
#include "CoreMinimal.h"
#include "EMainMenuViewpointType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuViewpointType : uint8 {
    TitleScreen,
    OptionsMenu,
    PlaythroughMode,
    NewGameSettings,
    MainMenuGroup,
    CharacterSelect,
    BehindTheScenes,
    MAX,
};


#pragma once
#include "CoreMinimal.h"
#include "ENewGameState.generated.h"

UENUM(BlueprintType)
enum class ENewGameState : int32 {
    None,
    IntroMovie,
    CharacterSelect,
    WaitingForPlayerPawns,
};


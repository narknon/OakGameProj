#pragma once
#include "CoreMinimal.h"
#include "ENewGameState.generated.h"

UENUM()
enum class ENewGameState : int32 {
    None,
    IntroMovie,
    CharacterSelect,
    WaitingForPlayerPawns,
};


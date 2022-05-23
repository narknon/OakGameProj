#pragma once
#include "CoreMinimal.h"
#include "ELateJoinState.generated.h"

UENUM(BlueprintType)
enum class ELateJoinState : int8 {
    NotLateJoining,
    SelectingCharacter,
    ApplyingSaveGame,
};


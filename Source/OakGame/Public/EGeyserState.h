#pragma once
#include "CoreMinimal.h"
#include "EGeyserState.generated.h"

UENUM(BlueprintType)
enum class EGeyserState : uint8 {
    None,
    SteamOn,
    SteamOff,
    SteamAnticipationOn,
    SteamAnticipationOff,
};


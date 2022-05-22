#pragma once
#include "CoreMinimal.h"
#include "EOakOnlineLobbyPlayerPlateState.generated.h"

UENUM(BlueprintType)
enum class EOakOnlineLobbyPlayerPlateState : uint8 {
    Offline,
    WaitingForPlayers,
    Invite,
    SplitPlayerToJoin,
    PlayerListed,
};


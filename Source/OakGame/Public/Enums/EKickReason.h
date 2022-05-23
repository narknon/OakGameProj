#pragma once
#include "CoreMinimal.h"
#include "EKickReason.generated.h"

UENUM(BlueprintType)
enum class EKickReason : uint8 {
    None,
    Kicked,
    Invite,
    QuitGame,
    SessionEnd,
    TitleScreen,
    IncompatibleMission,
};


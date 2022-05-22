#pragma once
#include "CoreMinimal.h"
#include "EZoneMapChallengeStatus.generated.h"

UENUM(BlueprintType)
enum EZoneMapChallengeStatus {
    ZMC_AvailableChallenge,
    ZMC_CompletedChallenge,
    ZMC_Unknown,
    ZMC_MAX UMETA(Hidden),
};


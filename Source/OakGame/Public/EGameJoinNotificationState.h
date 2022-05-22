#pragma once
#include "CoreMinimal.h"
#include "EGameJoinNotificationState.generated.h"

UENUM(BlueprintType)
enum EGameJoinNotificationState {
    EGJNS_None,
    EGJNS_PlayerStateReplicated,
    EGJNS_SyncLevelReplicated,
    EGJNS_PlayerNotified,
    EGJNS_MAX UMETA(Hidden),
};


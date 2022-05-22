#pragma once
#include "CoreMinimal.h"
#include "EThreatReason.generated.h"

UENUM(BlueprintType)
enum class EThreatReason :  {
    ThreatReason_None,
    ThreatReason_TerritoryEverywhereThreat,
    ThreatReason_TerritoryIncursionAuto,
    ThreatReason_TerritoryIncursionSeen,
    ThreatReason_ShotAt,
    ThreatReason_Damaged,
    ThreatReason_Proximity,
    ThreatReason_TeamNotification,
    ThreatReason_Scripted,
    ThreatReason_MAX UMETA(Hidden),
};


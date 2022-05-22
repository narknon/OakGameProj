#pragma once
#include "CoreMinimal.h"
#include "EDestructibleRelevance.generated.h"

UENUM(BlueprintType)
enum class EDestructibleRelevance : uint8 {
    DR_GameplayAndNetwork,
    DR_Gameplay,
    DR_None,
    DR_MAX UMETA(Hidden),
};


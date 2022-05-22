#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReplicationType.generated.h"

UENUM(BlueprintType)
enum GameResourcePoolReplicationType {
    GRPRT_None,
    GRPRT_Basic,
    GRPRT_Full,
    GRPRT_MAX UMETA(Hidden),
};


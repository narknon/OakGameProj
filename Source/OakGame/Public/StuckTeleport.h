#pragma once
#include "CoreMinimal.h"
#include "StuckTeleport.generated.h"

USTRUCT(BlueprintType)
struct FStuckTeleport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStuckTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForwardStuckValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CantMoveValuePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StuckTeleportTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StuckDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDebug;
    
    OAKGAME_API FStuckTeleport();
};


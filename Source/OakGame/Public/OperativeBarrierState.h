#pragma once
#include "CoreMinimal.h"
#include "EOperativeBarrierState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OperativeBarrierState.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FOperativeBarrierState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EOperativeBarrierState BarrierState;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RedeployLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RedeployRotation;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    bool bIsTransitioningStates;
    
    OAKGAME_API FOperativeBarrierState();
};


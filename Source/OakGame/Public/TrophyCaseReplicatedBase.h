#pragma once
#include "CoreMinimal.h"
#include "TrophyCaseReplicatedBase.generated.h"

USTRUCT(BlueprintType)
struct FTrophyCaseReplicatedBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BaseTag;
    
    UPROPERTY()
    uint8 CompletedProgressLevel;
    
    UPROPERTY()
    uint8 MaxProgressLevel;
    
    OAKGAME_API FTrophyCaseReplicatedBase();
};


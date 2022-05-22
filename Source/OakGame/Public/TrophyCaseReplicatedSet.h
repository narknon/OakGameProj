#pragma once
#include "CoreMinimal.h"
#include "TrophyCaseReplicatedBase.h"
#include "TrophyCaseReplicatedSet.generated.h"

USTRUCT(BlueprintType)
struct FTrophyCaseReplicatedSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTrophyCaseReplicatedBase> BaseData;
    
    OAKGAME_API FTrophyCaseReplicatedSet();
};


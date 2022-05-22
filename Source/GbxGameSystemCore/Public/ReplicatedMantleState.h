#pragma once
#include "CoreMinimal.h"
#include "ReplicatedMantleState.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedMantleState {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 Counter;
    
    UPROPERTY()
    int32 ActionIndex;
    
    GBXGAMESYSTEMCORE_API FReplicatedMantleState();
};


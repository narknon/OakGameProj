#pragma once
#include "CoreMinimal.h"
#include "EScriptedLadderType.h"
#include "ReplicatedLadderState.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedLadderState {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 DirtyCounter;
    
    UPROPERTY()
    EScriptedLadderType LadderType;
    
    GBXGAMESYSTEMCORE_API FReplicatedLadderState();
};


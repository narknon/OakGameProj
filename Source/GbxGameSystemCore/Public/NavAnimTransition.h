#pragma once
#include "CoreMinimal.h"
#include "ENavAnimState.h"
#include "NavAnimDesiredInfo.h"
#include "NavAnimTransition.generated.h"

USTRUCT(BlueprintType)
struct FNavAnimTransition {
    GENERATED_BODY()
public:
    UPROPERTY()
    ENavAnimState State;
    
    UPROPERTY()
    FNavAnimDesiredInfo Info;
    
    UPROPERTY()
    FName RowName;
    
    UPROPERTY()
    int32 MachineIdx;
    
    UPROPERTY()
    int32 RunIdx;
    
    GBXGAMESYSTEMCORE_API FNavAnimTransition();
};


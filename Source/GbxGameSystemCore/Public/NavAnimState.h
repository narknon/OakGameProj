#pragma once
#include "CoreMinimal.h"
#include "NavAnimMachineData.h"
#include "NavAnimTransition.h"
#include "NavAnimState.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FNavAnimState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAnimInstance* CachedAnimInst;
    
    UPROPERTY()
    TArray<FNavAnimMachineData> MachineList;
    
    UPROPERTY()
    FNavAnimTransition ServerTransition;
    
    UPROPERTY(NotReplicated)
    int32 ClientTransitionIdx;
    
public:
    FNavAnimState();
};


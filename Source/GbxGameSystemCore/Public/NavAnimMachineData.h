#pragma once
#include "CoreMinimal.h"
#include "ENavAnimState.h"
#include "NavAnimMachineData.generated.h"

USTRUCT(BlueprintType)
struct FNavAnimMachineData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MachineIdx;
    
    UPROPERTY()
    ENavAnimState ServerBaseState;
    
    UPROPERTY(NotReplicated)
    ENavAnimState CurrState;
    
    GBXGAMESYSTEMCORE_API FNavAnimMachineData();
};


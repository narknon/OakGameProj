#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "NavAnimClientData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FNavAnimClientData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantizeNormal Direction;
    
    UPROPERTY()
    FVector_NetQuantize GoalLoc;
    
    UPROPERTY()
    float GoalRadius;
    
    FNavAnimClientData();
};


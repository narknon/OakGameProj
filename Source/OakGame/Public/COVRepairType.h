#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "COVRepairType.generated.h"

USTRUCT(BlueprintType)
struct FCOVRepairType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BrokenEffectIndex;
    
    UPROPERTY(EditAnywhere)
    float RepairTime;
    
    UPROPERTY(EditAnywhere)
    float RepairCompletePercent;
    
    UPROPERTY(EditAnywhere)
    float CooldownCompletePercent;
    
    UPROPERTY(EditAnywhere)
    float SelectionWeight;
    
    OAKGAME_API FCOVRepairType();
};


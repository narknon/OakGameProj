#pragma once
#include "CoreMinimal.h"
#include "HealthTypeDamageSummary.generated.h"

class UHealthTypeData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHealthTypeDamageSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UHealthTypeData* HealthType;
    
    UPROPERTY(BlueprintReadOnly)
    float Damage;
    
    FHealthTypeDamageSummary();
};


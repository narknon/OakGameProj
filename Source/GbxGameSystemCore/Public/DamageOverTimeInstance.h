#pragma once
#include "CoreMinimal.h"
#include "DamageOverTimeInstance.generated.h"

class UDamageData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FDamageOverTimeInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDamageData* DamageData;
    
    FDamageOverTimeInstance();
};


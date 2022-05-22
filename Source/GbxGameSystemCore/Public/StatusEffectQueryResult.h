#pragma once
#include "CoreMinimal.h"
#include "StatusEffectQueryResult.generated.h"

USTRUCT(BlueprintType)
struct FStatusEffectQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 NumberOfInstances;
    
    UPROPERTY(BlueprintReadOnly)
    float DPS;
    
    GBXGAMESYSTEMCORE_API FStatusEffectQueryResult();
};


#pragma once
#include "CoreMinimal.h"
#include "ConditionalInventoryParticleEmitter.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FConditionalInventoryParticleEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* EnableCondition;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EmitterNames;
    
    GBXINVENTORY_API FConditionalInventoryParticleEmitter();
};


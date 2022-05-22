#pragma once
#include "CoreMinimal.h"
#include "AttributeEffectReference.generated.h"

class UStatusEffectData;

USTRUCT(BlueprintType)
struct FAttributeEffectReference {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStatusEffectData* StatusEffectData;
    
    GBXGAMESYSTEMCORE_API FAttributeEffectReference();
};


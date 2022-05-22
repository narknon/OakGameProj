#pragma once
#include "CoreMinimal.h"
#include "AttributeEffectReference.h"
#include "AppliedAttributeEffect.generated.h"

class UObject;
class UStatusEffectManagerComponent;

USTRUCT(BlueprintType)
struct FAppliedAttributeEffect {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAttributeEffectReference AttributeEffectRef;
    
    UPROPERTY()
    UObject* AttributeResolutionContext;
    
    UPROPERTY(Export)
    UStatusEffectManagerComponent* Owner;
    
    GBXGAMESYSTEMCORE_API FAppliedAttributeEffect();
};


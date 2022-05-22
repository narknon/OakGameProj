#pragma once
#include "CoreMinimal.h"
#include "StatusEffectInstanceReference.h"
#include "GbxAbilityEffectInstanceTarget.generated.h"

class AActor;
class UStatusEffectManagerComponent;

USTRUCT(BlueprintType)
struct FGbxAbilityEffectInstanceTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* TargetActor;
    
    UPROPERTY(Export)
    UStatusEffectManagerComponent* TargetStatusEffectManagerComponent;
    
    UPROPERTY()
    FStatusEffectInstanceReference StatusEffectInstanceReference;
    
    GBXABILITIES_API FGbxAbilityEffectInstanceTarget();
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageModifierComponent.generated.h"

class UConditionalDamageHitRegionModifier;
class UConditionalDamageCriticalModifier;
class UConditionalDamageValueModifier;
class UConditionalDamageTypeModifier;
class UConditionalDamageModifier;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UDamageModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UConditionalDamageValueModifier*> ConditionalValueModifiers;
    
    UPROPERTY(Transient)
    TArray<UConditionalDamageCriticalModifier*> ConditionalCritModifiers;
    
    UPROPERTY(Transient)
    TArray<UConditionalDamageTypeModifier*> ConditionalTypeModifiers;
    
    UPROPERTY(Transient)
    TArray<UConditionalDamageHitRegionModifier*> ConditionalHitRegionModifiers;
    
public:
    UDamageModifierComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterConditionalDamageModifier(UConditionalDamageModifier* Modifier);
    
    UFUNCTION(BlueprintCallable)
    void RegisterConditionalDamageModifier(UConditionalDamageModifier* Modifier);
    
};


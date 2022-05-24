#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "AttributeEffect.h"
#include "StatusEffect.generated.h"

class UStatusEffectStackingStrategyData;
class UGbxDamageType;
class UDamageSource;
class AActor;
class UStatusEffectData;

UCLASS(Blueprintable, Const, Deprecated, HideDropdown, NotPlaceable)
class GBXGAMESYSTEMCORE_API UDEPRECATED_StatusEffect : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UStatusEffectStackingStrategyData* StackingStrategy;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeEffect> AttributeEffects;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDoesDamageOverTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageSource> DamageSourceClass;
    
    UPROPERTY(VisibleAnywhere)
    UStatusEffectData* DataAssetCopy;
    
public:
    UDEPRECATED_StatusEffect();
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndEffect(AActor* Target) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginEffect(AActor* Target) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "AttitudeDamageRules.h"
#include "DamageBaseComponent.h"
#include "CauseDeathDelegateDelegate.h"
#include "HitFriendlyDelegateDelegate.h"
#include "CauseAnyPipelineDamageDelegateDelegate.h"
#include "InspectionInfoProvider.h"
#include "CauseAnyPipelineHealingDelegateDelegate.h"
#include "ReflectedDamageParams.h"
#include "EDamageCausedModificationStrategy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "StatusEffectModifiers.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "DamageCauserComponent.generated.h"

class UConditionalDamageModifier;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UDamageCauserComponent : public UDamageBaseComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCauseAnyPipelineDamageDelegate OnCausedAnyDamage;
    
    UPROPERTY(BlueprintAssignable)
    FCauseDeathDelegate OnCausedDeath;
    
    UPROPERTY(BlueprintAssignable)
    FCauseAnyPipelineHealingDelegate OnCausedHealing;
    
    UPROPERTY(BlueprintAssignable)
    FHitFriendlyDelegate OnHitFriendly;
    
    UPROPERTY(EditAnywhere)
    EDamageCausedModificationStrategy DefaultModificationContextStrategy;
    
    UPROPERTY(EditAnywhere)
    FAttitudeDamageRules AttitudeDamageRules;
    
    UPROPERTY(EditAnywhere)
    bool bCanHurtSelf;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat StatusEffectChanceModifierScalar;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat StatusEffectDamageModifierScalar;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat StatusEffectDurationModifierScalar;
    
    UPROPERTY(EditAnywhere)
    TArray<FStatusEffectModifiers> StatusEffectModifiers;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat DamageDealtMultiplier;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat RadiusDamage_RadiusMultiplier;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat RadiusDamage_DamageMultiplier;
    
    UPROPERTY(Transient)
    FGbxAttributeInteger ShouldIgnoreEnemyElementalResistance;
    
    UPROPERTY(EditAnywhere)
    bool bApplyInstigatorSkillDamageModifier;
    
protected:
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat DefaultCriticalHitMultiplier;
    
    UPROPERTY(EditAnywhere)
    TArray<UConditionalDamageModifier*> DefaultConditionalDamageModifiers;
    
    UPROPERTY()
    float EnemyReflectionChance;
    
    UPROPERTY()
    FReflectedDamageParams EnemyReflectionParams;
    
public:
    UDamageCauserComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterConditionalDamageModifier(UConditionalDamageModifier* Modifier);
    
    UFUNCTION(BlueprintCallable)
    void RegisterConditionalDamageModifier(UConditionalDamageModifier* Modifier);
    
    
    // Fix for true pure virtual functions not being implemented
};


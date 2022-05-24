#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "EDamageFilterExprMode.h"
#include "EConditionalAreaDamageFilter.h"
#include "EConditionalDamageCriticalFilter.h"
#include "ConditionalDamageModifier.generated.h"

class UDamageSource;
class UGbxCondition;
class UGbxDamageType;

UCLASS(Abstract, EditInlineNew)
class GBXGAMESYSTEMCORE_API UConditionalDamageModifier : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* AttackerCondition;
    
    UPROPERTY(EditAnywhere)
    bool bAttackerConditionFirstContextIsOverrideContextObject;
    
    UPROPERTY(EditAnywhere)
    bool bAttackerConditionSecondContextIsDamageCauser;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* DefenderCondition;
    
    UPROPERTY(EditAnywhere)
    bool bDefenderConditionFirstContextIsOverrideContextObject;
    
    UPROPERTY(EditAnywhere)
    bool bDefenderConditionSecondContextIsDamageCauser;
    
    UPROPERTY(EditAnywhere)
    EDamageFilterExprMode DamageTypeFilterMode;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGbxDamageType>> DamageTypeFilter;
    
    UPROPERTY(EditAnywhere)
    EDamageFilterExprMode DamageSourceFilterMode;
    
    UPROPERTY(EditAnywhere)
    bool bIncludeDamageSourceSubclasses;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UDamageSource>> DamageSourceFilter;
    
    UPROPERTY(EditAnywhere)
    bool bUseHitDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData HitDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData HitDirectionAngleOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseCriticalFilter;
    
    UPROPERTY(EditAnywhere)
    EConditionalDamageCriticalFilter CriticalFilter;
    
    UPROPERTY(EditAnywhere)
    bool bUseAreaDamageFilter;
    
    UPROPERTY(EditAnywhere)
    EConditionalAreaDamageFilter AreaDamageFilter;
    
    UPROPERTY(EditAnywhere)
    bool bUseRandomChance;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData RandomChance;
    
    UPROPERTY(EditAnywhere)
    bool bCanTriggerOnBonusDamage;
    
    UPROPERTY(EditAnywhere)
    bool bAppliesToInstigatorChildren;
    
    UConditionalDamageModifier();
};


#pragma once
#include "CoreMinimal.h"
#include "AttributeEffectMutatorData.h"
#include "BonusAttributeModifierUpgrade.h"
#include "AttributeInitializationData.h"
#include "OakPassiveAbilityAttributeEffectMutatorData.generated.h"

UCLASS(EditInlineNew)
class UOakPassiveAbilityAttributeEffectMutatorData : public UAttributeEffectMutatorData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 GradeToStartApplyingEffect;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PerGradeUpgradeInterval;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData PerGradeUpgrade;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FBonusAttributeModifierUpgrade> BonusUpgrades;
    
public:
    UOakPassiveAbilityAttributeEffectMutatorData();
};


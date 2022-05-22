#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbilityAugmentData.h"
#include "AttributeInitializationData.h"
#include "EPhaseTranceAttackFamilyType.h"
#include "OakActionAbilityAugmentData_PhaseTrance_Attack.generated.h"

class APhaseTranceSingularityActor;
class UOakAction_Anim_ActionAbility_PhaseTrance;

UCLASS()
class UOakActionAbilityAugmentData_PhaseTrance_Attack : public UOakActionAbilityAugmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EPhaseTranceAttackFamilyType AttackFamilyType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOakAction_Anim_ActionAbility_PhaseTrance> AttackActionClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhaseTranceSingularityActor> SingularityEffectActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAttributeInitializationData DamageCoefficientData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAttributeInitializationData CooldownCoefficientData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DamageEffects;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsesGhostArmsOnActivation;
    
public:
    UOakActionAbilityAugmentData_PhaseTrance_Attack();
};


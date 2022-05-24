#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentData.h"
#include "AttributeInitializationData.h"
#include "EPhaseTranceEffectType.h"
#include "EPhaseTranceEffectTargetType.h"
#include "GameplayTagContainer.h"
#include "OakActionAbilityAugmentData_PhaseTrance_Effect.generated.h"

class UGbxCondition;

UCLASS()
class UOakActionAbilityAugmentData_PhaseTrance_Effect : public UOakActionAbilityAugmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EPhaseTranceEffectType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAttributeInitializationData DamageCoefficientData;
    
    UPROPERTY(EditDefaultsOnly)
    EPhaseTranceEffectTargetType TargetType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRejectActorsInAttachSlots;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyOncePerActorPerActivation;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer RejectionTags;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGbxCondition* RejectionCondition;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData RefireDelayData;
    
public:
    UOakActionAbilityAugmentData_PhaseTrance_Effect();
};


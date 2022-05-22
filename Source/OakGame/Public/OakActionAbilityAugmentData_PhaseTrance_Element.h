#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbilityAugmentData.h"
#include "AttributeInitializationData.h"
#include "EPhaseTranceElementalType.h"
#include "OakActionAbilityAugmentData_PhaseTrance_Element.generated.h"

class UOakDamageType;

UCLASS()
class UOakActionAbilityAugmentData_PhaseTrance_Element : public UOakActionAbilityAugmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EPhaseTranceElementalType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOakDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAttributeInitializationData DamageCoefficientData;
    
public:
    UOakActionAbilityAugmentData_PhaseTrance_Element();
};


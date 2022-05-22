#pragma once
#include "CoreMinimal.h"
#include "GbxCondition_OakAbility_Base.h"
#include "EOakActionAbilityPetModType.h"
#include "GbxCondition_IsPetModActive.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsPetModActive : public UGbxCondition_OakAbility_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EOakActionAbilityPetModType PetModType;
    
public:
    UGbxCondition_IsPetModActive();
};


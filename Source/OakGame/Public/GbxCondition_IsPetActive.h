#pragma once
#include "CoreMinimal.h"
#include "GbxCondition_OakAbility_Base.h"
#include "EOakActionAbilityPetEvolutionType.h"
#include "EOakActionAbilityPetType.h"
#include "GbxCondition_IsPetActive.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsPetActive : public UGbxCondition_OakAbility_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EOakActionAbilityPetType PetType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseEvolutionType;
    
    UPROPERTY(EditDefaultsOnly)
    EOakActionAbilityPetEvolutionType EvolutionType;
    
public:
    UGbxCondition_IsPetActive();
};


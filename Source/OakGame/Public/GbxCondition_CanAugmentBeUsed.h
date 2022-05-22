#pragma once
#include "CoreMinimal.h"
#include "GbxCondition_OakAbility_Base.h"
#include "GbxCondition_CanAugmentBeUsed.generated.h"

class UOakActionAbilityAugmentData;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_CanAugmentBeUsed : public UGbxCondition_OakAbility_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentData* Augment;
    
public:
    UGbxCondition_CanAugmentBeUsed();
};


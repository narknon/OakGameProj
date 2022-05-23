#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCondition.h"
#include "GbxCondition_IsActionAbilityAugmentSlotted.generated.h"

class UOakActionAbilityAugmentSlotData;
class UOakActionAbilityAugmentData;
class UOakActionAbility;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsActionAbilityAugmentSlotted : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakActionAbility> ActionAbilityClass;
    
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentData* AugmentData;
    
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentSlotData* AugmentSlotData;
    
public:
    UGbxCondition_IsActionAbilityAugmentSlotted();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCondition_OakAbility_Base.h"
#include "GbxCondition_IsActionAbilityActive.generated.h"

class UOakActionAbility;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsActionAbilityActive : public UGbxCondition_OakAbility_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakActionAbility> ActionAbilityClass;
    
public:
    UGbxCondition_IsActionAbilityActive();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCondition.h"
#include "GbxCondition_HasAbility.generated.h"

class UGbxAbility;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_HasAbility : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAbility> AbilityClass;
    
public:
    UGbxCondition_HasAbility();
};


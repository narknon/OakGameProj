#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCondition.h"
#include "GbxCondition_IsAbilityTimerActive.generated.h"

class UOakAbilityTimerData;
class UGbxAbility;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsAbilityTimerActive : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UOakAbilityTimerData* Timer;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAbility> OptionalAbility;
    
public:
    UGbxCondition_IsAbilityTimerActive();
};


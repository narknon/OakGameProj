#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakPlayerAbilityTreeItemData.h"
#include "OakPlayerAbilityTreeItemData_Ability.generated.h"

class UOakPlayerAbility;

UCLASS(EditInlineNew)
class OAKGAME_API UOakPlayerAbilityTreeItemData_Ability : public UOakPlayerAbilityTreeItemData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakPlayerAbility> AbilityClass;
    
public:
    UOakPlayerAbilityTreeItemData_Ability();
};


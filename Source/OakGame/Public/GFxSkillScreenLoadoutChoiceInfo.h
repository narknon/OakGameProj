#pragma once
#include "CoreMinimal.h"
#include "EGFxSkillScreenLoadoutChoiceEquipState.h"
#include "GFxSkillScreenLoadoutChoiceInfo.generated.h"

class UOakPlayerAbilityTreeItemData;

USTRUCT()
struct OAKGAME_API FGFxSkillScreenLoadoutChoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeItemData* ItemData;
    
    UPROPERTY(Transient)
    FText ChoiceSelectedName;
    
    UPROPERTY(Transient)
    FText ChoiceSelectionName;
    
    UPROPERTY(Transient)
    FText ChoiceDescription;
    
    UPROPERTY(Transient)
    EGFxSkillScreenLoadoutChoiceEquipState EquipState;
    
    FGFxSkillScreenLoadoutChoiceInfo();
};


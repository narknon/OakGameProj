#pragma once
#include "CoreMinimal.h"
#include "GFxPassiveSkillWidgetSlotData.generated.h"

class UOakPlayerAbilityHUDItemData;
class UGFxPassiveSkillIcon;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxPassiveSkillWidgetSlotData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakPlayerAbilityHUDItemData* HUDItemData;
    
    UPROPERTY()
    UGFxPassiveSkillIcon* Icon;
    
    FGFxPassiveSkillWidgetSlotData();
};


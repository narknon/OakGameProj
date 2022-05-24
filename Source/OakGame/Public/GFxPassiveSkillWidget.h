#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxPassiveSkillWidgetSlotData.h"
#include "UObject/NoExportTypes.h"
#include "GFxPassiveSkillWidget.generated.h"

class UGFxPassiveSkillIcon;
class UOakPlayerAbilityManagerComponent;

UCLASS()
class OAKGAME_API UGFxPassiveSkillWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGFxPassiveSkillIcon*> Icons;
    
    UPROPERTY(Transient)
    TArray<FGFxPassiveSkillWidgetSlotData> ActiveAbilityQueue;
    
    UPROPERTY(Transient)
    TArray<FVector2D> SlotPositions;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UOakPlayerAbilityManagerComponent> AbilityManager;
    
public:
    UGFxPassiveSkillWidget();
};


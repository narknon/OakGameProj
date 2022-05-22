#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OakHUDSkillIconWidget.generated.h"

class UOakPlayerAbilitySlotData;

UCLASS(EditInlineNew)
class UOakHUDSkillIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOakHUDSkillIconWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void StartTriggeredAbilityTimer(UOakPlayerAbilitySlotData* InSlotData, float Duration);
    
};


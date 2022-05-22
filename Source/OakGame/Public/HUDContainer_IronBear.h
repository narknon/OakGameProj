#pragma once
#include "CoreMinimal.h"
#include "HUDContainer.h"
#include "HUDContainer_IronBear.generated.h"

class AOakCharacter_IronBear;

UCLASS(EditInlineNew)
class UHUDContainer_IronBear : public UHUDContainer {
    GENERATED_BODY()
public:
    UHUDContainer_IronBear();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateManualHoldPanel(float HoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerCoreCooldown(float Duration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupHUD(AOakCharacter_IronBear* IronBearOwner);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetManualExitPanelVisible(bool bVisible);
    
};


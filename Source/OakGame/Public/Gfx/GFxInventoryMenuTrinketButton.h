#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GFxInventoryMenuTrinketButton.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxInventoryMenuTrinketButton : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bIsEquippingToThis;
    
public:
    UGFxInventoryMenuTrinketButton();
};


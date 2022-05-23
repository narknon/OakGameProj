#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GFxItemTradingMenuOffer.generated.h"

class UGFxEditableCurrencyCounterClip;
class UGFxItemTradingMenu;
class UGFxItemTradingBackpackItem;
class UGFxCurrencyCounterClip;
class UGbxGFxButton;

UCLASS(NonTransient)
class UGFxItemTradingMenuOffer : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxItemTradingMenu* OwningMenu;
    
    UPROPERTY(Transient)
    UGbxGFxObject* GridItemsClip;
    
    UPROPERTY(Transient)
    TArray<UGFxItemTradingBackpackItem*> ItemSlots;
    
    UPROPERTY(Transient)
    UGFxEditableCurrencyCounterClip* OfferingPanelCurrencyWidget;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* ReceivingPanelCurrencyWidget;
    
    UPROPERTY(Transient)
    UGbxGFxButton* TradeButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* DuelButton;
    
    UGFxItemTradingMenuOffer();
private:
    UFUNCTION()
    void OnSlotUnfocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnSlotFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnSlotClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};


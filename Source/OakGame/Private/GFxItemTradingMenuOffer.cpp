#include "GFxItemTradingMenuOffer.h"

class UGbxGFxButton;

void UGFxItemTradingMenuOffer::OnSlotUnfocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxItemTradingMenuOffer::OnSlotFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxItemTradingMenuOffer::OnSlotClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGFxItemTradingMenuOffer::UGFxItemTradingMenuOffer() {
    this->OwningMenu = NULL;
    this->GridItemsClip = NULL;
    this->OfferingPanelCurrencyWidget = NULL;
    this->ReceivingPanelCurrencyWidget = NULL;
    this->TradeButton = NULL;
    this->DuelButton = NULL;
}


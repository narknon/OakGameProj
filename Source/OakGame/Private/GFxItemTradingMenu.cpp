#include "GFxItemTradingMenu.h"

class UGbxGFxButton;
class UGbxGFxObject;

void UGFxItemTradingMenu::OnTradeButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxItemTradingMenu::OnThumbnailLoaded() const {
}

void UGFxItemTradingMenu::OnItemCardReady() const {
}

void UGFxItemTradingMenu::OnDuelButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxItemTradingMenu::OnBackpackGridItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const {
}

void UGFxItemTradingMenu::OnBackpackGridItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxItemTradingMenu::extOnCountdownFinished() const {
}

UGFxItemTradingMenu::UGFxItemTradingMenu() {
    this->ItemCardMovie = NULL;
    this->NumNonBackpackThumbnails = 8;
    this->CountdownOverlay = NULL;
    this->CountdownCancelHint = NULL;
    this->ItemCard = NULL;
    this->OfferingPanel = NULL;
    this->UnfocusedOfferingPanel = NULL;
    this->ReceivingPanel = NULL;
    this->HeaderTextClip = NULL;
    this->FilterTextClip = NULL;
    this->SortTextClip = NULL;
    this->BackpackNextHintClip = NULL;
    this->BackpackPrevHintClip = NULL;
    this->HeldCashCounter = NULL;
    this->CurrentlyPopulatingOfferSlot = NULL;
    this->IconManager = NULL;
}


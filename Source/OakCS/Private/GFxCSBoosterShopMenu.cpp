#include "GFxCSBoosterShopMenu.h"

class UGbxGFxDialogBox;
class UGbxGFxButton;

void UGFxCSBoosterShopMenu::OnCSBucksAmountChanged(int32 NewAmount) const {
}

void UGFxCSBoosterShopMenu::OnConfirmPurchase(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSBoosterShopMenu::OnBoosterItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxCSBoosterShopMenu::UGFxCSBoosterShopMenu() {
    this->NumBoosterItemByRow = 3;
    this->BoosterData = NULL;
    this->BoosterList = NULL;
    this->ClickedBoosterItem = NULL;
}


#include "GFxCSMainMenu.h"

class UGbxGFxButton;
class UGbxGFxDialogBox;

void UGFxCSMainMenu::OnWhatsThisClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSMainMenu::OnPlayClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSMainMenu::OnErrorDialogClicked(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSMainMenu::OnBuyBoosterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxCSMainMenu::UGFxCSMainMenu() {
    this->PlayButton = NULL;
    this->BuyBoosterButton = NULL;
    this->WhatsThisButton = NULL;
    this->QuitButton = NULL;
    this->HelpButton = NULL;
    this->DidYouKnowTitle = NULL;
    this->DidYouKnowText = NULL;
    this->SparkAuthenticatingDialog = NULL;
}


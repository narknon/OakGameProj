#include "GFxSHiFTMenuCreateAccountPage.h"

class UGbxGFxButton;

void UGFxSHiFTMenuCreateAccountPage::OnClickSubmit(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxSHiFTMenuCreateAccountPage::OnButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxSHiFTMenuCreateAccountPage::OnAgeConfirmedClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGFxSHiFTMenuCreateAccountPage::UGFxSHiFTMenuCreateAccountPage() {
    this->ConfirmAgeButton = NULL;
    this->EmailTextField = NULL;
    this->PasswordTextField = NULL;
    this->ConfirmPasswordTextField = NULL;
    this->SubmitButton = NULL;
}


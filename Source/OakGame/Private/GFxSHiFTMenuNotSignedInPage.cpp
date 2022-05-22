#include "GFxSHiFTMenuNotSignedInPage.h"

class UGbxGFxButton;

void UGFxSHiFTMenuNotSignedInPage::OnClickSignIn(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxSHiFTMenuNotSignedInPage::OnClickCreateAccount(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGFxSHiFTMenuNotSignedInPage::UGFxSHiFTMenuNotSignedInPage() {
    this->SignInButton = NULL;
    this->CreateAccountButton = NULL;
    this->DescriptionTextFieldClip = NULL;
    this->DescriptionTextFieldScrollBarClip = NULL;
    this->DescriptionTextFieldGridAreaClip = NULL;
}


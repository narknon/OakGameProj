#include "GFxFrontendLandingPage.h"

class UGbxGFxButton;

void UGFxFrontendLandingPage::OnGoOnlineClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

FString UGFxFrontendLandingPage::GetFrameForGoOnlineButton(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState ButtonState) {
    return TEXT("");
}

UGFxFrontendLandingPage::UGFxFrontendLandingPage() {
    this->InfoBoxClip = NULL;
    this->TitleTextClip = NULL;
    this->DescriptionTextClip = NULL;
    this->DescriptionTextGridAreaClip = NULL;
    this->DescriptionTextScrollBarClip = NULL;
    this->LandingButtonClip = NULL;
    this->TransitionTextClip = NULL;
    this->KeyArtClip = NULL;
    this->bIsEnbaled = false;
    this->CurrentPageType = EGFxFrontendLandingPageType::WantsOnline;
}


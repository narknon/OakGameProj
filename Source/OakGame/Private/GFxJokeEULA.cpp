#include "GFxJokeEULA.h"

class UGbxGFxButton;

void UGFxJokeEULA::OnSliderPositionUpdate(float SliderPercent) const {
}

void UGFxJokeEULA::OnEitherAcceptButtonPressed(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxJokeEULA::extFinishedHide() const {
}

UGFxJokeEULA::UGFxJokeEULA() {
    this->EULAScrollBar = NULL;
    this->ScrollSpeed = 0.10f;
    this->ContentWrapper = NULL;
    this->EULAText = NULL;
    this->EULATextMask = NULL;
    this->AcceptButton = NULL;
    this->OtherAcceptButton = NULL;
}


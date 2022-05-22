#include "GbxSpinner.h"

class UGbxGFxButton;

void UGbxSpinner::SpinRight(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

void UGbxSpinner::SpinLeft(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

UGbxSpinner::UGbxSpinner() {
    this->LeftButton = NULL;
    this->RightButton = NULL;
    this->ChoiceText = NULL;
}


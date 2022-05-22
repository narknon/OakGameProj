#include "GFxTutorialWidget.h"

void UGFxTutorialWidget::OnInputDeviceChanged(const EGbxMenuInputDevice NewInputDevice) {
}

UGFxTutorialWidget::UGFxTutorialWidget() {
    this->TutorialSequenceReadPosition = 0;
    this->bIsTutorialActive = false;
    this->bAdvanceOnKeyPress = true;
    this->bAllowTutorialSkip = true;
    this->InnerClip = NULL;
    this->LargeDialogWidget = NULL;
    this->MediumDialogWidget = NULL;
    this->SmallDialogWidget = NULL;
    this->CurrentDialogWidget = NULL;
}


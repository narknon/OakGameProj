#include "AdvancedInteractiveObjectProxy.h"



void AAdvancedInteractiveObjectProxy::OnOwningPlayerExitedInteractRange_Implementation() {
}

void AAdvancedInteractiveObjectProxy::OnOwningPlayerEnteredInteractRange_Implementation() {
}


AAdvancedInteractiveObjectProxy::AAdvancedInteractiveObjectProxy() {
    this->InputComponentClass = NULL;
    this->DefaultCameraState = TEXT("Default");
    this->CameraEntryTransitionIndex = 0;
    this->bCurrentlyInteracting = false;
    this->bPlayerWithinInteractRange = false;
    this->bCameraTransitionInProgress = false;
    this->OwningPlayer = NULL;
    this->OwningAIO = NULL;
}


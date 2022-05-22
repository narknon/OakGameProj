#include "PawnAttachmentTransition.h"

FPawnAttachmentTransition::FPawnAttachmentTransition() {
    this->BaseAction = NULL;
    this->PawnAction = NULL;
    this->bForceStopTransitionActions = false;
    this->AttachTiming = EAttachmentTransitionTiming::ChangePawnBeforeTransition;
    this->bOverrideAttachInfo = false;
    this->Conditions = NULL;
}


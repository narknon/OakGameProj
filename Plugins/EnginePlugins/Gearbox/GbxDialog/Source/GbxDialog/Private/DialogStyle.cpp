#include "DialogStyle.h"

UDialogStyle::UDialogStyle() {
    this->SocialStrategy = EGbxDialogSocialStrategy::Normal;
    this->bInterruptSamePriority = false;
    this->InterruptStrategy = EGbxDialogInterruptStrategy::StopOthers;
    this->Priority = 0;
    this->SubtitlePriority = 2;
    this->PatientWaitTime = 0.00f;
    this->MaxWaitTime = 0.00f;
    this->bSpeakableWhenDead = false;
    this->bInterruptableByHighPriorityVox = false;
    this->bPlayableWhenPaused = false;
    this->bPlayableDuringCinematic = false;
    this->bCallout = false;
    this->AudioComponentProvider = NULL;
    this->bLocalOnly = false;
}


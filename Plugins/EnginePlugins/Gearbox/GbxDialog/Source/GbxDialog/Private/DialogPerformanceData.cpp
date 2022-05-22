#include "DialogPerformanceData.h"

void UDialogPerformanceData::PlayWwiseEventPreview() {
}

UDialogPerformanceData::UDialogPerformanceData() {
    this->WwiseEvent = NULL;
    this->WwiseExternalMediaTemplate = NULL;
    this->EstimatedDuration = 0.00f;
    this->WwiseEventShortID = 0;
    this->Action = NULL;
    this->ActionWeight = 1.00f;
    this->MoodWeight = 0.75f;
    this->bEnableEarlyFinish = false;
    this->EarlyFinishTimeFraction = 0.00f;
    this->Style = NULL;
    this->OutputDelay = 0.30f;
    this->ChanceToPlay = 1.00f;
    this->QuietTimeScope = EGbxDialogQuietTimeScope::Individual;
    this->EchoData = NULL;
}


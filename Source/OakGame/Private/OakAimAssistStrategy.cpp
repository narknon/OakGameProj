#include "OakAimAssistStrategy.h"

UOakAimAssistStrategy::UOakAimAssistStrategy() {
    this->OakPlayerController = NULL;
    this->TargetingComponent = NULL;
    this->OakGameInstance = NULL;
    this->AimAssistActor = NULL;
    this->CurrentBestTarget = NULL;
}


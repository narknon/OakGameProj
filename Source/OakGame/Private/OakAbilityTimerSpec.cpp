#include "OakAbilityTimerSpec.h"

FOakAbilityTimerSpec::FOakAbilityTimerSpec() {
    this->Timer = NULL;
    this->bIsInfinite = false;
    this->bRemoveOnPause = false;
    this->Duration = 0.00f;
    this->LoopCount = 0;
    this->ReplacePolicy = EOakAbilityTimerReplacePolicy::KeepExisting;
    this->TickPolicy = EOakAbilityTimerTickPolicy::AlwaysTick;
}


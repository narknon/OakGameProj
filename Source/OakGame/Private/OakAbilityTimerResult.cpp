#include "OakAbilityTimerResult.h"

FOakAbilityTimerResult::FOakAbilityTimerResult() {
    this->Result = EOakAbilityTimerResult::Pulsed;
    this->PulsesThisFrame = 0;
    this->TotalPulseTime = 0.00f;
}


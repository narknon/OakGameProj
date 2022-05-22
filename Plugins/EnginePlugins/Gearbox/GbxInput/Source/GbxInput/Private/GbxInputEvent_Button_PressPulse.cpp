#include "GbxInputEvent_Button_PressPulse.h"

FGbxInputEvent_Button_PressPulse::FGbxInputEvent_Button_PressPulse() {
    this->DelayBeforeInitialPulse = 0.00f;
    this->BaseDelayBetweenPulses = 0.00f;
    this->PulseDelayAcceleration = 0.00f;
    this->FinalDelayBetweenPulses = 0.00f;
}


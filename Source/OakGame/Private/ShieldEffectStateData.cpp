#include "ShieldEffectStateData.h"

FShieldEffectStateData::FShieldEffectStateData() {
    this->Owner = NULL;
    this->State = EShieldEffectState::Full;
    this->NextHitTime = 0.00f;
}


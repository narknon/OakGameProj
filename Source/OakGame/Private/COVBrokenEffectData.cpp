#include "COVBrokenEffectData.h"

FCOVBrokenEffectData::FCOVBrokenEffectData() {
    this->Mesh = NULL;
    this->BreakEffectType = EWET_Default;
    this->BreakEffectID = 0;
    this->BrokenEffectType = EWET_Default;
    this->BrokenEffectID = 0;
    this->bHideAmpEffect = false;
}


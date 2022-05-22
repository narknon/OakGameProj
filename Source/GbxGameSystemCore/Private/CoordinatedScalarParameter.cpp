#include "CoordinatedScalarParameter.h"

FCoordinatedScalarParameter::FCoordinatedScalarParameter() {
    this->ScaleMode = ECoordinatedEffectParamScaleMode::None;
    this->WorldSpaceAxis = EAxis::None;
    this->bLoop = false;
    this->bBlendFromInitialValue = false;
    this->bApplyAttribute = false;
    this->bScaleAttributeByValueOverTime = false;
    this->bSpecificMaterial = false;
}


#include "ParticleConditionalEmitterEvaluator.h"

UParticleConditionalEmitterEvaluator::UParticleConditionalEmitterEvaluator() {
    this->Condition = NULL;
    this->bEnableIfTrue = true;
    this->bEvaluateEveryFrame = false;
}


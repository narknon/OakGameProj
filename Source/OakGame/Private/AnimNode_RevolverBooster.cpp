#include "AnimNode_RevolverBooster.h"

FAnimNode_RevolverBooster::FAnimNode_RevolverBooster() {
    this->BodyCycleFromEngineCycleRatio = 0.00f;
    this->IdleRPM = 0.00f;
    this->EngineRunningAmplitude = 0.00f;
    this->EngineIdleAmplitude = 0.00f;
    this->MufflerAmplitudeMutliplier = 0.00f;
    this->EngineRunningFrequency = 0.00f;
    this->EngineIdleFrequency = 0.00f;
    this->MufflerFrequencyMutliplier = 0.00f;
}


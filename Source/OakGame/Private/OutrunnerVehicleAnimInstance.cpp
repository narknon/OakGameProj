#include "OutrunnerVehicleAnimInstance.h"

void UOutrunnerVehicleAnimInstance::OnPrimaryOccupantExit() {
}

void UOutrunnerVehicleAnimInstance::OnPrimaryOccupantEnter() {
}

UOutrunnerVehicleAnimInstance::UOutrunnerVehicleAnimInstance() {
    this->bOverrideParentAnimInstance = true;
    this->BodyCycleFromEngineCycleRatio = 0.25f;
    this->IdleRPM = 10.00f;
    this->EngineRunningAmplitude = 2.00f;
    this->EngineIdleAmplitude = 2.00f;
    this->MufflerAmplitudeMutliplier = 1.00f;
    this->EngineRunningFrequency = 2.00f;
    this->EngineIdleFrequency = 2.00f;
    this->MufflerFrequencyMutliplier = 1.00f;
    this->AnimCharacterEnter = NULL;
    this->AnimCharacterExit = NULL;
    this->AnimHoodDown = NULL;
    this->AnimBrakeBounceA = NULL;
    this->AnimBrakeBounceB = NULL;
    this->BlendBodyAlpha = 0.00f;
    this->BlendAccelAlpha = 0.00f;
}


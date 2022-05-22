#include "AnimNode_TechnicalHandler.h"

FAnimNode_TechnicalHandler::FAnimNode_TechnicalHandler() {
    this->SuspensionDropMaxSpeed = 0.00f;
    this->CamberIntensity = 0.00f;
    this->BigWheelsBodyZ = 0.00f;
    this->AccelerationTreshold = 0.00f;
    this->TurningVelocityTreshold = 0.00f;
    this->PitchInterpSpeed = 0.00f;
    this->RollInterpSpeed = 0.00f;
    this->RollMaxAngle = 0.00f;
    this->BankingBoostAlpha = 0.00f;
    this->BoostBodyPitchAdd = 0.00f;
    this->BoostBodyUpAdd = 0.00f;
    this->MaxSteeringAngle = 0.00f;
    this->RoadSurfaceAmplitudePitchHighFreq = 0.00f;
    this->RoadSurfaceFrequencyPitchHighFreq = 0.00f;
    this->RoadSurfaceFrequencyRollFreq = 0.00f;
    this->RoadSurfacePersistencePitchHighFreq = 0.00f;
    this->RoadSurfaceOctavesPitchHighFreq = 0;
    this->RoadSurfaceAmplitudePitchLowFreq = 0.00f;
    this->RoadSurfaceFrequencyPitchLowFreq = 0.00f;
    this->RoadSurfacePersistencePitchLowFreq = 0.00f;
    this->RoadSurfaceOctavesPitchLowFreq = 0;
    this->BodyFollowSpeedOfPitch = 0.00f;
    this->BodyFollowAmplitudeMultiplier = 0.00f;
    this->MinTimeToSwitch = 0.00f;
    this->MaxTimeToSwitch = 0.00f;
    this->MinBumpTimeValue = 0.00f;
    this->MaxBumpTimeValue = 0.00f;
    this->MinAlphaValue = 0.00f;
    this->MaxAlphaValue = 0.00f;
    this->MinInterpSpeed = 0.00f;
    this->MaxInterpSpeed = 0.00f;
    this->DefaultRoadBumpiness = 0.00f;
    this->EngineAmplitude = 0.00f;
    this->BodyCycleFromEngineCycleRatio = 0.00f;
    this->IdleRPM = 0.00f;
    this->HoverWheelAngle = 0.00f;
    this->HoverSpinSpeedIdle = 0.00f;
    this->HoverSpinSpeedFullTrottle = 0.00f;
    this->HoverOffsetZ = 0.00f;
    this->HoverFrontWheelAdd = 0.00f;
    this->HoverMaxVelocity = 0.00f;
    this->HoverSuspensionIntensityUp = 0.00f;
    this->HoverSuspensionIntensityDown = 0.00f;
    this->HoverMaxPitchAngle = 0.00f;
    this->HoverMaxRollAngle = 0.00f;
    this->HoverPitchInterpSpeed = 0.00f;
    this->HoverPitchBoostingInterpSpeed = 0.00f;
    this->HoverRollInterpSpeed = 0.00f;
    this->HoverWheelRotationIntensity = 0.00f;
    this->HoverWheelRotationIntensityY = 0.00f;
}


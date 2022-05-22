#include "AnimNode_RevolverHandler.h"

FAnimNode_RevolverHandler::FAnimNode_RevolverHandler() {
    this->MaxSteeringAngle = 0.00f;
    this->SinPeriod1 = 0.00f;
    this->SinPeriod2 = 0.00f;
    this->SinPeriod3 = 0.00f;
    this->SinAmplitude1 = 0.00f;
    this->SinAmplitude2 = 0.00f;
    this->SinAmplitude3 = 0.00f;
    this->SwivelConeX = 0.00f;
    this->SwivelConeY = 0.00f;
    this->SwivelPeriodX = 0.00f;
    this->SwivelPeriodY = 0.00f;
    this->HoverIntrepSpeed = 0.00f;
    this->BodyCompensationInterpSpeed = 0.00f;
    this->HoverBodyCompensationInterpSpeed = 0.00f;
    this->BodyOffsetInterpSpeed = 0.00f;
    this->BodyHoverOffset = 0.00f;
    this->PositionOffsetFromRotation = 0.00f;
    this->HoverMaxPitchAngle = 0.00f;
    this->HoverMaxRollAngle = 0.00f;
    this->HoverPitchInterpSpeed = 0.00f;
    this->HoverPitchBoostingInterpSpeed = 0.00f;
    this->HoverRollInterpSpeed = 0.00f;
}


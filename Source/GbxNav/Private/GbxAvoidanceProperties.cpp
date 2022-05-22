#include "GbxAvoidanceProperties.h"

FGbxAvoidanceProperties::FGbxAvoidanceProperties() {
    this->WallFollowingAngle = 0.00f;
    this->DodgingPenalty = 0.00f;
    this->VelocityHysteresis = 0.00f;
    this->SidednessChangingPenalty = 0.00f;
    this->CollisionPenalty = 0.00f;
    this->PenetrationPenalty = 0.00f;
    this->Weight = 0.00f;
    this->Priority = 0;
    this->MaxSpeedScale = 0.00f;
    this->SensorSizeScale = 0.00f;
    this->RadiusScale = 0.00f;
    this->GoalDistanceOffsetPct = 0.00f;
    this->DirectionHysteresis = 0.00f;
    this->bUseSimplifiedAvoiance = false;
}


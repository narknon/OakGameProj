#include "StretchBonesSettings.h"

FStretchBonesSettings::FStretchBonesSettings() {
    this->bUniformStretch = false;
    this->ActorTrackingStyle = EStretchBonesActorTrackingStyle::FirstFrame;
    this->bTraceToGround = false;
    this->TraceToGroundDistance = 0.00f;
    this->MaxPredictionDistance = 0.00f;
}


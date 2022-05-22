#include "GbxAction_StretchBones.h"

UGbxAction_StretchBones::UGbxAction_StretchBones() {
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.10f;
    this->AnimSlot = TEXT("FullBody");
    this->bUniformStretch = false;
    this->ActorTrackingStyle = EStretchBonesActorTrackingStyle::Track;
    this->bTraceToGround = false;
    this->TraceToGroundDistance = 500.00f;
    this->MaxPredictionDistance = 0.00f;
}


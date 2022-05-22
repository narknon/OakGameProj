#include "GbxAnimNode_StretchBones.h"

FGbxAnimNode_StretchBones::FGbxAnimNode_StretchBones() {
    this->bUniformStretch = false;
    this->AnimatedTargetDistance = 0.00f;
    this->EndAnimatedTargetDistance = 0.00f;
    this->bUsingStretchDistance = false;
    this->StretchDistance = 0.00f;
    this->bTraceToGround = false;
    this->TraceToGroundDistance = 0.00f;
    this->MarkerMode = EStretchBonesMarkerMode::BeforeMarker;
    this->bUseLookUpAxis = false;
    this->LookAtClamp = 0.00f;
    this->InterpolationType = EInterpolationBlend::Linear;
    this->InterpolationTime = 0.00f;
    this->InterpolationTriggerThreashold = 0.00f;
}


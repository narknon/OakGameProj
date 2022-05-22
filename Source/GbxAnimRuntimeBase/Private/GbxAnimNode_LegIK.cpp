#include "GbxAnimNode_LegIK.h"

FGbxAnimNode_LegIK::FGbxAnimNode_LegIK() {
    this->FootIKTraceUpScale = 0.00f;
    this->FootIKTraceDownScale = 0.00f;
    this->FootIKOffsetInterpSpeed = 0.00f;
    this->FootIKLODThreshold = 0;
    this->bUseFootIkTraceScreenSizeThreshold = false;
    this->MeshIKOffsetInterpSpeed = 0.00f;
    this->bShouldLimitFootDistanceToMeshOffset = false;
    this->MaxSlopeAngle = 0.00f;
    this->SlopeNormalMinInterpSpeed = 0.00f;
    this->SlopeNormalMaxInterpSpeed = 0.00f;
    this->MinVelocity = 0.00f;
    this->MaxVelocity = 0.00f;
}


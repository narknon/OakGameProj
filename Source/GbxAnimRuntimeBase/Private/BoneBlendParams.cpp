#include "BoneBlendParams.h"

FBoneBlendParams::FBoneBlendParams() {
    this->Weight = 0.00f;
    this->YawWeight = 0.00f;
    this->PitchWeight = 0.00f;
    this->bUseRotationOffset = false;
    this->LookAtClamp = 0.00f;
    this->LookAxis = EGbxLookAxisOption::X;
    this->UpAxis = EGbxLookAxisOption::X;
}


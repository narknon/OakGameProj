#include "GbxBoneModifyProfile.h"

UGbxBoneModifyProfile::UGbxBoneModifyProfile() {
    this->ReferenceAnimation = NULL;
    this->bUseTranslation = true;
    this->bUseRotation = true;
    this->bUseScale = true;
    this->PoseMode = EGbxBoneModifyProfile_PoseMode::Additive;
    this->AnimationTime = 0.00f;
}


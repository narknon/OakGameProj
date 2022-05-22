#include "BoneModifyState.h"

FBoneModifyState::FBoneModifyState() {
    this->PoseMode = EGbxBoneModifyProfile_PoseMode::Override;
    this->bStartActive = false;
}


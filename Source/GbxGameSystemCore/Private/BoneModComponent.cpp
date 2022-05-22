#include "BoneModComponent.h"

UBoneModComponent::UBoneModComponent() {
    this->bUseTranslation = true;
    this->TranslationSpace = BCS_BoneSpace;
    this->bReplaceTranslation = false;
    this->bUseRotation = true;
    this->RotationSpace = BCS_BoneSpace;
    this->bReplaceRotation = false;
    this->bUseScale = true;
    this->bReplaceScale = false;
    this->bStartActive = true;
}


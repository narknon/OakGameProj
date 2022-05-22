#include "AIAspectSettings_Rotation.h"

FAIAspectSettings_Rotation::FAIAspectSettings_Rotation() {
    this->bCanRotate = false;
    this->bTrackTargetOverTime = false;
    this->BodyHeadingOffsetPresets = EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset::Front;
    this->BodyHeadingOffset = 0.00f;
    this->PremadeSettings = EAIAspectSettingsDefaults_Rotation::Custom;
    this->bUseBody = false;
    this->bUseAim = false;
    this->bUseLook = false;
    this->bKeepFacingTargetOnStop = false;
}


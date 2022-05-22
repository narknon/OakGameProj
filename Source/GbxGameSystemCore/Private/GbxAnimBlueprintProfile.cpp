#include "GbxAnimBlueprintProfile.h"

void UGbxAnimBlueprintProfile::RebuildBoneLists() {
}

void UGbxAnimBlueprintProfile::AnimBlueprintImportFunction(EAnimBPProfileImport ImportType) {
}

UGbxAnimBlueprintProfile::UGbxAnimBlueprintProfile() {
    this->bImportedLegIKSettings = false;
    this->FootIKTraceUpScale = 0.25f;
    this->FootIKTraceDownScale = 0.25f;
    this->FootIKOffsetInterpSpeed = 400.00f;
    this->FootIKFootLODThreshold = 8;
    this->MeshIKOffsetInterpSpeed = 10.00f;
    this->bShouldLimitFootDistanceToMeshOffset = true;
    this->MaxSlopeAngle = 45.00f;
    this->SlopeNormalMinInterpSpeed = 1.00f;
    this->SlopeNormalMaxInterpSpeed = 2.00f;
    this->FootIKLODThreshold = -1;
    this->FootIKLODInterpolationSpeed = -1.00f;
    this->bUseFootIkScreenSizeThreshold = false;
    this->bUseFootIkTraceScreenSizeThreshold = false;
    this->FootIKReachPrecision = 0.00f;
    this->FootIKMaxIterations = 0;
    this->MinVelocity = 200.00f;
    this->MaxVelocity = 600.00f;
    this->ParentLookAxis = EGbxLookAxisOption::Y_Neg;
    this->LookAtBlinkAngleOverride = 10.00f;
    this->bUseLookAtBlinkAngleOverride = false;
    this->bUseEyeMovement = true;
    this->EyeFocusTimeMin = 4.00f;
    this->EyeFocusTimeMax = 6.00f;
    this->EyeGlanceTimeMin = 0.50f;
    this->EyeGlanceTimeMax = 1.00f;
    this->EyeShiftTimeMin = 1.00f;
    this->EyeShiftTimeMax = 2.00f;
    this->LookAtEyeLODThreshold = 4;
    this->LookAtLODThreshold = -1;
    this->LookAtLODInterpolationSpeed = -1.00f;
    this->bUseLookAtEyeScreenSizeThreshold = false;
    this->bUseLookAtScreenSizeThreshold = false;
    this->PhysicsAsset = NULL;
    this->bUseTeethOffsetOverride = false;
    this->bUseUpperTeethBoneRefOverride = false;
    this->DefaultIdleLoopAnimation = NULL;
    this->SlotName = TEXT("DefaultSlot");
}


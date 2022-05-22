#include "GbxAction_Anim.h"

void UGbxAction_Anim::K2_SetMantlingBlocked(bool bBlocked) const {
}

void UGbxAction_Anim::K2_SetGodMode(bool bEnable) const {
}

void UGbxAction_Anim::K2_SetFootIK(bool bDisable) const {
}

void UGbxAction_Anim::K2_SetDemigodMode(bool bEnable) const {
}

void UGbxAction_Anim::K2_SetCrouchBlocked(bool bBlocked) const {
}

void UGbxAction_Anim::K2_Resume() const {
}

void UGbxAction_Anim::K2_RepProceedToNextSection() const {
}

void UGbxAction_Anim::K2_RepJumpToNextSection() const {
}

void UGbxAction_Anim::K2_ProceedToNextSection() const {
}

void UGbxAction_Anim::K2_Pause() const {
}

void UGbxAction_Anim::K2_JumpToNextSection() const {
}

UGbxAction_Anim::UGbxAction_Anim() {
    this->DefaultEndCondition = EGbxActionEndCondition::EndCondition_BlendOut;
    this->AnimationSlot = TEXT("FullBody");
    this->BlendInTime = 0.25f;
    this->bPushBlendInTime = true;
    this->DefaultBlendOutTime = 0.25f;
    this->bPushBlendOutTime = true;
    this->PlayRate = 1.00f;
    this->bScalePlayrateWithCharacterScale = false;
    this->SourceCameraAlpha = 0.00f;
    this->MontageCameraAlpha = 1.00f;
    this->bDisableFootIk = false;
    this->bBody1stControlsDuration = false;
    this->bPlay1stPersonAnimationsOnRemotePlayers = false;
    this->bHasAnimSlot3rdValue = false;
    this->bHasAnimSlot1stValue = false;
    this->bGodMode = false;
    this->bDemigodMode = false;
    this->bBlockCrouching = false;
    this->bBlockMantling = false;
    this->bEnableScaledRootMotion = true;
    this->bMaintainRootVelocity = false;
    this->bOverrideDuration = false;
    this->OverrideDuration = 0.00f;
    this->bOverrideCount = false;
    this->OverrideCount = 0;
    this->bOverridePlayRate = false;
    this->OverridePlayRate = 0.00f;
    this->BlendSpaceXRegisterName = TEXT("BlendSpaceX");
    this->BlendSpaceYRegisterName = TEXT("BlendSpaceY");
}


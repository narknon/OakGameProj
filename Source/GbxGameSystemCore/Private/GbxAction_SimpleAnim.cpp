#include "GbxAction_SimpleAnim.h"


void UGbxAction_SimpleAnim::K2_SetTickAndRefreshBones(bool bLockResource) const {
}

void UGbxAction_SimpleAnim::K2_SetPhysNoneWithRootMotion(bool bEnable) const {
}

void UGbxAction_SimpleAnim::K2_SetMovement(bool bDisable) const {
}

void UGbxAction_SimpleAnim::K2_SetLook(bool bDisable) const {
}

void UGbxAction_SimpleAnim::K2_SetHitReactions(bool bDisable) const {
}

void UGbxAction_SimpleAnim::K2_SetHeadLookLocked(bool bLock) const {
}

void UGbxAction_SimpleAnim::K2_SetHeadLook(bool bDisable) const {
}

void UGbxAction_SimpleAnim::K2_SetCollision(bool bEnable) const {
}

void UGbxAction_SimpleAnim::K2_SetAvoidance(bool bDisable) const {
}

void UGbxAction_SimpleAnim::K2_SetAIThinking(bool bDisable) const {
}

void UGbxAction_SimpleAnim::K2_SetAimRotation(bool bDisable) const {
}

UGbxAction_SimpleAnim::UGbxAction_SimpleAnim() {
    this->bStopAI = false;
    this->bAbortAI = false;
    this->bStopMovement = false;
    this->bDisableHitReactions = false;
    this->bUsePhysNoneWithRootMotion = false;
    this->bStopLook = false;
    this->bStopAimRotation = false;
    this->bStopHeadLook = false;
    this->bLockHeadLook = false;
    this->bDisableAvoidance = false;
    this->bTickAndRefreshBones = false;
    this->bDisableCollision = false;
    this->DisableCollisionChannels.AddDefaulted(3);
    this->bEnableLoopHelper = true;
    this->bCanInterruptSameSlotAnims = true;
    this->bResetDynamicsOnBegin = false;
    this->bUsePhysicalAnimationProfile = false;
    this->PhysicalAnimationProfile = NULL;
    this->bRestorePreviousPhysicalAnimationProfileOnEnd = true;
    this->bUseNewBoneSetFilter = false;
    this->NewBoneSetFilter = NULL;
    this->bRestorePreviousBoneSetFilterProfileOnEnd = false;
    this->bResetBoneSetFilter = false;
    this->DefaultInterruptBlendOutTime = -1.00f;
    this->bReleaseResourceFlagsOnAnimEnd = true;
    this->bEndActionOnBlendOut = false;
}


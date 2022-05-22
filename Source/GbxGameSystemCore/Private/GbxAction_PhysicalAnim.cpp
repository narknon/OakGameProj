#include "GbxAction_PhysicalAnim.h"

EGbxPhysicalActionDynamicBodyState UGbxAction_PhysicalAnim::K2_GetDynamicBodyState(float AngularThreshold) const {
    return EGbxPhysicalActionDynamicBodyState::DBS_Upright;
}

void UGbxAction_PhysicalAnim::K2_FixupDynamicToKinematicIssues(float AngularThreshold) const {
}

UGbxAction_PhysicalAnim::UGbxAction_PhysicalAnim() {
    this->RootMotionControl = EPhysicalAnimationRootMotionControl::PARMC_DrivenByAnimated;
    this->MovementLockMode = EGbxPhysicalActionMovementLockMode::MLM_None;
    this->DynamicBoneActivationMode = EGbxPhysicalActionDynamicBoneActivationMode::DBAM_HitBone;
    this->BeginCondition = EGbxPhysicalActionBeginCondition::BeginCondition_Immediate;
    this->PhysicalBeginConditionFlags = 0;
    this->PhysicalEndConditionFlags = 0;
    this->PhysicalEndCondition = EGbxPhysicalActionEndCondition::EndCondition_AnimationMatch;
    this->CustomForceMultiplier = 1.00f;
    this->UpwardForceMultiplier = 0.00f;
    this->bForceAppliedAtLocation = true;
    this->bHasValidHitForce = true;
}


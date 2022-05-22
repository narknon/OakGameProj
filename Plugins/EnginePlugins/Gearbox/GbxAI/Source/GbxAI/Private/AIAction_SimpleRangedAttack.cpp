#include "AIAction_SimpleRangedAttack.h"

UAIAction_SimpleRangedAttack::UAIAction_SimpleRangedAttack() {
    this->SphereTraceExtent = 10.00f;
    this->bDoArcTrace = false;
    this->bUseOverrideAngle = true;
    this->FacingPolicyDuringAction = EMeleeRotationOption::FollowTarget;
    this->bAlignBodyWithTarget = true;
    this->bKeepFacingTargetOnStop = false;
    this->bDistanceToTargetTestShouldFilterOnly = false;
    this->DefaultEnvQueryAsset = NULL;
    this->DefaultTraceTestsAsset = NULL;
    this->TraceTestInstance = NULL;
    this->SimpleRangedAttackVersion = 6;
}


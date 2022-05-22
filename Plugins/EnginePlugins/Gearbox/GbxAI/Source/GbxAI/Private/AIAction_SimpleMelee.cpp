#include "AIAction_SimpleMelee.h"

UAIAction_SimpleMelee::UAIAction_SimpleMelee() {
    this->MeleeAction = NULL;
    this->bCanMove = true;
    this->FacingPolicyDuringAction = EMeleeRotationOption::FollowTarget;
    this->bUseOverrideAngle = true;
    this->bAlignBodyWithTarget = true;
    this->bKeepFacingTargetOnStop = false;
    this->bStopWhenReached = false;
    this->bCanStartWhenGoalIsUncertain = false;
    this->bCanBeInterrupted = false;
    this->MeleeActionVersion = 2;
}


#include "GbxCharacterAnimInstance.h"

void UGbxCharacterAnimInstance::SetDesiredFacialEmoteWeight(float Weight, float BlendTime) {
}


UGbxCharacterAnimInstance::UGbxCharacterAnimInstance() {
    this->HeadLookAtPercentage = 0.00f;
    this->LookAtWeight = 0.00f;
    this->bLookAtBlinkStarted = false;
    this->CombatStance = NULL;
    this->PassiveStance = NULL;
    this->StanceData = NULL;
    this->StanceType = NULL;
    this->StanceComponent = NULL;
    this->bInCombatStance = false;
    this->bInPassiveStance = false;
    this->IsInAir = false;
    this->IsCrouching = false;
    this->bIsFlying = false;
    this->bIsFalling = false;
    this->bHasBeenLaunched = false;
    this->bJumped = false;
    this->bForceFallingState = false;
    this->MaxWalkSpeed = 0.00f;
    this->MaxSprintSpeed = 0.00f;
    this->MaxWalkSpeedCrouched = 0.00f;
    this->Speed2D = 0.00f;
    this->Speed2DRaw = 0.00f;
    this->VelocityZ = 0.00f;
    this->ForwardDirection = 0.00f;
    this->RightDirection = 0.00f;
    this->UpDirection = 0.00f;
    this->Direction = 0.00f;
    this->BodyYaw = 0.00f;
    this->ReverseDirection = 0.00f;
    this->Radius = 0.00f;
    this->WantsToTurn = false;
    this->TurnAmount = 0.00f;
    this->TurnIsActive = false;
    this->MaxPredictedTurnDegrees = 0.00f;
    this->MaxPredictedTurnTime = 0.00f;
    this->Pitch = 0.00f;
    this->Yaw = 0.00f;
    this->AimBlendWeight = 0.00f;
    this->bCanAimInPassiveStance = true;
    this->bUpdateFootIK = true;
    this->bUpdateHandIK = true;
    this->LeftHandIKWeight = 0.00f;
    this->RightHandIKWeight = 0.00f;
    this->LeftHandGripWeight = 0.00f;
    this->RightHandGripWeight = 0.00f;
    this->bUseLegIkBaseClass = false;
    this->bHasLeftHandWorldIKTarget = false;
    this->bBlueprintForceLeftHandWorldIKTarget = false;
    this->bHasRightHandWorldIKTarget = false;
    this->bBlueprintForceRightHandWorldIKTarget = false;
    this->bHasFootWorldIKTargets = false;
    this->AINavYaw = 0.00f;
    this->AINavTurnBlendDegrees = 0.00f;
    this->AINavTransitionBlendDegrees = 0.00f;
    this->AINavHopDistance = 0.00f;
    this->AINavState_IdleAlphaTime = 0.10f;
    this->AINavState_IdleAlpha = 1.00f;
    this->bAINavState_Idle = false;
    this->bAINavState_Move = false;
    this->bAINavState_Start = false;
    this->bAINavState_Stop = false;
    this->bAINavState_Turn = false;
    this->BlendPoints = EGbxCharacterBlendPoints::SixPoint;
    this->bAINavWantsForward = false;
    this->bAINavWantsBackward = false;
    this->bAINavWantsLeft = false;
    this->bAINavWantsRight = false;
    this->bAINavIsMoving2D = false;
    this->bAINavIsStill2D = false;
    this->AINavPreviewTableIndex = 0;
    this->AINavPreviewDesiredState = ENavAnimState::None;
    this->bAINav_UseDesired = false;
    this->bAINav_CanStretch = true;
    this->MeshScale = 1.00f;
    this->AINavPreviewCurrentState = ENavAnimState::None;
    this->StartTransitionTimeToEvaluate = 0.00f;
    this->StopTransitionTimeToEvaluate = 0.00f;
    this->TurningRotationTimeToEvaluate = 0.00f;
    this->ActiveAnimBoneSetFilter = NULL;
    this->PrevAnimBoneSetFilter = NULL;
    this->FacialEmoteWeight = 0.00f;
    this->DesiredFacialEmoteWeight = 0.00f;
    this->FacialEmoteWeightAlphaSpeed = 4.00f;
    this->DesiredActionWeight = 1.00f;
    this->BoneSetTransitionActionWeight = 1.00f;
    this->BoneSetBlendWeight = 1.00f;
    this->BoneSetTransitionBlendType = EBoneSetTransitionBlendType::BlendToOne;
    this->BoneSetTransitionBlendSpeed = 1.00f;
    this->BoneSetBlendSpeed = 1.00f;
    this->DefaultBoneSetBlendSpeed = 4.00f;
    this->DefaultBoneSetTransitionBlendSpeed = 1.50f;
}


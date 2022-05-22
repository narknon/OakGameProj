#include "OakPlayerAnimInstance.h"

class AWeapon;

void UOakPlayerAnimInstance::OnWeaponReloadStarted(AWeapon* Weapon, bool bAuto) {
}

void UOakPlayerAnimInstance::OnWeaponReloadEnded(AWeapon* Weapon, bool bCompleted) {
}

void UOakPlayerAnimInstance::AnimNotify_Raised() {
}

void UOakPlayerAnimInstance::AnimNotify_IsLowered() {
}

UOakPlayerAnimInstance::UOakPlayerAnimInstance() {
    this->PlayerOwner = NULL;
    this->bIsPistol = false;
    this->FirstPersonData = NULL;
    this->FirstPersonSpeed2D = 0.00f;
    this->FirstPersonZoomEffect = 0.00f;
    this->FirstPersonZoomStartPosition = 0.00f;
    this->FirstPersonTiltWeight = 0.00f;
    this->FirstPersonMuteADSWeight = 0.00f;
    this->FirstPersonMantleReachWeight = 0.00f;
    this->FirstPersonWeaponAngleAlpha = 0.00f;
    this->FirstPersonRAddAlpha = 0.00f;
    this->FirstPersonPistolStockAddAlpha = 0.00f;
    this->HeadBobMultiplier = 1.00f;
    this->FirstPersonFingerOverrideWeight = 0.00f;
    this->FirstPersonLadderIdleAdditiveAlpha = 0.00f;
    this->bFirstPersonUseAimOffset = false;
    this->bFirstPersonBranchLeftArm = false;
    this->bFirstPersonBlendMantle = false;
    this->bFirstPersonWeaponIsLowered = false;
    this->bFirstPersonBlendLowerWeapon = false;
    this->bIsEchoDeviceActive = false;
    this->bShouldPlayEchoAnim1P = false;
    this->bShouldPlayEchoAnim3P = false;
    this->bEchoDeviceOutsideOfMenuMode = false;
    this->bEchoDeviceButton1Pressed = false;
    this->bEchoDeviceButton2Pressed = false;
    this->bEchoDeviceButton3Pressed = false;
    this->EchoDeviceDPadXAxis = 0.00f;
    this->EchoDeviceDPadYAxis = 0.00f;
    this->JumpStartVelocityZ = 500.00f;
    this->StartFallingVelocityZ = -20.00f;
    this->JumpStartFromFallMaximumVelocityZ = 600.00f;
    this->FallingAnimVelocityZ = -4000.00f;
    this->CrouchMaxVelocityZ = 560.00f;
    this->FirstPersonSprintJumpStartVelocityZ = 600.00f;
    this->FirstPersonCrouchMaxVelocityZ = 540.00f;
    this->JumpEndMinSpeed2D = 50.00f;
    this->SprintMinSpeed2D = 600.00f;
    this->IdleMaxSpeed2D = 5.00f;
    this->CrouchEndMaxSpeed2D = 10.00f;
    this->InjuredSpeedDivider = 219.00f;
    this->InjuredPlayRate = 0.00f;
    this->FirstPersonSprintJumpExitMaxSpeed = 540.00f;
    this->FirstPersonJumpExitMinSpeed = 400.00f;
    this->FirstPersonSprintMinSpeed2D = 650.00f;
    this->FirstPersonBunnyHopTiming = 0.00f;
    this->FirstPersonBunnyHopTiming_Sprint = 0.00f;
    this->BaseFrontDirectionMinThreshold = -45.00f;
    this->BaseFrontDirectionMaxThreshold = 120.00f;
    this->FrontToBackTransitionFrontDirectionMinThreshold = -50.00f;
    this->FrontToBackTransitionFrontDirectionMaxThreshold = 120.00f;
    this->InjuredFrontDirectionMinThreshold = -45.00f;
    this->InjuredFrontDirectionMaxThreshold = 135.00f;
    this->InjuredFrontToBackTransitionFrontDirectionMinThreshold = -50.00f;
    this->InjuredFrontToBackTransitionFrontDirectionMaxThreshold = 140.00f;
    this->InjuredBackToFrontTransitionFrontDirectionMinThreshold = -45.00f;
    this->InjuredBackToFrontTransitionFrontDirectionMaxThreshold = 135.00f;
    this->SprintFrontDirectionMinThreshold = -45.00f;
    this->SprintFrontDirectionMaxThreshold = 135.00f;
    this->bIsIdling = false;
    this->bIsCrouchIdling = false;
    this->bWasSprinting = false;
    this->bCanFallJump = false;
    this->FallingSpeedAlpha = 0.00f;
    this->StateChangeBlendTime = 0.20f;
    this->bIsJumpEnded = false;
    this->bIsCrouchMoveEnded = false;
    this->bIsCrouchMoveNeedEnding = false;
    this->bIsCrouchEndDone = false;
    this->bIsCrouchNeedStarting = false;
    this->bIsCrouchNeedMoving = false;
    this->bIsCrouchInVehicle = false;
    this->bIsExitingLadderInAir = false;
    this->bIsExitingLadderNotInAir = false;
    this->bIsClimbingLadder = false;
    this->bIsJumpStart = false;
    this->bIsSprintJumpStart = false;
    this->bIsJumpLoop = false;
    this->bIsSprintJumpLoop = false;
    this->bIsJumpEndedBySpeed = false;
    this->bIsBaseLocoGoingForward = false;
    this->bIsBaseLocoGoingBackward = false;
    this->bIsBaseLocoGoingFrontToBack = false;
    this->bIsSprintLocoExitForward = false;
    this->bIsSprintLocoExitBackward = false;
    this->bIsSprintLocoExitForwardNoBlend = false;
    this->bIsSprintLocoExitBackwardNoBlend = false;
    this->bIsInjuredLocoGoingForward = false;
    this->bIsInjuredLocoGoingBackward = false;
    this->bIsInjuredLocoGoingFrontToBack = false;
    this->bIsInjuredLocoGoingBackToFront = false;
    this->bCanStartSprinting = false;
    this->LeftHandIKWhileAimOffset = 0.00f;
    this->AimOffsetDefaultBoneSet = NULL;
    this->AimOffsetCurrentBoneSet = NULL;
    this->bFirstPersonIsJumpLoop = false;
    this->bFirstPersonIsSprintJumpStart = false;
    this->bFirstPersonIsCrouchNeedMoving = false;
    this->bFirstPersonIsCrouchNeedStarting = false;
    this->bFirstPersonIsCrouchExit = false;
    this->bFirstPersonCanUseCrouchTransition = false;
    this->GunnerBockJockBlitzPassiveSkillModifierAlpha = 0.00f;
    this->bFirstPersonIsJumpIdle = false;
    this->bFirstPersonIsSlidingToLocomotion = false;
    this->bFirstPersonIsIdling = false;
    this->bFirstPersonToIdleToSprintTransitionState = false;
    this->bFirstPersonIdleToSprint = false;
    this->bFirstPersonSprintToIdle = false;
    this->bFirstPersonSprintToSprintTransition = false;
    this->bFirstPersonADSJumpEnter = false;
    this->bFirstPersonADSCrouchStart = false;
    this->bFirstPersonADSCrouchMove = false;
    this->bFirstPersonADSJumpLoop = false;
    this->bFirstPersonADSToHipFire = false;
    this->bFirstPersonExitLowerWeapon = false;
    this->bFirstPersonUnarmedIsJumpStarted = false;
    this->bFirstPersonUnarmedIsSprintJumpStart = false;
    this->bFirstPersonHardLanded = false;
    this->RightHandInteractionBottomPressAssetPlayerIndex = -1;
    this->RightHandInteractionBottomPressToHoldTransitionIndex = -1;
    this->RightHandInteractionMiddlePressAssetPlayerIndex = -1;
    this->RightHandInteractionMiddleToNeutralTransitionIndex = -1;
    this->RightHandInteractionTopPressAssetPlayerIndex = -1;
    this->RightHandInteractionTopPressToHoldTransitionIndex = -1;
    this->ADSSetStateMachineIndex = -1;
    this->ADSSetJumpExitStateIndex = -1;
    this->ADSSetJumpExitToJumpEnterTransitionIndex = -1;
    this->HipfireSetStateMachineIndex = -1;
    this->HipfireSetJumpExitStateIndex = -1;
    this->HipfireSetJumpExitToJumpEnterTransitionIndex = -1;
    this->HipfireSetJumpExitToUprightIdleAndMovementTransitionIndex1 = -1;
    this->HipfireSetSprintExitAssetPlayerIndex = -1;
    this->HipfireSetSprintExitToUprightIdleAndMovementTransitionIndex1 = -1;
    this->HipfireSetSprintJumpExitStateIndex = -1;
    this->HipfireSetSprintJumpExitToSprintJumpEnterTransitionIndex = -1;
    this->HipfireSetSprintJumpExitToSprintExitTransitionIndex = -1;
    this->HipfireSetSprintJumpExitToUprightIdleAndMovementTransitionIndex2 = -1;
    this->UprightLocomotionStatesStateMachineIndex = -1;
    this->UprightLocomotionStatesIdleToSprintAssetPlayerIndex = -1;
    this->UprightLocomotionStatesIdleToSprintToIdleTransitionIndex2 = -1;
    this->UprightLocomotionStatesIdleToSprintStateIndex = -1;
    this->UprightLocomotionStatesIdleToSprintToSprintTransitionTransitionIndex = -1;
    this->UprightLocomotionStatesSprintTransitionStateIndex = -1;
    this->UprightLocomotionStatesSprintTransitionToLocomotionTransitionIndex1 = -1;
    this->UprightLocomotionStatesSprintExitAssetPlayerIndex = -1;
    this->UprightLocomotionStatesSprintTransitionToLocomotionTransitionIndex2 = -1;
    this->UnarmedSetStateMachineIndex = -1;
    this->UnarmedSetJumpExitStateIndex = -1;
    this->UnarmedSetJumpExitToJumpEnterTransitionIndex = -1;
}


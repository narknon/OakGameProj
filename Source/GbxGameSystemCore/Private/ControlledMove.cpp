#include "ControlledMove.h"

class AActor;

void UControlledMove::OnTeleported_Implementation(float MoveDuration, const FVector& PreTeleportLocation) {
}

void UControlledMove::OnTargetLocationChanged_Implementation(const FVector& NewTargetLocation) {
}

void UControlledMove::OnStop_Implementation(bool bInterrupted) {
}

void UControlledMove::OnStart_Implementation(float MoveDuration, AActor* TargetActor) {
}

void UControlledMove::OnServerStop_Implementation(bool bInterrupted) {
}

void UControlledMove::OnServerStart_Implementation(float MoveDuration, AActor* TargetActor, AActor* Instigator) {
}

void UControlledMove::OnHitWorld_Implementation(AActor* HitActor, const FVector& HitNormal) {
}

void UControlledMove::OnHitTargetable_Implementation(AActor* HitActor, const FVector& HitNormal) {
}

UControlledMove::UControlledMove() {
    this->bIsSpeedScaleNormalized = false;
    this->bEaseInSpeedConstraints = false;
    this->bRestoreCharacterMovementMode = true;
    this->bZeroVelocityAtEnd = true;
    this->bUpdateCharacterRotationYaw = false;
    this->bUpdateCharacterRotationPitch = false;
    this->bApplyLaunchVelocityOnStart = false;
    this->bSpeedAffectedByMaxGroundSpeedScale = false;
    this->bBlockMomentumAdd = false;
    this->bIsMotionNormalized = false;
    this->bIsInheritVelocityScaleNormalized = false;
    this->bApplyMoveWhenFalling = true;
    this->bStopOnLanding = false;
    this->bOverrideAirControl = false;
    this->bUseSlopeCurve = false;
    this->bStopWhenTargetReached = false;
    this->bEnableMoveControls = false;
    this->bLimitedLookControl = false;
    this->bInputVectorRelativeToMoveDirection = false;
    this->bUseMovingLaunchDirection = false;
    this->bDirectionRelativeToTarget = false;
    this->bOffsetLocationByCollisionRadius = false;
    this->bOffsetLocationByTargetCollisionRadius = false;
    this->bLeap = false;
    this->bAlwaysCollideWithTarget = false;
    this->bStopOnHitWall = false;
    this->bStopOnHitTargetable = false;
    this->bTeleport = false;
    this->bRestrictTeleportToGround = true;
    this->bDisableLookInput = false;
    this->bDisableMoveInput = false;
    this->bEnableTargetControls = false;
    this->bTargetControlGrounded = true;
    this->bTrackTarget = false;
    this->bStopAI = false;
    this->bAbortAI = false;
    this->bGodMode = false;
    this->bDemigodMode = false;
    this->bEndCrouch = false;
    this->bForceCrouch = false;
    this->bUpdateCameraRotationYaw = false;
    this->bUpdateCameraRotationPitch = false;
    this->bCancelActionSkillsIfPlayerNotInstigator = true;
    this->bIsNetworkAutonomous = false;
    this->bPlayStartStopActionsLocally = false;
    this->bAllowClientCollisionNotifications = false;
    this->MovementType = ECMMovementType::Ground;
    this->CharacterRotationYawOffset = 0.00f;
    this->CharacterRotationPitchOffset = 0.00f;
    this->InheritVelocityType = 0;
    this->AdjustDurationBySlopeModifier = 0.00f;
    this->MaxStepHeight = 0.00f;
    this->LedgeBehavior = ECMLedgeBehavior::CanWalkOffLedges;
    this->LedgeHeight = 100.00f;
    this->GravityModificationType = ECMGravityModificationType::ScaleGravity;
    this->TerminalVelocityModificationType = ECMTerminalVelocityModificationType::ScaleTerminalVelocity;
    this->TargetReached2DThreshold = 0.00f;
    this->TargetReachedUpThreshold = 0.00f;
    this->TargetReachedDownThreshold = 100.00f;
    this->MoveFBControlType = ECMMoveFBControlType::None;
    this->MoveLRControlType = ECMMoveLRControlType::None;
    this->LocationOffset = 0.00f;
    this->LeapApexAngle = 0.00f;
    this->LeapStartLandingOffsetTime = 0.00f;
    this->StartAction = NULL;
    this->StopAction = NULL;
    this->LeapApexAction = NULL;
    this->LeapLandingAction = NULL;
    this->HitWallAngle = 90.00f;
    this->TeleportOffset = 0.00f;
    this->TeleportLocationPreference = ECMTeleportPreferenceType::Ahead_MoveDirection;
    this->MaxTrackingCorrectionAngle = 90.00f;
    this->TrackingVelocity = 0.00f;
    this->ControlledCharacter = NULL;
}


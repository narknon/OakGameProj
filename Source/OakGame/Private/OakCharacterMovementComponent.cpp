#include "OakCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

class UParticleSystemComponent;
class UOakPlayerTeleportData;

bool UOakCharacterMovementComponent::TeleportPlayer(const FVector& TargetLocation, UOakPlayerTeleportData* TeleportData) {
    return false;
}

void UOakCharacterMovementComponent::SetWantsToLadderSlide(bool bNewWantsToLadderSlide) {
}

void UOakCharacterMovementComponent::ServerTeleportPlayer_Implementation(FVector TeleportLocation, float ClientTimeStamp, uint32 PlayerTeleportID, UOakPlayerTeleportData* PlayerTeleportData) {
}
bool UOakCharacterMovementComponent::ServerTeleportPlayer_Validate(FVector TeleportLocation, float ClientTimeStamp, uint32 PlayerTeleportID, UOakPlayerTeleportData* PlayerTeleportData) {
    return true;
}

void UOakCharacterMovementComponent::ServerStopSliding_Implementation() {
}
bool UOakCharacterMovementComponent::ServerStopSliding_Validate() {
    return true;
}

void UOakCharacterMovementComponent::ServerStartSliding_Implementation() {
}
bool UOakCharacterMovementComponent::ServerStartSliding_Validate() {
    return true;
}

void UOakCharacterMovementComponent::ServerAttemptGroundSlam_Implementation(int32 Grade) {
}
bool UOakCharacterMovementComponent::ServerAttemptGroundSlam_Validate(int32 Grade) {
    return true;
}

void UOakCharacterMovementComponent::OnSlidingImpactParticleSystemFinished(UParticleSystemComponent* PSC) {
}

void UOakCharacterMovementComponent::OnRep_CurrentJumpType() {
}

void UOakCharacterMovementComponent::OnRep_bRepInDelayedFall() {
}

void UOakCharacterMovementComponent::OnRep_bIsSprinting() {
}

void UOakCharacterMovementComponent::NotifyMantleStarted() {
}

void UOakCharacterMovementComponent::NotifyMantleFinished() {
}

bool UOakCharacterMovementComponent::IsSlidingDownLadder() const {
    return false;
}

bool UOakCharacterMovementComponent::IsPerformingUpwardLadderJump() const {
    return false;
}

void UOakCharacterMovementComponent::ClientAckPlayerTeleport_Implementation(float ClientTimeStamp, uint32 PlayerTeleportID) {
}

void UOakCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakCharacterMovementComponent, MaxSprintSpeed);
    DOREPLIFETIME(UOakCharacterMovementComponent, MaxInjuredSprintSpeed);
    DOREPLIFETIME(UOakCharacterMovementComponent, MaxWalkSpeedInjured);
    DOREPLIFETIME(UOakCharacterMovementComponent, MaxWalkSpeedInjuredBeingRevived);
    DOREPLIFETIME(UOakCharacterMovementComponent, GroundSlamHeightScalar);
    DOREPLIFETIME(UOakCharacterMovementComponent, bIsSprinting);
    DOREPLIFETIME(UOakCharacterMovementComponent, bIsSlidingDownLadder);
    DOREPLIFETIME(UOakCharacterMovementComponent, CurrentJumpType);
    DOREPLIFETIME(UOakCharacterMovementComponent, bRepInDelayedFall);
}

UOakCharacterMovementComponent::UOakCharacterMovementComponent() {
    this->PushAwayFromPlayersMaxAccelBoost = 2048.00f;
    this->PushAwayFromPlayersRadiusThreshold = 130.00f;
    this->MaxInheritedSpeedFromSimulatingPhysicsMovementBase = 0.00f;
    this->bUseJumpGoals = false;
    this->SprintingJumpMaxSpeedPct = 0.90f;
    this->SprintingJumpHorizontalSpeedScale = 1.00f;
    this->JumpHorizontalSpeedScaleWhenNoAcceleration = 1.00f;
    this->FallDelayTime = 0.00f;
    this->FallDelayGravityScale = 0.50f;
    this->JumpQueueTime = 0.00f;
    this->MaxSprintAngle = 45.00f;
    this->SprintAnalogInputThreshold = 0.00f;
    this->bIgnoreAnalogInputWhenSprinting = false;
    this->bMantlingCancelsSprint = false;
    this->MaxLadderSlideDownSpeed = 450.00f;
    this->LadderSlideAcceleration = 2048.00f;
    this->LadderSlideBrakingDeceleration = 2048.00f;
    this->LadderSlideLandingAnimation = NULL;
    this->CryoPenaltyCurve = NULL;
    this->SlidingData = NULL;
    this->SlidingImpactTraceDelay = 0.10f;
    this->WheelRollingImpactData = NULL;
    this->WheelRollingAudioStart = NULL;
    this->WheelRollingAudioStop = NULL;
    this->StartedRollingSound = NULL;
    this->StoppedRollingSound = NULL;
    this->RollingSpeedParticleParameterName = TEXT("Speed");
    this->GroundSlamData = NULL;
    this->bWantsToSprint = false;
    this->bWantsToStartSprinting = false;
    this->bIsSprinting = false;
    this->bWantsToSlide = false;
    this->bWantsToLadderSlide = false;
    this->bIsSlidingDownLadder = false;
    this->GroundSlamGradeIndex = -1;
    this->MaxSpeedScaleToUseBrakingBoost = 1.50f;
    this->BrakingFrictionBoostWhenExceedingMaxSpeed = 0.00f;
    this->BrakingDecelerationWalkingBoostWhenExceedingMaxSpeed = 0.00f;
    this->BrakingDecelerationFallingBoostWhenExceedingMaxSpeed = 0.00f;
    this->OakLadderInteractData = NULL;
    this->OakCharacterOwner = NULL;
    this->CoverUserComponent = NULL;
    this->StatusEffectComponent = NULL;
    this->FFYLComponent = NULL;
    this->OakAnimInstance = NULL;
    this->bDeceleratingAfterLadderSlide = false;
    this->JumpGoalGravityScale = -1.00f;
    this->CurrentJumpType = EJumpType::None;
    this->bPendingSlideJump = false;
    this->bRepInDelayedFall = false;
    this->CurrentSlidingVolume = NULL;
    this->OldMovementBase = NULL;
}


#include "GbxCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class UControlledMove;
class USceneComponent;
class UPrimitiveComponent;
class UMantleData;
class USkeletalMeshComponent;

void UGbxCharacterMovementComponent::StopRotateTo() {
}

void UGbxCharacterMovementComponent::StopMoveTo(bool bForce, bool bReplicateStop) {
}

void UGbxCharacterMovementComponent::StopControlledMove(TSubclassOf<UControlledMove> ControlledMove, bool bZeroVelocity, bool bInterrupted) {
}

void UGbxCharacterMovementComponent::StartRotateTo(const FCharacterRotateToCommand& RotateToCommand) {
}

void UGbxCharacterMovementComponent::StartMoveTo(const FCharacterMoveToCommand& MoveToCommand) {
}

bool UGbxCharacterMovementComponent::StartControlledMove(TSubclassOf<UControlledMove> ControlledMove, AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, AActor* TargetActor, FVector TargetLocation) {
    return false;
}

void UGbxCharacterMovementComponent::SetPendingRawInputVector(FVector NewInputVector) {
}

void UGbxCharacterMovementComponent::SetNoneWithRootMotionMode(bool bAnimationWalking, const FName Reason) {
}

void UGbxCharacterMovementComponent::SetFacingTarget(const FFacingInfo& FacingTarget, EFacingChannel Channel) {
}

void UGbxCharacterMovementComponent::SetAnimationBasedTurning(const bool bEnable) {
}

void UGbxCharacterMovementComponent::ServerStopMoveTo_Implementation() {
}
bool UGbxCharacterMovementComponent::ServerStopMoveTo_Validate() {
    return true;
}

void UGbxCharacterMovementComponent::ServerStartMoveTo_Implementation(const FCharacterMoveToCommand& MoveToCommand) {
}
bool UGbxCharacterMovementComponent::ServerStartMoveTo_Validate(const FCharacterMoveToCommand& MoveToCommand) {
    return true;
}

void UGbxCharacterMovementComponent::ServerAttemptMantle_Implementation(const FMantleAttemptInfo& ClientData, float Timestamp) {
}
bool UGbxCharacterMovementComponent::ServerAttemptMantle_Validate(const FMantleAttemptInfo& ClientData, float Timestamp) {
    return true;
}

void UGbxCharacterMovementComponent::OnStanceChanged(FStanceChangedEventArgs Args) {
}

void UGbxCharacterMovementComponent::OnRep_ControlledMove() {
}

void UGbxCharacterMovementComponent::OnNotifyTurnExit() {
}

void UGbxCharacterMovementComponent::OnNotifyTurnEnter() {
}

void UGbxCharacterMovementComponent::OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UGbxCharacterMovementComponent::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FFacingInfo UGbxCharacterMovementComponent::MakeFacingInfoRotation(FRotator Rotation) {
    return FFacingInfo{};
}

FFacingInfo UGbxCharacterMovementComponent::MakeFacingInfoNone() {
    return FFacingInfo{};
}

FFacingInfo UGbxCharacterMovementComponent::MakeFacingInfoLocation(FVector Location) {
    return FFacingInfo{};
}

FFacingInfo UGbxCharacterMovementComponent::MakeFacingInfoDirection(FVector Direction) {
    return FFacingInfo{};
}

FFacingInfo UGbxCharacterMovementComponent::MakeFacingInfoComponent(USceneComponent* Component) {
    return FFacingInfo{};
}

FFacingInfo UGbxCharacterMovementComponent::MakeFacingInfoActorEyes(AActor* Actor) {
    return FFacingInfo{};
}

FFacingInfo UGbxCharacterMovementComponent::MakeFacingInfoActor(AActor* Actor) {
    return FFacingInfo{};
}

void UGbxCharacterMovementComponent::LeaveNoneWithRootMotionMode(bool bApplyDefault) {
}

bool UGbxCharacterMovementComponent::IsPerformingSpecificControlledMove(TSubclassOf<UControlledMove> ControlledMove) const {
    return false;
}

bool UGbxCharacterMovementComponent::IsPerformingControlledMove() const {
    return false;
}

bool UGbxCharacterMovementComponent::IsMovingOnLadder() const {
    return false;
}

bool UGbxCharacterMovementComponent::IsMantlingAllowed() const {
    return false;
}

bool UGbxCharacterMovementComponent::IsMantling() const {
    return false;
}

bool UGbxCharacterMovementComponent::IsInNoneWithRootMotionMode() const {
    return false;
}

bool UGbxCharacterMovementComponent::IsHandIkEnabled() const {
    return false;
}

bool UGbxCharacterMovementComponent::IsFootIkTracingEnabled() const {
    return false;
}

bool UGbxCharacterMovementComponent::IsFootIkEnabled() const {
    return false;
}

bool UGbxCharacterMovementComponent::IsFacingTargetBP(float ThresholdDegrees, EFacingChannel Channel) const {
    return false;
}

float UGbxCharacterMovementComponent::GetMaxAllowedAimOffset() const {
    return 0.0f;
}

UMantleData* UGbxCharacterMovementComponent::GetMantleData() const {
    return NULL;
}

FRotator UGbxCharacterMovementComponent::GetDesiredFacingRotation(EFacingChannel Channel) const {
    return FRotator{};
}

FVector UGbxCharacterMovementComponent::GetDesiredFacingLocation(EFacingChannel Channel) const {
    return FVector{};
}

FRotator UGbxCharacterMovementComponent::GetCurrentFacingRotation(EFacingChannel Channel) const {
    return FRotator{};
}

FVector UGbxCharacterMovementComponent::GetCurrentFacingOrigin(EFacingChannel Channel) const {
    return FVector{};
}

FVector UGbxCharacterMovementComponent::GetCurrentFacingLocation(EFacingChannel Channel) const {
    return FVector{};
}

void UGbxCharacterMovementComponent::GbxSetAnimInstanceClass(USkeletalMeshComponent* SkelMeshComponent, UClass* NewClass) {
}

void UGbxCharacterMovementComponent::ControlledServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags, uint32 CMDir) {
}
bool UGbxCharacterMovementComponent::ControlledServerMoveOld_Validate(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags, uint32 CMDir) {
    return true;
}

void UGbxCharacterMovementComponent::ControlledServerMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, uint32 CMDir0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode, uint32 CMDir, uint16 ClientBodyYaw) {
}
bool UGbxCharacterMovementComponent::ControlledServerMoveDual_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, uint32 CMDir0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode, uint32 CMDir, uint16 ClientBodyYaw) {
    return true;
}

void UGbxCharacterMovementComponent::ControlledServerMove_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode, uint32 CMDir, uint16 ClientBodyYaw) {
}
bool UGbxCharacterMovementComponent::ControlledServerMove_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode, uint32 CMDir, uint16 ClientBodyYaw) {
    return true;
}

void UGbxCharacterMovementComponent::ClientAdjustControlledMovePosition_Implementation(float Timestamp, FControlledMoveNetCorrection ServerCMData, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode) {
}

bool UGbxCharacterMovementComponent::CanStartPassiveMantle() const {
    return false;
}

bool UGbxCharacterMovementComponent::CanStartMantle() const {
    return false;
}

void UGbxCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxCharacterMovementComponent, MaxGroundSpeedScale);
    DOREPLIFETIME(UGbxCharacterMovementComponent, MaxLadderAscendSpeed);
    DOREPLIFETIME(UGbxCharacterMovementComponent, MaxLadderDescendSpeed);
    DOREPLIFETIME(UGbxCharacterMovementComponent, ReplicatedLadderState);
    DOREPLIFETIME(UGbxCharacterMovementComponent, RotationRateYaw);
    DOREPLIFETIME(UGbxCharacterMovementComponent, IdleRotationRateYaw);
    DOREPLIFETIME(UGbxCharacterMovementComponent, MaxAllowedAimOffset);
    DOREPLIFETIME(UGbxCharacterMovementComponent, ControlledMoveReplicationData);
    DOREPLIFETIME(UGbxCharacterMovementComponent, ReplicatedMantleState);
    DOREPLIFETIME(UGbxCharacterMovementComponent, NavAnimState);
    DOREPLIFETIME(UGbxCharacterMovementComponent, NavClientData);
    DOREPLIFETIME(UGbxCharacterMovementComponent, bPretendToBeWalking);
}

UGbxCharacterMovementComponent::UGbxCharacterMovementComponent() {
    this->GbxCharacterOwner = NULL;
    this->GbxAnimInstance = NULL;
    this->AnimInstance = NULL;
    this->FallingFloorUpdateInterval = 0.10f;
    this->FallingFloorTraceDistance = 0.00f;
    this->bCanCrouchInAir = false;
    this->bCanClimbLadders = true;
    this->bCenterOnLadder = false;
    this->bSlideAlongLadderCollision = false;
    this->bBlockMomentumAdd = false;
    this->LadderFriction = 8.00f;
    this->MaxLadderForwardSpeed = 600.00f;
    this->MaxLadderReverseSpeed = 600.00f;
    this->LadderBrakingDeceleration = 2048.00f;
    this->LadderInterpSpeed = 350.00f;
    this->LadderJumpVelocity = 50.00f;
    this->EnterBottomAnimation = NULL;
    this->ExitBottomAnimation = NULL;
    this->EnterTopAnimation = NULL;
    this->ExitTopAnimation = NULL;
    this->LadderInteractData = NULL;
    this->StanceComponent = NULL;
    this->ActionComponent = NULL;
    this->bClientWasOnLadder = false;
    this->LadderJumpTime = -1000.00f;
    this->bAlreadyCenteredOnLadder = false;
    this->bWantsToBeOnLadder = false;
    this->bUseIdleRotationRateYaw = false;
    this->MinTurnAimOffset = 45.00f;
    this->MinBodyFacingThreshold = 10.00f;
    this->MaxPredictedTurnDegrees = 45.00f;
    this->bUseMaxPredictedTurnDegrees = false;
    this->MaxPredictedTurnTime = 0.50f;
    this->bUseMaxPredictedTurnTime = true;
    this->bAlwaysFaceActorsCurrentLocation = false;
    this->LookAtAngleClamp = 135.00f;
    this->LookRotationRate = 360.00f;
    this->FastLookRotationRate = 360.00f;
    this->bUseFastLookRotationRate = false;
    this->HeadLookPercent = 1.00f;
    this->bUseHeadLookPercentDistance = false;
    this->HeadLookPercentInterpSpeed = 1.00f;
    this->bUseLookAtParentBoneForAngleClamp = false;
    this->LookAtBlinkAngle = 10.00f;
    this->bUseLookAtBlinkAngle = false;
    this->bUseLookAtHeadTargetOffset = false;
    this->bUseLookAtEyeTargetOffset = false;
    this->bUseLookAtTargetClearDelay = false;
    this->LookAtRate = 5.00f;
    this->FootIkEnabledInterpolationSpeed = 1.00f;
    this->SlopeAdaptationOverrideInterpSpeed = 5.00f;
    this->MantleData = NULL;
    this->NavComponent = NULL;
    this->NavMeshProjectionDistance = 5.00f;
    this->AirFriction = 8.00f;
    this->NavMeshProjectionTraceDistance = 300.00f;
    this->bPretendToBeWalking = false;
}


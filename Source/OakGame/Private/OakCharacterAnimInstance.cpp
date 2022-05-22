#include "OakCharacterAnimInstance.h"

class AActor;
class AWeapon;
class UPrimitiveComponent;
class UPawnAttachSlotComponent;

void UOakCharacterAnimInstance::VehicleHitReaction(FVector2D ImpactTrehsold, FVector NormalImpulse, const FHitResult& Hit) {
}

void UOakCharacterAnimInstance::SetHasWeaponPoses(bool bHasLeft, bool bHasRight) {
}

void UOakCharacterAnimInstance::OnWeaponModeChanged_Native() {
}


void UOakCharacterAnimInstance::OnWeaponChanged_Native(AWeapon* NewWeapon, AWeapon* PrevWeapon) {
}


void UOakCharacterAnimInstance::OnVehicleComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UOakCharacterAnimInstance::OnExitVehicleStarted_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UOakCharacterAnimInstance::OnExitVehicleFinished_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UOakCharacterAnimInstance::OnExitTurretStarted_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UOakCharacterAnimInstance::OnExitTurretFinished_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UOakCharacterAnimInstance::OnEnterVehicleStarted_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UOakCharacterAnimInstance::OnEnterTurretStarted_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UOakCharacterAnimInstance::OnChangeVehicleSeat_Native(const UPawnAttachSlotComponent* FromSeat, const UPawnAttachSlotComponent* ToSeat) {
}


UOakCharacterAnimInstance::UOakCharacterAnimInstance() {
    this->IsMantling = false;
    this->IsSprinting = false;
    this->bCanUseWeaponWhileSprinting = false;
    this->IsSliding = false;
    this->IsUsingLadder = false;
    this->IsLadderSliding = false;
    this->IsPerformingUpdwardLadderJump = false;
    this->IsUsingWeapon = false;
    this->IsReloading = false;
    this->IsZoomed = false;
    this->ZoomDuration = 0.00f;
    this->bShouldLowerWeapon = false;
    this->bDisableIdleToSprintTransition = false;
    this->HandToWeaponAlpha = 1.00f;
    this->DesiredCoverState = ECoverUserState::NotInCover;
    this->CoverStyle = NULL;
    this->CoverView = NULL;
    this->IsInCover = false;
    this->WantsToLeaveCover = false;
    this->IsCoverFlanked = false;
    this->IsInCoverFireIdle = false;
    this->IsInCoverFireIdleAndWantsToLeaveCover = false;
    this->ClothWeightFromCurve = 1.00f;
    this->FacialAnimWeight = 0.00f;
    this->bCanUpdateClothBlendWeight = false;
    this->AnimStyle = 0;
    this->CurrentVehicle = NULL;
    this->CurrentTurret = NULL;
    this->VehicleSeatComponent = NULL;
    this->VehicleHoverComponent = NULL;
    this->InVehicle = false;
    this->DisableAlphaInVehicle = 1.00f;
    this->InMannedTurret = false;
    this->IsSeatedTurret = false;
    this->InRollerCoaster = false;
    this->SeatIndex = -1;
    this->VehicleThrottleInput = 0.00f;
    this->VehicleSpeed = 0.00f;
    this->VehicleSteerAngle = 0.00f;
    this->VehicleSteerAngleExplicitTime = 0.00f;
    this->VehicleIsInReverse = false;
    this->bIsVehicleFlipped = false;
    this->VehicleAcceleration = 0.00f;
    this->VehicleTurningDelta = 0.00f;
    this->VehicleDampedAccelInterpSpeed = 2.00f;
    this->VehicleSmoothedZVelocity = 0.00f;
    this->VehicleSlotAlpha = 0.00f;
    this->FrontBackWorldAdditive = 0.00f;
    this->LeftRightWorldAdditive = 0.00f;
    this->DriverAdditiveForwardAccelerationTreshold = 2400.00f;
    this->DriverAdditiveForwardInterpSpeed = 0.30f;
    this->DriverAdditiveLateralAccelerationTreshold = 250.00f;
    this->DriverAdditiveLateralInterpSpeed = 0.10f;
    this->DriverAdditiveUpwardAccelerationTreshold = 1500.00f;
    this->DriverAdditiveUpwardInterpSpeed = 15.00f;
    this->VehicleArchetypeEnum = EVehicleArchetype::Null;
    this->NegativeSpeedToPlayTurnWheelBackward = 20.00f;
    this->VehicleSlotName = TEXT("VehicleSlot");
    this->AdditiveFlinchPlaying = NULL;
    this->ForwardDynamicsAlpha = 0.00f;
    this->bWheeledCharacter = false;
    this->TireRadius = 20.43f;
    this->bForceEnableHandIK = false;
}


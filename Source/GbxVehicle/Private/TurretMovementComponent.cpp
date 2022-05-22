#include "TurretMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UTurretMovementComponent::UpdateTurretControlDependency() {
}

void UTurretMovementComponent::UpdateParentInitialOffset() {
}

void UTurretMovementComponent::SetRotationInputs(float XValue, float YValue) {
}

void UTurretMovementComponent::ServerSetRotationInputs_Implementation(FVector2D InRotationInputs) {
}
bool UTurretMovementComponent::ServerSetRotationInputs_Validate(FVector2D InRotationInputs) {
    return true;
}

void UTurretMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTurretMovementComponent, RotationInputs);
    DOREPLIFETIME(UTurretMovementComponent, RemoteTurretRelativeRotation);
}

UTurretMovementComponent::UTurretMovementComponent() {
    this->MovementThresholdTolerance = 1.00f;
    this->DurationBeforeStop = 0.50f;
    this->MovementStartEvent = NULL;
    this->MovementStopEvent = NULL;
    this->MovementSpeedRTPC = NULL;
    this->TimeSinceStop = 0.00f;
    this->bReturnToZeroRotation = false;
    this->bUsePlayersView = false;
    this->bAimTowardsPlayersViewLocation = false;
    this->bEnableReturnToZeroRotationRate = false;
    this->bControlYawMovement = true;
    this->bControlPitchMovement = true;
    this->bEnableMovementCollision = true;
    this->bUpdatedComponentRequired = true;
    this->bUsePitchConstraints = false;
    this->PitchMinConstraint = 0.00f;
    this->PitchMaxConstraint = 0.00f;
    this->bUseYawConstraints = false;
    this->YawMinConstraint = 0.00f;
    this->YawMaxConstraint = 0.00f;
    this->TurretControlOwner = NULL;
}


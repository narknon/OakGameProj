#include "OakDroneProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UOakDroneProjectileMovementComponent::SetMovementTarget(AActor* NewMovementTarget) {
}

void UOakDroneProjectileMovementComponent::SetMovementMode(EOakDroneMovementMode NewMovementMode, AActor* NewMovementTarget) {
}

void UOakDroneProjectileMovementComponent::OnRep_MovementMode() {
}

void UOakDroneProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, MovementMode);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, FacingMode);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, MovementTarget);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, FacingTarget);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, DroneSpeed);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, HoverSpeed);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, DroneAccelerationTime);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, HoverAltitude);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, HoverAltitudeThreshold);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, HoverRadius);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, HoverRadiusMin);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, HoverAngle);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, bUseHoverAngle);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, StopHomingDistance);
    DOREPLIFETIME(UOakDroneProjectileMovementComponent, HoverQueryLocation);
}

UOakDroneProjectileMovementComponent::UOakDroneProjectileMovementComponent() {
    this->Drone = NULL;
    this->MovementMode = EOakDroneMovementMode::Projectile;
    this->FacingMode = EOakDroneFacingMode::None;
    this->RotationInterpSpeed = 8.00f;
    this->bDeactiveWhenMovementTargetDies = true;
    this->bDeactivateWhenInstigatorDies = true;
    this->MovementTarget = NULL;
    this->FacingTarget = NULL;
    this->DroneSpeed = 700.00f;
    this->HoverSpeed = 50.00f;
    this->DroneAccelerationTime = 0.50f;
    this->HoverAltitude = 200.00f;
    this->HoverAltitudeThreshold = 50.00f;
    this->HoverRadius = 100.00f;
    this->HoverRadiusMin = 0.00f;
    this->bUseHoverAngle = false;
    this->StopHomingDistance = 0.00f;
    this->bUseHoverQuery = false;
}


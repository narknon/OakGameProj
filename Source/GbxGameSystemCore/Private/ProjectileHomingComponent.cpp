#include "ProjectileHomingComponent.h"
#include "Net/UnrealNetwork.h"

class UProjectileMovementComponent;

void UProjectileHomingComponent::ToggleHoming() {
}

void UProjectileHomingComponent::SetHomeIn(bool bEnabled) {
}

void UProjectileHomingComponent::SetAssociatedProjectileMovement(UProjectileMovementComponent* ProjectileMovementComponent) {
}

FVector UProjectileHomingComponent::GetHomingLocation() {
    return FVector{};
}

void UProjectileHomingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UProjectileHomingComponent, HomingTarget);
    DOREPLIFETIME(UProjectileHomingComponent, HomingTargetComponent);
    DOREPLIFETIME(UProjectileHomingComponent, HomingSocketOverride);
    DOREPLIFETIME(UProjectileHomingComponent, HomingTargetLocation);
    DOREPLIFETIME(UProjectileHomingComponent, bHomeIn);
}

UProjectileHomingComponent::UProjectileHomingComponent() {
    this->bMoveDirectlyToTarget = false;
    this->TurnSpeed = 0.00f;
    this->bChangeTurnSpeed = false;
    this->FinalTurnSpeed = 0.00f;
    this->TurnAcceleration = 0.00f;
    this->TrueTargetDistance = 0.00f;
    this->TrueTargetTime = 0.00f;
    this->OverrideHomingSpeed = 0.00f;
    this->AccelerationScale = 1.00f;
    this->HomingTarget = NULL;
    this->HomingTargetComponent = NULL;
    this->ReachDistance = 50.00f;
    this->ReachDistanceSquared = 0.00f;
    this->StopHomingDistance = 0.00f;
    this->bHomeIn = false;
    this->ProjectileMovement = NULL;
    this->Projectile = NULL;
    this->bModifyDefault = false;
}


#include "GbxProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UGbxProjectileMovementComponent::ScaleVelocity(float InScale) {
}

void UGbxProjectileMovementComponent::OnRep_InitialProjectileGravity() {
}

void UGbxProjectileMovementComponent::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGbxProjectileMovementComponent::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void UGbxProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxProjectileMovementComponent, InitialProjectileGravity);
}

UGbxProjectileMovementComponent::UGbxProjectileMovementComponent() {
    this->ProjectileAcceleration = 0.00f;
    this->MinSpeedWhenDecelerating = 0.00f;
    this->OwningProjectile = NULL;
    this->bSmoothedRotationFollowsVelocity = false;
    this->SmoothedRotationSpeed = 90.00f;
    this->bDontStopSimulatingAfterHittingAnotherProjectile = false;
    this->MaxNumBounces = 0;
    this->bBounceParallelToHitNormal = false;
    this->CurrentNumBounces = 0;
    this->bFreezeMovementAfterLastBounce = false;
    this->bCanTriggerGrenadeDodges = false;
    this->bDisablePhysicsWhenAttached = true;
    this->InitialProjectileGravity = 0.00f;
}


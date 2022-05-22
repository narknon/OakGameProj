#include "GrenadeHomingComponent.h"

class AActor;

void UGrenadeHomingComponent::ResetHoming() {
}

void UGrenadeHomingComponent::OnHomingTargetDestroyed(AActor* Actor) {
}

UGrenadeHomingComponent::UGrenadeHomingComponent() {
    this->OwnerGrenade = NULL;
    this->OwnerTedioreProjectile = NULL;
    this->HomingTrailTemplate = NULL;
    this->TrailRelativeScale = 1.00f;
    this->TargetLockedParameterName = TEXT("TargetLocked");
    this->TargetLockedOffValue = 0.00f;
    this->TargetLockedOnValue = 1.00f;
    this->SearchingForTargetEvent = NULL;
    this->TargetFoundEvent = NULL;
    this->HomingTrail = NULL;
    this->LastEQSTime = 0.00f;
}


#include "ProjectileAimViewPointHomingTargetComponent.h"

class AController;
class AActor;

void UProjectileAimViewPointHomingTargetComponent::SetTargetController(AController* InTargetController) {
}

void UProjectileAimViewPointHomingTargetComponent::SetTargetActor(AActor* InTargetActor) {
}

AController* UProjectileAimViewPointHomingTargetComponent::GetTargetController() const {
    return NULL;
}

FVector UProjectileAimViewPointHomingTargetComponent::GetCurrentHomingLoc() const {
    return FVector{};
}

UProjectileAimViewPointHomingTargetComponent::UProjectileAimViewPointHomingTargetComponent() {
    this->LookAheadDistance = 0.00f;
    this->HomingComponent = NULL;
    this->TargetController = NULL;
}


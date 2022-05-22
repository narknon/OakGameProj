#include "LowGravHoveringComponent.h"

class AActor;

void ULowGravHoveringComponent::OnHit(AActor* OwnerActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

ULowGravHoveringComponent::ULowGravHoveringComponent() {
    this->TotalHoveringTime = 4.00f;
    this->DisplacementHeightOnHit = 30.00f;
    this->TotalOscillation = 3.50f;
}


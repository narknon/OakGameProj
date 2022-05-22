#include "CarnivoraDamageZoneComponent.h"

class UPrimitiveComponent;
class AActor;

void UCarnivoraDamageZoneComponent::OnActorComponentHit(UPrimitiveComponent* HitComp, AActor* Other, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& SweepResult) {
}

UCarnivoraDamageZoneComponent::UCarnivoraDamageZoneComponent() {
    this->OrgAttachParent = NULL;
    this->VehicleImpulseFactor = 1.50f;
    this->CharacterImpulseFactor = 1.25f;
    this->DamageCooldownTime = 1.00f;
}


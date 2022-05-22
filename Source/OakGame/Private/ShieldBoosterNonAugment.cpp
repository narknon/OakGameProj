#include "ShieldBoosterNonAugment.h"
#include "Components/StaticMeshComponent.h"

class AOakCharacter;

void AShieldBoosterNonAugment::OnShieldChargePickedUp_Implementation(AOakCharacter* PickupInstigator) {
}

AShieldBoosterNonAugment::AShieldBoosterNonAugment() {
    this->ManagedActorDef = NULL;
    this->ModifierValue = 0.00f;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->PickupAudioEvent = NULL;
    this->CollisionAudioEvent = NULL;
    this->ScreenEffect = NULL;
}


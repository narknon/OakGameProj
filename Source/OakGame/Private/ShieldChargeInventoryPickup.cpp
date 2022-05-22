#include "ShieldChargeInventoryPickup.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

class AOakCharacter;

void AShieldChargeInventoryPickup::OnShieldChargePickedUp_Implementation(AOakCharacter* PickupInstigator) {
}

void AShieldChargeInventoryPickup::OnRep_ContextAugment() {
}

void AShieldChargeInventoryPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShieldChargeInventoryPickup, ContextAugment);
}

AShieldChargeInventoryPickup::AShieldChargeInventoryPickup() {
    this->ManagedActorDef = NULL;
    this->ModifierValue = 0.00f;
    this->AttributeToModify = NULL;
    this->ModifierType = EGbxAttributeModifierType::Scale;
    this->ModifierDuration = 0.00f;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->PickupAudioEvent = NULL;
    this->CollisionAudioEvent = NULL;
    this->ContextAugment = NULL;
    this->ScreenEffect = NULL;
}


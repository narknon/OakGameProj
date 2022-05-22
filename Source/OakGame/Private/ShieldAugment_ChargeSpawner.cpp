#include "ShieldAugment_ChargeSpawner.h"

UShieldAugment_ChargeSpawner::UShieldAugment_ChargeSpawner() {
    this->SpawnCooldown = 2.00f;
    this->AttributeToModify = NULL;
    this->ModifierType = EGbxAttributeModifierType::Scale;
    this->ModifierDuration = 0.00f;
    this->PickupMesh = NULL;
    this->MeshScalar = 1.00f;
    this->SpawnAudioEvent = NULL;
    this->PickupAudioEvent = NULL;
    this->ItemPoolList = NULL;
    this->SpawnPattern = NULL;
}


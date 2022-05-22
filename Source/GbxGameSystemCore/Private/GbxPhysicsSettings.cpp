#include "GbxPhysicsSettings.h"

class USkeletalMeshComponent;

void UGbxPhysicsSettings::StaticSetRigidBodySimulationInteractability(USkeletalMeshComponent* Comp, bool bAesthetic, FName BodyName) {
}

UGbxPhysicsSettings::UGbxPhysicsSettings() {
    this->LowDamageThreshold = 2000.00f;
    this->MediumDamageThreshold = 4000.00f;
    this->HighDamageThreshold = 6000.00f;
    this->RagdollWeaponForceFeatherPercent = 0.00f;
}


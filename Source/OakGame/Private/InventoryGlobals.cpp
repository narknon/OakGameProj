#include "InventoryGlobals.h"

UInventoryGlobals::UInventoryGlobals() {
    this->DefaultDamageType = NULL;
    this->GrenadeDamageData = NULL;
    this->GrenadeModSlot = NULL;
    this->DefaultGrenadeExplosionData = NULL;
    this->GrenadeCollisionChannel = ECC_WorldStatic;
    this->ThrownGrenadeClass = NULL;
    this->GrenadeFuseWarningEmitter = NULL;
    this->WeaponSlot1 = NULL;
    this->WeaponSlot2 = NULL;
    this->WeaponSlot3 = NULL;
    this->WeaponSlot4 = NULL;
    this->ShieldSlot = NULL;
    this->ClassItemSlot = NULL;
    this->ArtifactSlot = NULL;
    this->CustomWeaponSightTable = NULL;
    this->ShieldSkeletalMesh = NULL;
    this->ShieldResource = NULL;
    this->ShieldDamageAttribute = NULL;
    this->ShieldBreakFeedback = NULL;
    this->VendingMachineMarkupAttribute = NULL;
    this->PartReRollCurrency = NULL;
}


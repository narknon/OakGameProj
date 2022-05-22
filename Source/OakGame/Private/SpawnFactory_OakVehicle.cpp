#include "SpawnFactory_OakVehicle.h"

USpawnFactory_OakVehicle::USpawnFactory_OakVehicle() {
    this->bDigistructOnSpawn = false;
    this->bAllowScanningOnCAR = true;
    this->bCannotWorldTravel = false;
    this->InventoryBalanceData = NULL;
    this->VehicleActorClass = NULL;
    this->bForceDontDespawnWhenNoOccupant = false;
    this->bForceKeepAssociatedToSpawner = false;
    this->UINameOverride = NULL;
}


#include "SpawnFactory_OakVehicleBuilder.h"

USpawnFactory_OakVehicleBuilder::USpawnFactory_OakVehicleBuilder() {
    this->VehicleClass = NULL;
    this->bShowArchetypePartOnly = true;
    this->PartListBalanceData = NULL;
    this->PartSetData = NULL;
    this->DefaultSpawnOptions = NULL;
    this->bRandomizePassengerCount = false;
    this->bWeightedPassengersNum = false;
    this->PartTypeEnum = NULL;
    this->CustomVehicleInventoryPartSetData = NULL;
    this->CustomInventoryData = NULL;
    this->CustomVehicleInventoryBalanceData = NULL;
}


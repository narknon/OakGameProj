#include "VendingMachinePhysicalShelf.h"

FVendingMachinePhysicalShelf::FVendingMachinePhysicalShelf() {
    this->ShelfMeshComponent = NULL;
    this->ClickCollisionComponent = NULL;
    this->ItemScoreParticleComponent = NULL;
    this->SoldOutParticleComponent = NULL;
    this->MaterialInstance = NULL;
}


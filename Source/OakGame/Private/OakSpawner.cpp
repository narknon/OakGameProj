#include "OakSpawner.h"
#include "TerritoryComponent.h"

class AActor;

void AOakSpawner::SetTerritoryActor(AActor* TerritoryActor) {
}

void AOakSpawner::SetTerritory(UTerritoryComponent* Territory) {
}

void AOakSpawner::ResetTerritoryToDefault() {
}

UTerritoryComponent* AOakSpawner::GetTerritory() const {
    return NULL;
}

AOakSpawner::AOakSpawner() {
    this->RegionComponent = NULL;
    this->TerritoryOverrideActor = NULL;
    this->TerritoryComponent = CreateDefaultSubobject<UTerritoryComponent>(TEXT("TerritoryComponent"));
    this->CurrentTerritory = CreateDefaultSubobject<UTerritoryComponent>(TEXT("TerritoryComponent"));
}


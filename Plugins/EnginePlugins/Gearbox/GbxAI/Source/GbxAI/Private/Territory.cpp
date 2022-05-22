#include "Territory.h"
#include "TerritoryComponent.h"

UTerritoryComponent* ATerritory::GetTerritoryComponent() const {
    return NULL;
}

ATerritory::ATerritory() {
    this->TerritoryComponent = CreateDefaultSubobject<UTerritoryComponent>(TEXT("TerritoryComponent"));
}


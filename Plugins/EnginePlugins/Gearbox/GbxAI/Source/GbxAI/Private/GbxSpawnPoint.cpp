#include "GbxSpawnPoint.h"
#include "SpawnNodeComponent.h"

class USpawnPointComponent;
class USpawnOptionData;

bool AGbxSpawnPoint::HasNavNearSpawnPointFor(USpawnPointComponent* SpawnPointComp, USpawnOptionData* SpawnOptions) {
    return false;
}

AGbxSpawnPoint::AGbxSpawnPoint() {
    this->SpawnNodeComponent = CreateDefaultSubobject<USpawnNodeComponent>(TEXT("SpawnNodeComponent"));
}


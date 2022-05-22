#include "GbxSpawner.h"
#include "GameplayTasksComponent.h"
#include "BalanceStateComponent.h"
#include "GbxSpawnerComponent.h"
#include "SpawnNodeComponent.h"

class UAINodeComponent;
class UAIGroupState;

UGameplayTasksComponent* AGbxSpawner::GetGameplayTasksComponent() const {
    return NULL;
}

UAINodeComponent* AGbxSpawner::GetAINodeComponent() const {
    return NULL;
}

UAIGroupState* AGbxSpawner::GetAIGroupState() const {
    return NULL;
}

bool AGbxSpawner::DEPRECATED_IsThreatened() const {
    return false;
}

AGbxSpawner::AGbxSpawner() {
    this->GbxSpawnerComponent = CreateDefaultSubobject<UGbxSpawnerComponent>(TEXT("SpawnerComponent"));
    this->SpawnNodeComponent = CreateDefaultSubobject<USpawnNodeComponent>(TEXT("SpawnNodeComponent"));
    this->BalanceStateComponent = CreateDefaultSubobject<UBalanceStateComponent>(TEXT("DefaultBalanceStateComponent"));
    this->GameplayTasksComponent = CreateDefaultSubobject<UGameplayTasksComponent>(TEXT("GameplayTasksComponent"));
}


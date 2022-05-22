#include "GbxQueryManager.h"

class AActor;

void UGbxQueryManager::NotifyAIHotSpotListChangedFor(AActor* OwnerActor) {
}

UGbxQueryManager::UGbxQueryManager() {
    this->MaxActiveQueries = 3;
    this->World = NULL;
    this->EnvQueryManager = NULL;
}


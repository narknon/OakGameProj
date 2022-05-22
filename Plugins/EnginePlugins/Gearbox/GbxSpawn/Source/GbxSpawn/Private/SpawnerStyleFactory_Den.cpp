#include "SpawnerStyleFactory_Den.h"

bool USpawnerStyleFactory_Den::IsFactoryClassAllowed(const UClass* FactoryClass) const {
    return false;
}

USpawnerStyleFactory_Den::USpawnerStyleFactory_Den() {
    this->SpawnFactory = NULL;
    this->AliveLimitType = ESpawnLimitType::None;
    this->InternalSpawnOptions = NULL;
}


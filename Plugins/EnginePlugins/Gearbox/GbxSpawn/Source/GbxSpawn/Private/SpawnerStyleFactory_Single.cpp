#include "SpawnerStyleFactory_Single.h"

bool USpawnerStyleFactory_Single::IsFactoryClassAllowed(const UClass* FactoryClass) const {
    return false;
}

USpawnerStyleFactory_Single::USpawnerStyleFactory_Single() {
    this->SpawnFactory = NULL;
    this->AliveLimitType = ESpawnLimitType::None;
    this->InternalSpawnOptions = NULL;
}


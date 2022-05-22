#include "SpawnerStyleFactory_Bunch.h"

bool USpawnerStyleFactory_Bunch::IsFactoryClassAllowed(const UClass* FactoryClass) const {
    return false;
}

USpawnerStyleFactory_Bunch::USpawnerStyleFactory_Bunch() {
    this->SpawnFactory = NULL;
    this->AliveLimitType = ESpawnLimitType::None;
    this->InternalSpawnOptions = NULL;
}


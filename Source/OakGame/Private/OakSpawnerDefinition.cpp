#include "OakSpawnerDefinition.h"

class AOakSpawner;
class UObject;
class AActor;
class USpawnerComponent;
class UOakSpawnerDefinition;
class USpawnOptionData;

AOakSpawner* UOakSpawnerDefinition::SpawnOakSpawnerFromDefinitionUsingTransforms(UObject* WorldContextObject, AActor* Owner, USpawnerComponent* SourceSpawnerComponent, UOakSpawnerDefinition* Definition, USpawnOptionData* SpawnOption, const FTransform& Transform, const TArray<FTransform>& SpawnTransforms) {
    return NULL;
}

AOakSpawner* UOakSpawnerDefinition::SpawnOakSpawnerFromDefinition(UObject* WorldContextObject, AActor* Owner, USpawnerComponent* SourceSpawnerComponent, UOakSpawnerDefinition* Definition, USpawnOptionData* SpawnOption, const FTransform& Transform, const TArray<FVector>& SpawnPoints) {
    return NULL;
}

UOakSpawnerDefinition::UOakSpawnerDefinition() {
    this->SpawnerStyle = NULL;
    this->SpecialEffect = NULL;
}


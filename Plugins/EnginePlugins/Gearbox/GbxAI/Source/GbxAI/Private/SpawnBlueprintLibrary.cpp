#include "SpawnBlueprintLibrary.h"

class AActor;
class ASpawner;
class USpawnOptionData;
class USpawnerStyle;

void USpawnBlueprintLibrary::SetSpawnOptions(AActor* SpawnerActor, USpawnOptionData* SpawnOptions) {
}

ASpawner* USpawnBlueprintLibrary::GenerateSpawnerByRadius(AActor* Instigator, USpawnerStyle* Style, float Radius, TEnumAsByte<ETeamAttitude::Type> MinRequiredAttitude) {
    return NULL;
}

ASpawner* USpawnBlueprintLibrary::GenerateSpawnerByOwningSpawner(AActor* Instigator, USpawnerStyle* Style) {
    return NULL;
}

USpawnBlueprintLibrary::USpawnBlueprintLibrary() {
}


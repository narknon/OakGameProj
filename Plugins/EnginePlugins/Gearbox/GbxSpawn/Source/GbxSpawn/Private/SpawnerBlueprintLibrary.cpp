#include "SpawnerBlueprintLibrary.h"

class USpawnPointComponent;
class UObject;
class AActor;
class USpawnFactory;
class USpawnOptionData;
class USpawnerComponent;

void USpawnerBlueprintLibrary::SuspendSpawnedActors(UObject* WorldContextObject) {
}

AActor* USpawnerBlueprintLibrary::SpawnActorWithSpawnOptionsTransform(AActor* Context, USpawnOptionData* SpawnOptions, FTransform SpawnTransform) {
    return NULL;
}

int32 USpawnerBlueprintLibrary::SpawnActorWithSpawnOptionsAsync(UObject* WorldContext, FSpawnManagerAsyncRequest Request) {
    return 0;
}

AActor* USpawnerBlueprintLibrary::SpawnActorWithSpawnOptions(AActor* Context, USpawnOptionData* SpawnOptions, USpawnPointComponent* SpawnPointComponent) {
    return NULL;
}

AActor* USpawnerBlueprintLibrary::SpawnActorWithSpawner(AActor* Context, const USpawnFactory* Factory, USpawnPointComponent* SpawnPointComponent, USpawnerComponent* SpawnerComponent, AActor* Owner) {
    return NULL;
}

void USpawnerBlueprintLibrary::SetMaxSpawnCost(UObject* WorldContextObject, int32 NewMaxSpawnCost) {
}

void USpawnerBlueprintLibrary::RestoreSuspendedActors(UObject* WorldContextObject) {
}

void USpawnerBlueprintLibrary::RemoveActorFromSpawnSystem(AActor* Actor) {
}

void USpawnerBlueprintLibrary::CancelSpawnActorWithOptionsAsyncRequest(UObject* WorldContext, int32 RequestID) {
}

USpawnerBlueprintLibrary::USpawnerBlueprintLibrary() {
}


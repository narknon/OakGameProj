#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "SpawnManagerAsyncRequest.h"
#include "SpawnerBlueprintLibrary.generated.h"

class USpawnPointComponent;
class UObject;
class AActor;
class USpawnFactory;
class USpawnOptionData;
class USpawnerComponent;

UCLASS(BlueprintType)
class GBXSPAWN_API USpawnerBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawnerBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SuspendSpawnedActors(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorWithSpawnOptionsTransform(AActor* Context, USpawnOptionData* SpawnOptions, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    static int32 SpawnActorWithSpawnOptionsAsync(UObject* WorldContext, FSpawnManagerAsyncRequest Request);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorWithSpawnOptions(AActor* Context, USpawnOptionData* SpawnOptions, USpawnPointComponent* SpawnPointComponent);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorWithSpawner(AActor* Context, const USpawnFactory* Factory, USpawnPointComponent* SpawnPointComponent, USpawnerComponent* SpawnerComponent, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxSpawnCost(UObject* WorldContextObject, int32 NewMaxSpawnCost);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreSuspendedActors(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActorFromSpawnSystem(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void CancelSpawnActorWithOptionsAsyncRequest(UObject* WorldContext, int32 RequestID);
    
};


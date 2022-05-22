#pragma once
#include "CoreMinimal.h"
#include "SpawnManagerAsyncRequestBlueprintDelegateDelegate.h"
#include "SpawnDetails.h"
#include "SpawnManagerAsyncRequest.generated.h"

class AActor;
class USpawnOptionData;
class USpawnFactory;
class USpawnPointComponent;
class USpawnerComponent;

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnManagerAsyncRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USpawnFactory* SpawnFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USpawnOptionData* SpawnOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USpawnPointComponent* SpawnPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USpawnerComponent* SpawnerComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSpawnManagerAsyncRequestBlueprintDelegate Spawned;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSpawnManagerAsyncRequestBlueprintDelegate Failed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    AActor* Owner;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSpawnDetails SpawnDetails;
    
    FSpawnManagerAsyncRequest();
};


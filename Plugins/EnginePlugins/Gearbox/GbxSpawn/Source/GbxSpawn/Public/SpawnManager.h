#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SpawnManagerAsyncRequestEntry.h"
#include "SpawnerData.h"
#include "UObject/NoExportTypes.h"
#include "SpawnManager.generated.h"

class UWorld;
class AActor;
class UGlobalSpawnDLCData;
class USpawnDLCData;
class AController;

UCLASS(DefaultConfig)
class GBXSPAWN_API USpawnManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<AActor*> AdditionalSpawnPointOverlapActors;
    
private:
    UPROPERTY(Transient)
    TArray<FSpawnManagerAsyncRequestEntry> AsyncRequests;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftClassPath SpawnManagerClassName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MaxSpawnCost;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bCanResetSpawners;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float SpawnerResetPeriod;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MaxActorsSpawnedPerFrame;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float UpdatePeriod;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 SuspendTestPeriod;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 IrrelevantPeriod;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 AlwaysRelevantDistance;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 AlwaysIrrelevantDistance;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TSoftObjectPtr<UGlobalSpawnDLCData> GlobalDLCData;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseMultiframeSpawning;
    
    UPROPERTY(Transient)
    UWorld* PrivateWorld;
    
    UPROPERTY(Transient)
    TArray<USpawnDLCData*> DLCs;
    
    UPROPERTY(Transient)
    TArray<FSpawnerData> Spawners;
    
    UPROPERTY(Transient)
    TArray<FVector> CachedPlayerLocations;
    
    UPROPERTY(Transient)
    TArray<AController*> CachedPlayers;
    
    UPROPERTY(Transient)
    AActor* SpawnedActor;
    
public:
    USpawnManager();
private:
    UFUNCTION()
    void ActorDestroyed(AActor* Actor);
    
};


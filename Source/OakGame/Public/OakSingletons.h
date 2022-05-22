#pragma once
#include "CoreMinimal.h"
#include "GbxSingletons.h"
#include "OakSingletons.generated.h"

class URegionManager;
class UDamageAsyncManager;
class UEchoManager;
class UOakVehicleManager;
class UCorpseManager;
class ARadiusDamageReplicationManager;
class UOakMinimapIconTracker;
class UOakSubtitleManager;
class USpawnLootManager;
class AClothManager;
class UDamageOverTimeManager;
class UPerPlayerActorCullingManager;
class ULevelActorPersistenceManager;
class UOakGameActivityAdapter;

UCLASS(Config=Game)
class OAKGAME_API UOakSingletons : public UGbxSingletons {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UEchoManager* EchoManager;
    
    UPROPERTY(Transient)
    UOakVehicleManager* OakVehicleManager;
    
    UPROPERTY(Transient)
    UCorpseManager* CorpseManager;
    
    UPROPERTY(Transient)
    URegionManager* RegionManager;
    
    UPROPERTY(Transient)
    UOakMinimapIconTracker* MinimapIconTracker;
    
    UPROPERTY(Transient)
    UOakSubtitleManager* SubtitleManager;
    
    UPROPERTY(Transient)
    ARadiusDamageReplicationManager* RadiusDamageReplicationManager;
    
    UPROPERTY(Transient)
    USpawnLootManager* SpawnLootManager;
    
    UPROPERTY(Transient)
    AClothManager* ClothManager;
    
    UPROPERTY(Transient)
    UDamageAsyncManager* DamageAsyncManager;
    
    UPROPERTY(Transient)
    UDamageOverTimeManager* DamageOverTimeManager;
    
    UPROPERTY(Transient)
    UPerPlayerActorCullingManager* ActorCullingManager;
    
    UPROPERTY(Transient)
    ULevelActorPersistenceManager* LevelActorPersistenceManager;
    
    UPROPERTY(Transient)
    UOakGameActivityAdapter* ActivityAdapter;
    
public:
    UOakSingletons();
};


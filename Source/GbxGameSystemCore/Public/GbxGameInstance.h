#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MenuStash.h"
#include "UObject/NoExportTypes.h"
#include "SharedPickupInventoryActor.h"
#include "GbxGameInstance.generated.h"

class UDataTable;
class UIGbxProjectileManager;
class UCinematicModeData;

UCLASS(NonTransient)
class GBXGAMESYSTEMCORE_API UGbxGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FMenuStash MenuStashes[4];
    
protected:
    UPROPERTY(Config)
    FSoftObjectPath CharacterMassPresets;
    
    UPROPERTY(Transient)
    UDataTable* CachedCharacterMassPresets;
    
    UPROPERTY(Config)
    FSoftObjectPath ForcePresets;
    
    UPROPERTY(Transient)
    UDataTable* CachedForcePresets;
    
    UPROPERTY(Config)
    FSoftObjectPath SpawnCostPresets;
    
    UPROPERTY(Transient)
    UDataTable* CachedSpawnCostPresets;
    
    UPROPERTY(Transient)
    TArray<UCinematicModeData*> CinematicModeStack;
    
    UPROPERTY(Transient)
    UCinematicModeData* CinematicMode;
    
    UPROPERTY(Transient)
    UIGbxProjectileManager* ProjectileManager;
    
    UPROPERTY(Transient)
    TArray<FSharedPickupInventoryActor> SharedPickupInventoryActors;
    
public:
    UGbxGameInstance();
    UFUNCTION(Exec)
    void DebugLoadStartupAssets();
    
};


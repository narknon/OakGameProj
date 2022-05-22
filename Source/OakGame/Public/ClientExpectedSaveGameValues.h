#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilitySaveGameData.h"
#include "ResourcePoolSavegameData.h"
#include "InventorySaveGameData.h"
#include "OakSDUSaveGameData.h"
#include "ClientExpectedSaveGameValues.generated.h"

USTRUCT(BlueprintType)
struct FClientExpectedSaveGameValues {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bWaitingForServer;
    
    UPROPERTY()
    int32 ExperiencePoints;
    
    UPROPERTY()
    TArray<FResourcePoolSavegameData> ResourcePools;
    
    UPROPERTY()
    FOakPlayerAbilitySaveGameData Abilities;
    
    UPROPERTY()
    TArray<FInventorySaveGameData> InventoryList;
    
    UPROPERTY()
    TArray<FOakSDUSaveGameData> SDUList;
    
    OAKGAME_API FClientExpectedSaveGameValues();
};


#pragma once
#include "CoreMinimal.h"
#include "MissionStarterGear.generated.h"

class UMissionObjective;
class UItemPoolData;
class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct FMissionStarterGear {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMissionObjective* Objective;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UItemPoolData> StarterGearItemPool;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryCategoryData> InventoryCategory;
    
    OAKGAME_API FMissionStarterGear();
};


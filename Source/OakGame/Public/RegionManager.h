#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionObserverInterface.h"
#include "RegionSaveData.h"
#include "RegionManager.generated.h"

class URegionManagerData;

UCLASS(DefaultConfig, Config=Game)
class OAKGAME_API URegionManager : public UObject, public IMissionObserverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, GlobalConfig)
    TSoftObjectPtr<URegionManagerData> RegionManagerDataPtr;
    
    UPROPERTY(Transient)
    URegionManagerData* MainRegionManagerData;
    
    UPROPERTY(Transient)
    TArray<FRegionSaveData> SavedRegionData;
    
public:
    URegionManager();
    
    // Fix for true pure virtual functions not being implemented
};


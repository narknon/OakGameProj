#pragma once
#include "CoreMinimal.h"
#include "BalanceStateComponent.h"
#include "RegionBalanceStateComponent.generated.h"

class URegionData;
class URegionManager;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API URegionBalanceStateComponent : public UBalanceStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bGameStageAlwaysTracksPlayerLevelAboveMinimum;
    
protected:
    UPROPERTY(Transient)
    URegionManager* RegionManager;
    
    UPROPERTY(EditAnywhere)
    URegionData* REGION;
    
public:
    URegionBalanceStateComponent();
};


#pragma once
#include "CoreMinimal.h"
#include "TravelLocationData.h"
#include "MissionLocation.h"
#include "MissionLocationData.generated.h"

class UTravelStationData;

UCLASS()
class GBXMISSION_API UMissionLocationData : public UTravelLocationData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTravelStationData> DefaultStation;
    
    UPROPERTY(EditAnywhere)
    TArray<FMissionLocation> MissionLocations;
    
public:
    UMissionLocationData();
    UFUNCTION()
    UClass* GetRequiredInterface();
    
    UFUNCTION()
    bool EnabledConditionRequiresNativeClass();
    
};


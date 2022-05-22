#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "MapIDToPlanetDataMappingData.h"
#include "DiscoveryIOData.h"
#include "GalaxySkyboxData.h"
#include "ZoneIdToMapIdMappingData.h"
#include "PlanetMapDataToPlanetIdMappingData.h"
#include "ZoneIDToMissionEventReferenceData.h"
#include "GalaxyExpansionData.generated.h"

class UGbxCondition;

UCLASS(BlueprintType)
class OAKGAME_API UGalaxyExpansionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FDiscoveryIOData> DiscoveryIOs;
    
    UPROPERTY(EditAnywhere)
    TArray<FGalaxySkyboxData> Skyboxes;
    
    UPROPERTY(EditAnywhere)
    TArray<FZoneIdToMapIdMappingData> ZoneID_to_MapID;
    
    UPROPERTY(EditAnywhere)
    TArray<FPlanetMapDataToPlanetIdMappingData> PlanetData_To_PlanetID;
    
    UPROPERTY(EditAnywhere)
    TArray<FMapIDToPlanetDataMappingData> MapID_To_PlanetData;
    
    UPROPERTY(EditAnywhere)
    TArray<FZoneIDToMissionEventReferenceData> UpdateEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FZoneIDToMissionEventReferenceData> AdvanceEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGbxCondition* WaypointEnabledCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGbxCondition* DropPodWaypointEnabledCondition;
    
public:
    UGalaxyExpansionData();
protected:
    UFUNCTION()
    UClass* GetRequiredInterface();
    
    UFUNCTION()
    bool EnabledConditionRequiresNativeClass();
    
};


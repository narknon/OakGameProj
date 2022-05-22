#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "GalaxyMapStation.generated.h"

class UPlanetData;
class UPlanetMeshData;
class AGalaxyMapStationPatch;

UCLASS()
class OAKGAME_API AGalaxyMapStation : public AAdvancedInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentPlanetData)
    UPlanetData* CurrentPlanetData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlanetMeshData* CurrentPlanetMeshData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UPlanetData* OrbitingPlanetData;
    
    UPROPERTY(Transient)
    AGalaxyMapStationPatch* GalaxyMapStationPatch;
    
    AGalaxyMapStation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPlanetData(UPlanetData* PlanetData);
    
private:
    UFUNCTION()
    void OnTravelIDsChanged();
    
    UFUNCTION()
    void OnRep_CurrentPlanetData();
    
    UFUNCTION()
    void OnPlanetMeshDataLoaded();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_PostLoadedPlanetMesh();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnPlanetSelected(UPlanetData* Planet);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnBrowsePlanet(UPlanetData* Planet);
    
    UFUNCTION(BlueprintNativeEvent)
    UPlanetData* GetPlanetDataFromZoneNameID(const uint8 ZoneNameID);
    
    UFUNCTION(BlueprintNativeEvent)
    UPlanetData* GetPlanetDataFromMapNameID(const uint8 MapNameID);
    
};


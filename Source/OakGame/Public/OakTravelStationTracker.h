#pragma once
#include "CoreMinimal.h"
#include "TravelStationTracker.h"
#include "OakTravelStationTracker.generated.h"

class AOakPlayerController;
class UPlanetData;
class UObject;
class UFastTravelStationData;

UCLASS(NonTransient)
class AOakTravelStationTracker : public ATravelStationTracker {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HostDiscoveredPlanets)
    TArray<UPlanetData*> HostDiscoveredPlanets;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_FastTravelAvailable)
    bool bFastTravelAvailable;
    
public:
    AOakTravelStationTracker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void UnlockFastTravelStation(UObject* WorldContextObject, AOakPlayerController* UnlockPlayer, UFastTravelStationData* TravelStation, bool bBypassDependencies);
    
    UFUNCTION(BlueprintCallable)
    void SetFastTravelAvailable(bool bAvailable);
    
private:
    UFUNCTION()
    void OnRep_HostDiscoveredPlanets();
    
    UFUNCTION()
    void OnRep_FastTravelAvailable();
    
    UFUNCTION()
    void OnFastTravelLockoutTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    static void LockOutFastTravelAvailable(UObject* WorldContextObject, float LockOutTime);
    
};


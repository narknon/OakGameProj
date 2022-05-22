#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActiveFastTravelData.h"
#include "TravelCountdownInfo.h"
#include "TravelStationTracker.generated.h"

class UTravelStationResurrectComponent;
class UGlobalTravelGraph;
class ULevelTravelStationComponent;
class UFastTravelStationComponent;
class UFastTravelStationData;
class UTravelStationComponentBase;
class UTravelStationData;
class APlayerController;

UCLASS(NotPlaceable, Transient)
class GBXTRAVELSTATION_API ATravelStationTracker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Replicated, Transient)
    TArray<UTravelStationResurrectComponent*> ResurrectTravelStations;
    
    UPROPERTY(Export, Replicated, Transient)
    TArray<ULevelTravelStationComponent*> LevelTravelStations;
    
    UPROPERTY(Export, Replicated, Transient)
    TArray<UFastTravelStationComponent*> FastTravelStations;
    
    UPROPERTY(Transient)
    TArray<UFastTravelStationData*> AllFastTravelStations;
    
    UPROPERTY(Transient)
    TArray<FActiveFastTravelData> ActiveFastTravelStations;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HostFastTravelStations)
    TArray<UFastTravelStationData*> HostFastTravelStations;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LastActiveTravelToStation)
    TWeakObjectPtr<AActor> LastActiveTravelToStation_Client;
    
    UPROPERTY(Replicated, Transient)
    TWeakObjectPtr<AActor> LastTravelledThroughStation;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> LastActiveTravelToStation_Server;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> LevelArrivalTravelStation;
    
    UPROPERTY(Transient)
    FString LastDestinationTravelStationName;
    
public:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TravelToStationCountdown)
    FTravelCountdownInfo TravelToStationCountdown;
    
    UPROPERTY()
    UGlobalTravelGraph* GlobalTravelGraph;
    
    ATravelStationTracker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void TravelToStationTimer();
    
protected:
    UFUNCTION()
    void PlayerJoinedTimer();
    
private:
    UFUNCTION()
    void OnRep_TravelToStationCountdown();
    
public:
    UFUNCTION()
    void OnRep_LastActiveTravelToStation();
    
private:
    UFUNCTION()
    void OnRep_HostFastTravelStations();
    
public:
    UFUNCTION(BlueprintCallable)
    UTravelStationComponentBase* GetTravelStationComponent(UTravelStationData* TravelStationData);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetLastTravelledThroughStation();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetLastActiveTravelToStation(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    UFastTravelStationData* GetFastTravelStationInfo(const FString& FastTravelStationName);
    
    UFUNCTION(BlueprintCallable)
    TArray<UFastTravelStationData*> GetAllFastTravelStations();
    
    UFUNCTION(BlueprintCallable)
    TArray<FActiveFastTravelData> GetActiveFastTravelStationList();
    
    UFUNCTION(BlueprintCallable)
    UFastTravelStationData* FindFastTravelStationForMap(const FName MapName);
    
};


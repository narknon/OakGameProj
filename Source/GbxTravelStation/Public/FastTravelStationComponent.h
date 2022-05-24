#pragma once
#include "CoreMinimal.h"
#include "TravelStationComponentBase.h"
#include "FastTravelStationDiscoveredDelegate.h"
#include "FastTravelStationUndiscoveredDelegate.h"
#include "FastTravelStationComponent.generated.h"

class UFastTravelStationData;
class UFastTravelStationComponent;
class AActor;
class UObject;
class APawn;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXTRAVELSTATION_API UFastTravelStationComponent : public UTravelStationComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    UFastTravelStationData* FastTravelData;
    
    UPROPERTY(BlueprintAssignable)
    FFastTravelStationDiscovered OnFastTravelStationDiscovered;
    
    UPROPERTY(BlueprintAssignable)
    FFastTravelStationUndiscovered OnFastTravelStationUndiscovered;
    
    UFastTravelStationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnTravelStationActivated(AActor* PreviousStation);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void FastTravelToStation(UObject* WorldContextObject, UFastTravelStationData* DestinationStationData, APawn* ActivatingPawn);
    
    UFUNCTION(BlueprintCallable)
    bool DeactivateFastTravel(UFastTravelStationComponent* FallbackLocation);
    
    UFUNCTION(BlueprintCallable)
    bool ActivateFastTravel();
    
};


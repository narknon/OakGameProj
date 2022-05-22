#pragma once
#include "CoreMinimal.h"
#include "TravelStationComponentBase.h"
#include "FastTravelStationUndiscoveredDelegate.h"
#include "FastTravelStationDiscoveredDelegate.h"
#include "FastTravelStationComponent.generated.h"

class UFastTravelStationData;
class AActor;
class UObject;
class UFastTravelStationComponent;
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


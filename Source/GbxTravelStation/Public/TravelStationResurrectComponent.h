#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TravelStationComponentBase.h"
#include "TravelStationResurrectChangedDelegate.h"
#include "TravelStationCharacterResurrectedDelegate.h"
#include "TravelStationResurrectComponent.generated.h"

class UResurrectTravelStationData;
class UChallenge;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXTRAVELSTATION_API UTravelStationResurrectComponent : public UTravelStationComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_StationIsActive)
    bool StationIsActive;
    
    UPROPERTY(EditInstanceOnly)
    bool DefaultStationToActive;
    
    UPROPERTY(EditInstanceOnly)
    bool bActivateOnEnterArea;
    
    UPROPERTY(EditAnywhere)
    bool bResurrectionActive;
    
    UPROPERTY(EditAnywhere)
    bool bNeverResurectThere;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<UChallenge> TravelDiscoveredChallenge;
    
    UPROPERTY()
    float ActivationCylinderTestDelay;
    
    UPROPERTY()
    bool UseActivationCylinder;
    
    UPROPERTY()
    float ActivationCylinderRadius;
    
    UPROPERTY()
    float ActivationCylinderHalfHeight;
    
    UPROPERTY()
    float ActivationCylinderZOffset;
    
    UPROPERTY(BlueprintAssignable)
    FTravelStationResurrectChanged OnStationResurrectActivated;
    
    UPROPERTY(BlueprintAssignable)
    FTravelStationResurrectChanged OnStationResurrectDeactivated;
    
    UPROPERTY(BlueprintAssignable)
    FTravelStationCharacterResurrected OnResurrectedAtStation;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    UResurrectTravelStationData* ResurrectTravelData;
    
    UTravelStationResurrectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_StationIsActive();
    
    UFUNCTION(BlueprintCallable)
    bool ActivateTravelStation(bool bForceActivation);
    
};


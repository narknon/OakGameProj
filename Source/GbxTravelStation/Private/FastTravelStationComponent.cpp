#include "FastTravelStationComponent.h"
#include "Net/UnrealNetwork.h"

class UFastTravelStationComponent;
class AActor;
class UObject;
class UFastTravelStationData;
class APawn;

void UFastTravelStationComponent::OnTravelStationActivated(AActor* PreviousStation) {
}

void UFastTravelStationComponent::FastTravelToStation(UObject* WorldContextObject, UFastTravelStationData* DestinationStationData, APawn* ActivatingPawn) {
}

bool UFastTravelStationComponent::DeactivateFastTravel(UFastTravelStationComponent* FallbackLocation) {
    return false;
}

bool UFastTravelStationComponent::ActivateFastTravel() {
    return false;
}

void UFastTravelStationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFastTravelStationComponent, FastTravelData);
}

UFastTravelStationComponent::UFastTravelStationComponent() {
    this->FastTravelData = NULL;
}


#include "TravelStationResurrectComponent.h"
#include "Net/UnrealNetwork.h"

void UTravelStationResurrectComponent::OnRep_StationIsActive() {
}

bool UTravelStationResurrectComponent::ActivateTravelStation(bool bForceActivation) {
    return false;
}

void UTravelStationResurrectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTravelStationResurrectComponent, StationIsActive);
    DOREPLIFETIME(UTravelStationResurrectComponent, ResurrectTravelData);
}

UTravelStationResurrectComponent::UTravelStationResurrectComponent() {
    this->StationIsActive = false;
    this->DefaultStationToActive = false;
    this->bActivateOnEnterArea = true;
    this->bResurrectionActive = true;
    this->bNeverResurectThere = false;
    this->TravelDiscoveredChallenge = NULL;
    this->ActivationCylinderTestDelay = 1.00f;
    this->UseActivationCylinder = true;
    this->ActivationCylinderRadius = 1000.00f;
    this->ActivationCylinderHalfHeight = 500.00f;
    this->ActivationCylinderZOffset = 0.00f;
    this->ResurrectTravelData = NULL;
}


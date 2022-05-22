#include "GalaxyMapStation.h"
#include "Net/UnrealNetwork.h"

class UPlanetData;

void AGalaxyMapStation::SetCurrentPlanetData(UPlanetData* PlanetData) {
}

void AGalaxyMapStation::OnTravelIDsChanged() {
}

void AGalaxyMapStation::OnRep_CurrentPlanetData() {
}

void AGalaxyMapStation::OnPlanetMeshDataLoaded() {
}




UPlanetData* AGalaxyMapStation::GetPlanetDataFromZoneNameID_Implementation(const uint8 ZoneNameID) {
    return NULL;
}

UPlanetData* AGalaxyMapStation::GetPlanetDataFromMapNameID_Implementation(const uint8 MapNameID) {
    return NULL;
}

void AGalaxyMapStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGalaxyMapStation, CurrentPlanetData);
}

AGalaxyMapStation::AGalaxyMapStation() {
    this->CurrentPlanetData = NULL;
    this->CurrentPlanetMeshData = NULL;
    this->OrbitingPlanetData = NULL;
    this->GalaxyMapStationPatch = NULL;
}


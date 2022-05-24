#include "TravelStationTracker.h"
#include "Net/UnrealNetwork.h"

class UTravelStationData;
class UTravelStationComponentBase;
class AActor;
class APlayerController;
class UFastTravelStationData;

void ATravelStationTracker::TravelToStationTimer() {
}

void ATravelStationTracker::PlayerJoinedTimer() {
}

void ATravelStationTracker::OnRep_TravelToStationCountdown() {
}

void ATravelStationTracker::OnRep_LastActiveTravelToStation() {
}

void ATravelStationTracker::OnRep_HostFastTravelStations() {
}

UTravelStationComponentBase* ATravelStationTracker::GetTravelStationComponent(UTravelStationData* TravelStationData) {
    return NULL;
}

AActor* ATravelStationTracker::GetLastTravelledThroughStation() {
    return NULL;
}

AActor* ATravelStationTracker::GetLastActiveTravelToStation(APlayerController* PC) {
    return NULL;
}

UFastTravelStationData* ATravelStationTracker::GetFastTravelStationInfo(const FString& FastTravelStationName) {
    return NULL;
}

TArray<UFastTravelStationData*> ATravelStationTracker::GetAllFastTravelStations() {
    return TArray<UFastTravelStationData*>();
}

TArray<FActiveFastTravelData> ATravelStationTracker::GetActiveFastTravelStationList() {
    return TArray<FActiveFastTravelData>();
}

UFastTravelStationData* ATravelStationTracker::FindFastTravelStationForMap(const FName MapName) {
    return NULL;
}

void ATravelStationTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATravelStationTracker, ResurrectTravelStations);
    DOREPLIFETIME(ATravelStationTracker, LevelTravelStations);
    DOREPLIFETIME(ATravelStationTracker, FastTravelStations);
    DOREPLIFETIME(ATravelStationTracker, HostFastTravelStations);
    DOREPLIFETIME(ATravelStationTracker, LastActiveTravelToStation_Client);
    DOREPLIFETIME(ATravelStationTracker, LastTravelledThroughStation);
    DOREPLIFETIME(ATravelStationTracker, TravelToStationCountdown);
}

ATravelStationTracker::ATravelStationTracker() {
    this->GlobalTravelGraph = NULL;
}


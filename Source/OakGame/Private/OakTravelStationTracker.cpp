#include "OakTravelStationTracker.h"
#include "Net/UnrealNetwork.h"

class UObject;
class AOakPlayerController;
class UFastTravelStationData;

void AOakTravelStationTracker::UnlockFastTravelStation(UObject* WorldContextObject, AOakPlayerController* UnlockPlayer, UFastTravelStationData* TravelStation, bool bBypassDependencies) {
}

void AOakTravelStationTracker::SetFastTravelAvailable(bool bAvailable) {
}

void AOakTravelStationTracker::OnRep_HostDiscoveredPlanets() {
}

void AOakTravelStationTracker::OnRep_FastTravelAvailable() {
}

void AOakTravelStationTracker::OnFastTravelLockoutTimer() {
}

void AOakTravelStationTracker::LockOutFastTravelAvailable(UObject* WorldContextObject, float LockOutTime) {
}

void AOakTravelStationTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakTravelStationTracker, HostDiscoveredPlanets);
    DOREPLIFETIME(AOakTravelStationTracker, bFastTravelAvailable);
}

AOakTravelStationTracker::AOakTravelStationTracker() {
    this->bFastTravelAvailable = true;
}


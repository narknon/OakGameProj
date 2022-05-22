#include "OakGameMode.h"

class UTravelStationData;
class AActor;
class ATravelStationTracker;
class AOakPlayerController;
class AController;
class APawn;

void AOakGameMode::TravelToStationInterrupted(UTravelStationData* TravelStation) {
}

bool AOakGameMode::RespawnPlayer(AOakPlayerController* OakPlayerController) {
    return false;
}

void AOakGameMode::PrepareToTravelToStation(UTravelStationData* TravelStation, APawn* ActivatingPawn) {
}

ATravelStationTracker* AOakGameMode::GetTravelStationTracker() {
    return NULL;
}

AActor* AOakGameMode::FindPlayerStation(AController* Player, const FString& IncomingName) {
    return NULL;
}

bool AOakGameMode::CanTravelToStation(UTravelStationData* TravelStation, AController* OptionalInstigator) {
    return false;
}

bool AOakGameMode::CanTravelThroughStations(AController* OptionalInstigator) {
    return false;
}

AOakGameMode::AOakGameMode() {
    this->DefaultPlayerWeapon = NULL;
    this->bPreventFightForYourLifeInRespawnRestrictedVolumes = true;
}


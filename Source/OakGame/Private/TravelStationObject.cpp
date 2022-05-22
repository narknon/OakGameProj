#include "TravelStationObject.h"

class AGbxPlayerController;
class AController;
class UPrimitiveComponent;
class AActor;

void ATravelStationObject::SetStationResurrectActive(bool bResurrectionActive) {
}

void ATravelStationObject::PlayerExitedArea(AGbxPlayerController* GbxPC) {
}

void ATravelStationObject::PlayerEnteredArea(AGbxPlayerController* GbxPC) {
}

void ATravelStationObject::OnUsedSecondaryBy(AController* UserController, UPrimitiveComponent* UsedComponent) {
}

void ATravelStationObject::OnUsedBy(const FUseEvent& UseEvent) {
}

void ATravelStationObject::OnTravelStationActivated(AActor* OtherStation) {
}

void ATravelStationObject::OnFastTravelStationDiscovered(bool bNoActivationSequence) {
}

bool ATravelStationObject::IsDestinationInstalled() {
    return false;
}

bool ATravelStationObject::HasNearbyFriends(AGbxPlayerController* GbxPC) {
    return false;
}

bool ATravelStationObject::GetStationResurrectActive() {
    return false;
}

FString ATravelStationObject::GetNameOfNextLevel() {
    return TEXT("");
}

void ATravelStationObject::CheckTravelDependencies() {
}

ATravelStationObject::ATravelStationObject() {
    this->DefaultFriendsInArea = NULL;
    this->FriendsInAreaListMenuData = NULL;
    this->bResurrectionProximityDetection = true;
    this->DebugFriendsCount = -1;
    this->UsableComponent = NULL;
    this->MeshComponent = NULL;
    this->AreaComponent = NULL;
    this->FastTravelStationComponent = NULL;
    this->LevelTravelStationComponent = NULL;
    this->FriendsInNextAreaBillboard = NULL;
    this->CachedFriendsInNextArea = NULL;
    this->OutOfMapWaypoint = NULL;
}


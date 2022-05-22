#include "DiscoveryComponent.h"

class UObject;
class UPlanetData;
class UDiscoveryAreaComponent;

void UDiscoveryComponent::UnlockPlanetForAllPlayers(UObject* WorldContextObject, UPlanetData* Planet) {
}

void UDiscoveryComponent::ServerFirstDiscoveryOfArea_Implementation(UDiscoveryAreaComponent* AreaComponent) {
}
bool UDiscoveryComponent::ServerFirstDiscoveryOfArea_Validate(UDiscoveryAreaComponent* AreaComponent) {
    return true;
}

void UDiscoveryComponent::OnHostDiscoveredPlanetsChanged() {
}

bool UDiscoveryComponent::IsPlanetNew(UPlanetData* Planet) {
    return false;
}

bool UDiscoveryComponent::IsPlanetDiscovered(UPlanetData* Planet) {
    return false;
}

bool UDiscoveryComponent::IsLevelDiscovered(FName LevelName) {
    return false;
}

bool UDiscoveryComponent::IsCurrentLevelDiscovered() {
    return false;
}

bool UDiscoveryComponent::IsAreaDiscovered(FName AreaName, bool CurrentLevelOnly) {
    return false;
}

void UDiscoveryComponent::FixupAreaDiscoveryAchievement() {
}

void UDiscoveryComponent::DiscoverLevelForAllPlayers(UObject* WorldContextObject, FName LevelName, bool bAutoDiscoverPlanet) {
}

void UDiscoveryComponent::DiscoverAreaForAllPlayers(UObject* WorldContextObject, FName AreaName) {
}

void UDiscoveryComponent::ClientUnlockPlanet_Implementation(UPlanetData* Planet) {
}

void UDiscoveryComponent::ClientDiscoverLevel_Implementation(FName LevelName) {
}

UDiscoveryComponent::UDiscoveryComponent() {
}


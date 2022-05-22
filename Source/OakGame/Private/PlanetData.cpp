#include "PlanetData.h"
#include "Templates/SubclassOf.h"

class UZoneMapData;
class UObject;
class AOakPlayerController;
class UPatchExpansionData;
class UDownloadableContentData;
class UChallengeCategoryData;
class UPlanetData;
class UPlanetMeshData;
class UMission;
class UFastTravelStationData;
class APlayerController;
class AZoneMapPlanetViewer;

bool UPlanetData::ShouldHighlight(UObject* WorldContextObject) const {
    return false;
}

void UPlanetData::OnPlanetMeshDataLoaded() {
}

void UPlanetData::OnPlanetClassLoaded() {
}

UZoneMapData* UPlanetData::GetZoneMapForTrackedMission(UObject* WorldContextObject) {
    return NULL;
}

void UPlanetData::GetWorldDiscoveryAreaCounts(AOakPlayerController* ViewingPlayer, int32& TotalWorldDiscoveryAreas, int32& FoundWorldDiscoveryAreas, TEnumAsByte<EOakLeague> InAssociatedLeague, UPatchExpansionData* InAssociatedPatch, UDownloadableContentData* InAssociatedDLC) {
}

void UPlanetData::GetWorldChallengeCounts(AOakPlayerController* ViewingPlayer, UChallengeCategoryData* ChallengeCategory, int32& TotalCount, int32& CompletedCount) {
}

bool UPlanetData::GetPlanetZoneMaps(AOakPlayerController* PlayerController, UPlanetData* Planet, TArray<UZoneMapData*>& OutZoneMaps, bool FindOnlyDiscovered, bool FindOnlyLicensed) {
    return false;
}

void UPlanetData::GetPlanetZoneMapFilenames(AOakPlayerController* PlayerController, UPlanetData* Planet, TArray<FString>& OutZoneMapFilenames, bool FindOnlyDiscovered) {
}

UPlanetMeshData* UPlanetData::GetPlanetMeshData() const {
    return NULL;
}

UPlanetData* UPlanetData::GetPlanetForObjective(UObject* WorldContextObject, TSubclassOf<UMission> MissionToTrack) {
    return NULL;
}

void UPlanetData::GetPlanetFastTravelStations(UObject* WorldContextObject, UPlanetData* Planet, TArray<UFastTravelStationData*>& OutFastTravelStations, bool FindOnlyDiscovered, APlayerController* ViewingPlayer) {
}

UPlanetData* UPlanetData::GetPlanetDataForCurrentLevel(UObject* WorldContextObject) {
    return NULL;
}

TSubclassOf<AZoneMapPlanetViewer> UPlanetData::GetPlanetClass() const {
    return NULL;
}

void UPlanetData::GetGalaxyDiscoveryAreaCounts(AOakPlayerController* ViewingPlayer, int32& TotalWorldDiscoveryAreas, int32& FoundWorldDiscoveryAreas, TEnumAsByte<EOakLeague> InAssociatedLeague, UPatchExpansionData* InAssociatedPatch, UDownloadableContentData* InAssociatedDLC) {
}

void UPlanetData::GetGalaxyChallengeCounts(AOakPlayerController* ViewingPlayer, UChallengeCategoryData* ChallengeCategory, int32& TotalCount, int32& CompletedCount) {
}

UFastTravelStationData* UPlanetData::GetClosestFastTravelStationToObjective(UObject* WorldContextObject, TSubclassOf<UMission> MissionToTrack) {
    return NULL;
}

void UPlanetData::AsyncLoadPlanetMeshData(const FPlanetAssetLoaded& LoadedDelegate) {
}

void UPlanetData::AsyncLoadPlanetClass(const FPlanetAssetLoaded& LoadedDelegate) {
}

UPlanetData::UPlanetData() {
    this->bIsTrialPlanetoid = false;
    this->bNoPlanetDisplay = false;
    this->bNotAvailableForHyperspaceTravel = false;
    this->ConceptArtToDisplay = NULL;
}


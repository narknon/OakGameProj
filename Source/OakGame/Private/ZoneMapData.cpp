#include "ZoneMapData.h"
#include "Templates/SubclassOf.h"

class UObject;
class AOakPlayerController;
class UPlanetData;
class UTextureRenderTarget2D;
class UTexture2D;
class UZoneMapMeshData;
class UMission;
class UChallengeCategoryData;
class UDownloadableContentData;
class AGbxPlayerController;
class UInWorldIconData;

bool UZoneMapData::ShouldHighlight(UObject* WorldContextObject) {
    return false;
}

void UZoneMapData::SetHighlight(UObject* WorldContextObject, bool bShouldHighlight) {
}

bool UZoneMapData::SaveZoneFogOfDiscovery(AOakPlayerController* ViewingPlayer, UTextureRenderTarget2D* FogOfDiscoveryRenderTarget) {
    return false;
}

bool UZoneMapData::SaveCurrentZoneFogOfDiscovery(AOakPlayerController* ViewingPlayer) {
    return false;
}

void UZoneMapData::OnZoneMapMeshDataLoaded() {
}

UTexture2D* UZoneMapData::LoadZoneFogOfDiscoveryTexture(AOakPlayerController* ViewingPlayer) {
    return NULL;
}

bool UZoneMapData::LoadZoneFogOfDiscovery(AOakPlayerController* ViewingPlayer, UTextureRenderTarget2D*& FoDRenderTarget, int32 DefaultWidth, int32 DefaultHeight) {
    return false;
}

UTexture2D* UZoneMapData::LoadCurrentZoneFogOfDiscoveryTexture(AOakPlayerController* ViewingPlayer) {
    return NULL;
}

UTextureRenderTarget2D* UZoneMapData::LoadCurrentZoneFogOfDiscovery(AOakPlayerController* ViewingPlayer, int32 DefaultWidth, int32 DefaultHeight) {
    return NULL;
}

bool UZoneMapData::IsZoneMapOnPlanet(UPlanetData* PlanetData) {
    return false;
}

bool UZoneMapData::IsPOIKnownDirect(AOakPlayerController* ViewingPlayer, const FZoneMapPOIEntry& POIEntry) {
    return false;
}

bool UZoneMapData::IsPOIKnown(AOakPlayerController* ViewingPlayer, const FString& POIObjectName) {
    return false;
}

void UZoneMapData::GetZoneWaypointsForMission(TSubclassOf<UMission> Mission, TArray<FZoneMapMissionWaypointEntry>& OutMissionWaypoints) {
}

TArray<FZoneMapPOIEntry> UZoneMapData::GetZoneMapPOIList() {
    return TArray<FZoneMapPOIEntry>();
}

UPlanetData* UZoneMapData::GetZoneMapPlanet() {
    return NULL;
}

TArray<FZoneMapMissionWaypointEntry> UZoneMapData::GetZoneMapMissionWaypointList() {
    return TArray<FZoneMapMissionWaypointEntry>();
}

UZoneMapMeshData* UZoneMapData::GetZoneMapMeshData() const {
    return NULL;
}

TArray<FZoneMapChallengeEntry> UZoneMapData::GetZoneMapChallengeList() {
    return TArray<FZoneMapChallengeEntry>();
}

void UZoneMapData::GetZoneChallengeCounts(AOakPlayerController* ViewingPlayer, UChallengeCategoryData* ChallengeCategory, int32& TotalCount, int32& CompletedCount, bool bIgnoreHidden) {
}

void UZoneMapData::GetWorldDiscoveryAreaCounts(AOakPlayerController* ViewingPlayer, int32& TotalWorldDiscoveryAreas, int32& FoundWorldDiscoveryAreas, TEnumAsByte<EOakLeague> InAssociatedLeague, UDownloadableContentData* InAssociatedDLC) {
}

void UZoneMapData::GetTravelStationWaypointsToMission(UObject* WorldContextObject, TArray<FZoneMapPOIEntry>& StationPOI, TSubclassOf<UMission> MissionToTrack) {
}

TEnumAsByte<EZoneMapMissionStatus> UZoneMapData::GetMissionWaypointStatusDirect(UObject* WorldContextObject, const FZoneMapMissionWaypointEntry& MissionWaypointEntry) {
    return ZMM_AvailableMission;
}

TEnumAsByte<EZoneMapMissionStatus> UZoneMapData::GetMissionWaypointStatus(UObject* WorldContextObject, const FString& MissionWaypointObjectName) {
    return ZMM_AvailableMission;
}

void UZoneMapData::GetMissionWaypointDisplayTextDirect(UObject* WorldContextObject, const FZoneMapMissionWaypointEntry& MissionWaypointEntry, TArray<FText>& ObjectiveText, TArray<FText>& DirectorText) {
}

void UZoneMapData::GetMissionsReferencedByZoneWaypoints(TArray<TSubclassOf<UMission>>& OutMissions) {
}

FString UZoneMapData::GetMapFilename() const {
    return TEXT("");
}

UInWorldIconData* UZoneMapData::GetChallengeWorldIconDirect(AGbxPlayerController* Player, const FZoneMapChallengeEntry& ChallengeEntry) {
    return NULL;
}

UInWorldIconData* UZoneMapData::GetChallengeWorldIcon(AGbxPlayerController* Player, const FString& ChallengeObjectName) {
    return NULL;
}

TEnumAsByte<EZoneMapChallengeStatus> UZoneMapData::GetChallengeStatusDirect(AGbxPlayerController* Player, const FZoneMapChallengeEntry& ChallengeEntry) {
    return ZMC_AvailableChallenge;
}

TEnumAsByte<EZoneMapChallengeStatus> UZoneMapData::GetChallengeStatus(AGbxPlayerController* Player, const FString& ChallengeObjectName) {
    return ZMC_AvailableChallenge;
}

FString UZoneMapData::GetChallengeScaleformIconDirect(AGbxPlayerController* Player, const FZoneMapChallengeEntry& ChallengeEntry) {
    return TEXT("");
}

FString UZoneMapData::GetChallengeScaleformIcon(AGbxPlayerController* Player, const FString& ChallengeObjectName) {
    return TEXT("");
}

FText UZoneMapData::GetChallengeDisplayTextDirect(const FZoneMapChallengeEntry& MissionWaypointEntry) {
    return FText::GetEmpty();
}

void UZoneMapData::AsyncLoadZoneMapMeshData(const FZoneMapMeshDataLoaded& LoadedDelegate) {
}

void UZoneMapData::ActivateZoneMapPOI(AOakPlayerController* ViewingPlayer, const FString& POIObjectName) {
}

UZoneMapData::UZoneMapData() {
    this->CustomUnfogHeight = 0.00f;
    this->CustomVehicleUnfogHeight = 0.00f;
    this->SuppressFastTravelTunnelCondition = NULL;
    this->PlanetZoneDisplayTexture = NULL;
    this->ConceptArtToDisplay = NULL;
    this->NumWorldDiscoveryAreas = 0;
    this->ZoneMapVersion = 0;
    this->bIsTutorialTarget = false;
    this->AssociatedLeague = OL_None;
    this->AssociatedPatch = NULL;
    this->AssociatedDLC = NULL;
    this->bNoFastTravelStations = false;
}


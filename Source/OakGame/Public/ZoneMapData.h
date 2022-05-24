#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "LevelData.h"
#include "ZoneMapDataSection.h"
#include "ZoneMapMissionPOIBlacklistEntry.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapPOIEntry.h"
#include "ZoneMapMeshDataLoadedDelegate.h"
#include "ZoneMapMissionWaypointEntry.h"
#include "ZoneMapChallengeEntry.h"
#include "ZoneMapChallengeGroupEntry.h"
#include "EOakLeague.h"
#include "EZoneMapMissionStatus.h"
#include "EZoneMapChallengeStatus.h"
#include "ZoneMapData.generated.h"

class UGbxCondition;
class UTexture2D;
class UChallengeCategoryData;
class UStaticMesh;
class UPatchExpansionData;
class UDownloadableContentData;
class UZoneMapPOITypeData;
class UAdditionalZoneMapData;
class UObject;
class AOakPlayerController;
class UTextureRenderTarget2D;
class UPlanetData;
class UZoneMapMeshData;
class UMission;
class UInWorldIconData;
class AGbxPlayerController;

UCLASS()
class OAKGAME_API UZoneMapData : public ULevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSoftObjectPath ZoneMapMeshAssetReference;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FZoneMapDataSection> ZoneMapDataSections;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CustomUnfogHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CustomVehicleUnfogHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UGbxCondition* SuppressFastTravelTunnelCondition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FZoneMapMissionPOIBlacklistEntry> BlacklistedMissionPOIs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform PlanetLocationTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* PlanetZoneDisplayTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* ConceptArtToDisplay;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FZoneMapPOIEntry> ZoneMapPOIList;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FZoneMapMissionWaypointEntry> ZoneMapMissionWaypointList;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FZoneMapChallengeEntry> ZoneMapChallengeList;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FZoneMapChallengeGroupEntry> ZoneMapChallengeGroupList;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumWorldDiscoveryAreas;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ZoneMapVersion;
    
    UPROPERTY(EditAnywhere)
    bool bIsTutorialTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> PlanetPOIZoneMapMesh;
    
    UPROPERTY(Transient)
    TEnumAsByte<EOakLeague> AssociatedLeague;
    
    UPROPERTY(Transient)
    UPatchExpansionData* AssociatedPatch;
    
    UPROPERTY(Transient)
    UDownloadableContentData* AssociatedDLC;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bNoFastTravelStations;
    
    UPROPERTY(EditAnywhere)
    TArray<UZoneMapPOITypeData*> POITypesToIgnoreInCurrentMap;
    
    UPROPERTY(Transient)
    TArray<UAdditionalZoneMapData*> AdditionalZoneMaps;
    
    UZoneMapData();
    UFUNCTION(BlueprintCallable)
    bool ShouldHighlight(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlight(UObject* WorldContextObject, bool bShouldHighlight);
    
    UFUNCTION(BlueprintCallable)
    bool SaveZoneFogOfDiscovery(AOakPlayerController* ViewingPlayer, UTextureRenderTarget2D* FogOfDiscoveryRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveCurrentZoneFogOfDiscovery(AOakPlayerController* ViewingPlayer);
    
    UFUNCTION()
    void OnZoneMapMeshDataLoaded();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadZoneFogOfDiscoveryTexture(AOakPlayerController* ViewingPlayer);
    
    UFUNCTION(BlueprintCallable)
    bool LoadZoneFogOfDiscovery(AOakPlayerController* ViewingPlayer, UTextureRenderTarget2D*& FoDRenderTarget, int32 DefaultWidth, int32 DefaultHeight);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadCurrentZoneFogOfDiscoveryTexture(AOakPlayerController* ViewingPlayer);
    
    UFUNCTION(BlueprintCallable)
    static UTextureRenderTarget2D* LoadCurrentZoneFogOfDiscovery(AOakPlayerController* ViewingPlayer, int32 DefaultWidth, int32 DefaultHeight);
    
    UFUNCTION(BlueprintPure)
    bool IsZoneMapOnPlanet(UPlanetData* PlanetData);
    
    UFUNCTION(BlueprintCallable)
    bool IsPOIKnownDirect(AOakPlayerController* ViewingPlayer, const FZoneMapPOIEntry& POIEntry);
    
    UFUNCTION(BlueprintCallable)
    bool IsPOIKnown(AOakPlayerController* ViewingPlayer, const FString& POIObjectName);
    
    UFUNCTION(BlueprintCallable)
    void GetZoneWaypointsForMission(TSubclassOf<UMission> Mission, TArray<FZoneMapMissionWaypointEntry>& OutMissionWaypoints);
    
    UFUNCTION(BlueprintCallable)
    TArray<FZoneMapPOIEntry> GetZoneMapPOIList();
    
    UFUNCTION(BlueprintPure)
    UPlanetData* GetZoneMapPlanet();
    
    UFUNCTION(BlueprintCallable)
    TArray<FZoneMapMissionWaypointEntry> GetZoneMapMissionWaypointList();
    
    UFUNCTION(BlueprintPure)
    UZoneMapMeshData* GetZoneMapMeshData() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FZoneMapChallengeEntry> GetZoneMapChallengeList();
    
    UFUNCTION(BlueprintCallable)
    void GetZoneChallengeCounts(AOakPlayerController* ViewingPlayer, UChallengeCategoryData* ChallengeCategory, int32& TotalCount, int32& CompletedCount, bool bIgnoreHidden);
    
    UFUNCTION(BlueprintCallable)
    void GetWorldDiscoveryAreaCounts(AOakPlayerController* ViewingPlayer, int32& TotalWorldDiscoveryAreas, int32& FoundWorldDiscoveryAreas, TEnumAsByte<EOakLeague> InAssociatedLeague, UDownloadableContentData* InAssociatedDLC);
    
    UFUNCTION(BlueprintCallable)
    void GetTravelStationWaypointsToMission(UObject* WorldContextObject, TArray<FZoneMapPOIEntry>& StationPOI, TSubclassOf<UMission> MissionToTrack);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EZoneMapMissionStatus> GetMissionWaypointStatusDirect(UObject* WorldContextObject, const FZoneMapMissionWaypointEntry& MissionWaypointEntry);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EZoneMapMissionStatus> GetMissionWaypointStatus(UObject* WorldContextObject, const FString& MissionWaypointObjectName);
    
    UFUNCTION(BlueprintCallable)
    void GetMissionWaypointDisplayTextDirect(UObject* WorldContextObject, const FZoneMapMissionWaypointEntry& MissionWaypointEntry, TArray<FText>& ObjectiveText, TArray<FText>& DirectorText);
    
    UFUNCTION(BlueprintCallable)
    void GetMissionsReferencedByZoneWaypoints(TArray<TSubclassOf<UMission>>& OutMissions);
    
    UFUNCTION(BlueprintPure)
    FString GetMapFilename() const;
    
    UFUNCTION(BlueprintCallable)
    UInWorldIconData* GetChallengeWorldIconDirect(AGbxPlayerController* Player, const FZoneMapChallengeEntry& ChallengeEntry);
    
    UFUNCTION(BlueprintCallable)
    UInWorldIconData* GetChallengeWorldIcon(AGbxPlayerController* Player, const FString& ChallengeObjectName);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EZoneMapChallengeStatus> GetChallengeStatusDirect(AGbxPlayerController* Player, const FZoneMapChallengeEntry& ChallengeEntry);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EZoneMapChallengeStatus> GetChallengeStatus(AGbxPlayerController* Player, const FString& ChallengeObjectName);
    
    UFUNCTION(BlueprintCallable)
    FString GetChallengeScaleformIconDirect(AGbxPlayerController* Player, const FZoneMapChallengeEntry& ChallengeEntry);
    
    UFUNCTION(BlueprintCallable)
    FString GetChallengeScaleformIcon(AGbxPlayerController* Player, const FString& ChallengeObjectName);
    
    UFUNCTION(BlueprintCallable)
    FText GetChallengeDisplayTextDirect(const FZoneMapChallengeEntry& MissionWaypointEntry);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadZoneMapMeshData(const FZoneMapMeshDataLoaded& LoadedDelegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateZoneMapPOI(AOakPlayerController* ViewingPlayer, const FString& POIObjectName);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LevelGroupData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EOakLeague.h"
#include "PlanetAssetLoadedDelegate.h"
#include "PlanetData.generated.h"

class UTexture2D;
class AOakPlayerController;
class UZoneMapData;
class UObject;
class UPatchExpansionData;
class UDownloadableContentData;
class UChallengeCategoryData;
class UPlanetData;
class UPlanetMeshData;
class UMission;
class UFastTravelStationData;
class APlayerController;
class AZoneMapPlanetViewer;

UCLASS()
class OAKGAME_API UPlanetData : public ULevelGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSoftObjectPath PlanetMeshDataReference;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSoftClassPath PlanetClassReference;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTransform GalaxyMapTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsTrialPlanetoid;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNoPlanetDisplay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNotAvailableForHyperspaceTravel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* ConceptArtToDisplay;
    
    UPlanetData();
    UFUNCTION(BlueprintPure)
    bool ShouldHighlight(UObject* WorldContextObject) const;
    
    UFUNCTION()
    void OnPlanetMeshDataLoaded();
    
    UFUNCTION()
    void OnPlanetClassLoaded();
    
    UFUNCTION(BlueprintCallable)
    static UZoneMapData* GetZoneMapForTrackedMission(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void GetWorldDiscoveryAreaCounts(AOakPlayerController* ViewingPlayer, int32& TotalWorldDiscoveryAreas, int32& FoundWorldDiscoveryAreas, TEnumAsByte<EOakLeague> InAssociatedLeague, UPatchExpansionData* InAssociatedPatch, UDownloadableContentData* InAssociatedDLC);
    
    UFUNCTION(BlueprintCallable)
    void GetWorldChallengeCounts(AOakPlayerController* ViewingPlayer, UChallengeCategoryData* ChallengeCategory, int32& TotalCount, int32& CompletedCount);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlanetZoneMaps(AOakPlayerController* PlayerController, UPlanetData* Planet, TArray<UZoneMapData*>& OutZoneMaps, bool FindOnlyDiscovered, bool FindOnlyLicensed);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlanetZoneMapFilenames(AOakPlayerController* PlayerController, UPlanetData* Planet, TArray<FString>& OutZoneMapFilenames, bool FindOnlyDiscovered);
    
    UFUNCTION(BlueprintPure)
    UPlanetMeshData* GetPlanetMeshData() const;
    
    UFUNCTION(BlueprintCallable)
    static UPlanetData* GetPlanetForObjective(UObject* WorldContextObject, TSubclassOf<UMission> MissionToTrack);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlanetFastTravelStations(UObject* WorldContextObject, UPlanetData* Planet, TArray<UFastTravelStationData*>& OutFastTravelStations, bool FindOnlyDiscovered, APlayerController* ViewingPlayer);
    
    UFUNCTION(BlueprintCallable)
    static UPlanetData* GetPlanetDataForCurrentLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AZoneMapPlanetViewer> GetPlanetClass() const;
    
    UFUNCTION(BlueprintCallable)
    static void GetGalaxyDiscoveryAreaCounts(AOakPlayerController* ViewingPlayer, int32& TotalWorldDiscoveryAreas, int32& FoundWorldDiscoveryAreas, TEnumAsByte<EOakLeague> InAssociatedLeague, UPatchExpansionData* InAssociatedPatch, UDownloadableContentData* InAssociatedDLC);
    
    UFUNCTION(BlueprintCallable)
    static void GetGalaxyChallengeCounts(AOakPlayerController* ViewingPlayer, UChallengeCategoryData* ChallengeCategory, int32& TotalCount, int32& CompletedCount);
    
    UFUNCTION(BlueprintCallable)
    static UFastTravelStationData* GetClosestFastTravelStationToObjective(UObject* WorldContextObject, TSubclassOf<UMission> MissionToTrack);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadPlanetMeshData(const FPlanetAssetLoaded& LoadedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadPlanetClass(const FPlanetAssetLoaded& LoadedDelegate);
    
};


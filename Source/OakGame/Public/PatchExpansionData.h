#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "EOakLeague.h"
#include "LevelTravelDataListStationPatch.h"
#include "ChallengeFilterType.h"
#include "ItemPoolCollection.h"
#include "PatchExpansionData.generated.h"

class URegionManagerData;
class UDEPRECATED_OakMayhemModifiersDataAsset;
class UOakLoadingScreenExpansionData;
class UChallengeList;
class UCrewQuartersDecorationData;
class UZoneMapListData;
class UGameStatList;
class UDEPRECATED_OakMayhemUIDataAsset;
class UGameStatData;
class UMayhemOverrideDataAsset;
class AOakLeagueTravelStation;
class AOakLeagueTravelStationExit;
class UMission;
class UOakStreamingInteractionEvent;
class UChallenge;
class UTexture2D;
class UChallengeCategoryData;
class UAdditionalZoneMapData;
class UZoneMapPOITypeData;
class UGuardianRankRewardData;
class UGuardianRankPerkData;
class UOakVaultCardRewardData;
class UVaultCardGeneralData;
class UItemPoolData;

UCLASS()
class UPatchExpansionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    URegionManagerData* RegionManagerData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UChallengeList*> ChallengeLists;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGameStatList*> GameStatLists;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, UGameStatData*> KillStatMap;
    
    UPROPERTY(EditDefaultsOnly)
    UOakLoadingScreenExpansionData* LoadingScreenData;
    
    UPROPERTY()
    TArray<UDEPRECATED_OakMayhemModifiersDataAsset*> MayhemModeData;
    
    UPROPERTY()
    TArray<UDEPRECATED_OakMayhemUIDataAsset*> MayhemModeUIData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UMayhemOverrideDataAsset*> MayhemModeTwoData;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EOakLeague> SourceLeague;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AOakLeagueTravelStation> LeagueEnterTravelStationClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform LeagueTravelStationTransform;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AOakLeagueTravelStationExit> LeagueExitTravelStationClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform LeagueExitTravelStationTransform;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMission> InitialMission;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UMission>> MissionsWithoutMissionGraph;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakStreamingInteractionEvent*> AdditionalStreamingEvents;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<FString> BadassEventBlackListedStrings;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<FString> BadassEventBlackListedNameStrings;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<FString> RareChestLootDefsStrings;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UChallenge> LeagueMasterChallenge;
    
    UPROPERTY(EditDefaultsOnly)
    FText LeagueName;
    
    UPROPERTY(EditDefaultsOnly)
    FText LeagueDescription;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* LeagueOverviewPanelButtonTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* LeagueChallengesPanelButtonTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* LeagueOverviewPanelButtonTextureSplit;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* LeagueChallengesPanelButtonTextureSplit;
    
    UPROPERTY(EditDefaultsOnly)
    FText LeagueActiveText;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LeagueFinalDay;
    
    UPROPERTY(EditDefaultsOnly)
    UZoneMapListData* ZoneMapList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FLevelTravelDataListStationPatch> LevelTravelDataLists;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UChallengeCategoryData*> ProgressChallengeCategories;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FChallengeFilterType> AvailableZoneChallengeFilters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FChallengeFilterType> AvailableGalaxyChallengeFilters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UCrewQuartersDecorationData*> CrewQuartersDecorations;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAdditionalZoneMapData*> ZoneMapAdditions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UZoneMapPOITypeData*> POIDynamicTypeAdditions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGuardianRankRewardData*> GuardianRankRewards;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGuardianRankPerkData*> GuardianRankPerks;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakVaultCardRewardData*> VaultCardRewards;
    
    UPROPERTY(EditDefaultsOnly)
    UVaultCardGeneralData* GlobalVaultCardData;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolData* ItemPoolToReplaceWithRandomItemPool;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FItemPoolCollection> RandomDateBasedItemPools;
    
    UPatchExpansionData();
};


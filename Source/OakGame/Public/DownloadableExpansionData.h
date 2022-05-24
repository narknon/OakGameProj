#pragma once
#include "CoreMinimal.h"
#include "DlcLevelTravelPair.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=DownloadableContentData -FallbackName=DownloadableContentData
#include "LevelTravelDataListStationPatch.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeFilterType.h"
#include "GameplayTagContainer.h"
#include "LevelledSaveGameData.h"
#include "ItemPoolCollection.h"
#include "DownloadableExpansionData.generated.h"

class UVaultCardGeneralData;
class UMayhemOverrideDataAsset;
class UFastTravelStationData;
class UZoneMapListData;
class UOakCARMenuLoadout;
class UMission;
class URegionManagerData;
class UChallengeList;
class UGameStatList;
class UChallengeCategoryData;
class UGameStatData;
class UOakLoadingScreenExpansionData;
class UDEPRECATED_OakMayhemModifiersDataAsset;
class UDEPRECATED_OakMayhemUIDataAsset;
class UCrewQuartersDecorationData;
class UGbxCustomizationData;
class UGuardianRankPerkData;
class UAdditionalZoneMapData;
class UGuardianRankRewardData;
class UOakVaultCardRewardData;
class UItemPoolData;
class UOakPlayerAbilityTreeBranchData;
class UBehindTheScenesContent;

UCLASS()
class UDownloadableExpansionData : public UDownloadableContentData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDlcLevelTravelPair> LevelTravelPairs;
    
    UPROPERTY(EditDefaultsOnly)
    UFastTravelStationData* GatewayStationData;
    
    UPROPERTY(EditDefaultsOnly)
    UZoneMapListData* ZoneMapList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FLevelTravelDataListStationPatch> LevelTravelDataLists;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMission> InitialMission;
    
    UPROPERTY(EditDefaultsOnly)
    FText DescriptionForStartDLC;
    
    UPROPERTY(EditDefaultsOnly)
    URegionManagerData* RegionManagerData;
    
    UPROPERTY(EditDefaultsOnly)
    FSoftObjectPath VehicleSpawnPoolList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UChallengeList*> ChallengeLists;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGameStatList*> GameStatLists;
    
private:
    UPROPERTY()
    TArray<FString> SoftVehicleLoadouts;
    
    UPROPERTY(Transient)
    TArray<UOakCARMenuLoadout*> ResolvedVehicleLoadouts;
    
public:
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
    TArray<UChallengeCategoryData*> ProgressChallengeCategories;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FChallengeFilterType> AvailableZoneChallengeFilters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FChallengeFilterType> AvailableGalaxyChallengeFilters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UCrewQuartersDecorationData*> CrewQuartersDecorations;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGbxCustomizationData*> CrazyEarlCustomizations;
    
    UPROPERTY(EditDefaultsOnly)
    FLevelledSaveGameData LevelledSaveGameData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAdditionalZoneMapData*> ZoneMapAdditions;
    
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
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UOakPlayerAbilityTreeBranchData>> UnlockedSkillBranches;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnablesBTSMenu;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UBehindTheScenesContent> BehindTheScenesContent;
    
    UDownloadableExpansionData();
};


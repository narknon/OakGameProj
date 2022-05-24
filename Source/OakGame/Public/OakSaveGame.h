#pragma once
#include "CoreMinimal.h"
#include "ActiveFastTravelSaveData.h"
#include "RegionSaveGameData.h"
#include "GbxSaveGame.h"
#include "InventoryCategorySaveData.h"
#include "LevelPersistence_Level_SaveGameData.h"
#include "PlayerClassSaveGameData.h"
#include "CustomPlayerColorSaveGameData.h"
#include "OakInventoryItemSaveGameData.h"
#include "ResourcePoolSavegameData.h"
#include "GameStatSaveGameData.h"
#include "EquippedInventorySaveGameData.h"
#include "MissionPlaythroughSaveGameData.h"
#include "OakPlayerAbilitySaveGameData.h"
#include "PlaythroughActiveFastTravelSaveData.h"
#include "DiscoverySaveData.h"
#include "GuardianRankCharacterSaveGameData.h"
#include "VehicleUnlockedSaveGameData.h"
#include "TimeOfDaySaveGameData.h"
#include "OakSDUSaveGameData.h"
#include "OakCARMenuVehicleConfigSaveData.h"
#include "OakPlayerCharacterSlotSaveGameData.h"
#include "OakChallengeSaveGameData.h"
#include "CrewQuartersSaveData.h"
#include "CrewQuartersGunRackSaveData.h"
#include "EchoLogSaveGameData.h"
#include "GameStateSaveData.h"
#include "ChallengeCategoryProgressSaveData.h"
#include "UITrackingSaveGameData.h"
#include "EOakGameStateUIGroupMode.h"
#include "GuardianRankSaveGameData.h"
#include "OakSaveGame.generated.h"

class UGbxZoneMapFODSaveGameData;

UCLASS()
class OAKGAME_API UOakSaveGame : public UGbxSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 SaveGameId;
    
    UPROPERTY()
    bool bLevelledSaveNeedsFixup;
    
    UPROPERTY()
    int64 LastSaveTimestamp;
    
    UPROPERTY()
    uint32 TimePlayedSeconds;
    
    UPROPERTY()
    uint32 AccumulatedLevelPersistenceResetTimerSeconds;
    
    UPROPERTY()
    TArray<FLevelPersistence_Level_SaveGameData> LevelPersistenceData;
    
    UPROPERTY(EditAnywhere)
    FPlayerClassSaveGameData PlayerClassData;
    
    UPROPERTY(EditAnywhere)
    TArray<FResourcePoolSavegameData> ResourcePools;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FRegionSaveGameData> SavedRegions;
    
    UPROPERTY(EditAnywhere)
    int32 ExperiencePoints;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FGameStatSaveGameData> GameStatsData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FInventoryCategorySaveData> InventoryCategoryList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakInventoryItemSaveGameData> InventoryItems;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FEquippedInventorySaveGameData> EquippedInventoryList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<int32> ActiveWeaponList;
    
    UPROPERTY(VisibleAnywhere)
    FOakPlayerAbilitySaveGameData AbilityData;
    
    UPROPERTY(VisibleAnywhere)
    int32 LastPlayThroughIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 PlaythroughsCompleted;
    
    UPROPERTY(VisibleAnywhere)
    bool bShowNewPlaythroughNotification;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FMissionPlaythroughSaveGameData> MissionPlaythroughsData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPlaythroughActiveFastTravelSaveData> ActiveTravelStationsForPlaythrough;
    
    UPROPERTY(VisibleAnywhere)
    FDiscoverySaveData DiscoveryData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> LastActiveTravelStationForPlaythrough;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FVehicleUnlockedSaveGameData> VehiclesUnlockedData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> VehiclePartsUnlocked;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakCARMenuVehicleConfigSaveData> VehicleLoadouts;
    
    UPROPERTY(VisibleAnywhere)
    int32 VehicleLastLoadoutIndex;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakChallengeSaveGameData> OakChallengeData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakSDUSaveGameData> SDUList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> SelectedCustomizations;
    
    UPROPERTY(VisibleAnywhere)
    TArray<int32> EquippedEmoteCustomizations;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCustomPlayerColorSaveGameData> SelectedColorCustomizations;
    
    UPROPERTY(VisibleAnywhere)
    FCrewQuartersSaveData CrewQuartersRoom;
    
    UPROPERTY(VisibleAnywhere)
    FCrewQuartersGunRackSaveData CrewQuartersGunRack;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FEchoLogSaveGameData> UnlockedEchoLogs;
    
    UPROPERTY(VisibleAnywhere)
    bool bHasPlayedSpecialEchoLogInsertAlready;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FString> NicknameMappings;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FGameStateSaveData> GameStateSaveDataForPlaythrough;
    
    UPROPERTY(VisibleAnywhere)
    FChallengeCategoryProgressSaveData ChallengeCategoryCompletionPcts;
    
    UPROPERTY(VisibleAnywhere)
    FOakPlayerCharacterSlotSaveGameData CharacterSlotSaveGameData;
    
    UPROPERTY(VisibleAnywhere)
    FUITrackingSaveGameData UITrackingSaveGameData;
    
    UPROPERTY(VisibleAnywhere)
    EOakGameStateUIGroupMode PreferredGroupMode;
    
    UPROPERTY(VisibleAnywhere)
    FTimeOfDaySaveGameData TimeOfDayData;
    
    UPROPERTY(Transient)
    UGbxZoneMapFODSaveGameData* ZoneMapFODSavedData;
    
    UPROPERTY(Transient)
    bool bIsNetReplicating;
    
    UPROPERTY(VisibleAnywhere)
    FGuardianRankCharacterSaveGameData CharacterGuardianRank;
    
    UPROPERTY(Transient)
    TArray<FOakChallengeSaveGameData> ProfileChallengeDataForSerialization;
    
    UPROPERTY(VisibleAnywhere)
    bool bOptionalObjectiveRewardFixupApplied;
    
    UPROPERTY(VisibleAnywhere)
    bool bVehiclePartRewardsFixupApplied;
    
    UPROPERTY(VisibleAnywhere)
    bool bLevelledSaveVehiclePartRewardsFixupApplied;
    
    UPROPERTY(VisibleAnywhere)
    uint32 LastActiveLeague;
    
    UPROPERTY(VisibleAnywhere)
    uint32 LastActiveLeagueInstance;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, uint8> ActiveLeagueInstanceForEvent;
    
    UPROPERTY(VisibleAnywhere)
    int32 CurrentVaultCardDaySeed;
    
    UPROPERTY(VisibleAnywhere)
    int32 CurrentVaultCardWeekSeed;
    
private:
    UPROPERTY(EditAnywhere)
    FString PreferredCharacterName;
    
    UPROPERTY(EditAnywhere)
    int32 NameCharacterLimit;
    
    UPROPERTY()
    FGuardianRankSaveGameData GuardianRank;
    
    UPROPERTY()
    FString LastActiveTravelStation;
    
    UPROPERTY()
    FGameStateSaveData GameStateSaveData;
    
    UPROPERTY()
    TArray<FActiveFastTravelSaveData> ActiveTravelStations;
    
public:
    UOakSaveGame();
};


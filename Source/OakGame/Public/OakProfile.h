#pragma once
#include "CoreMinimal.h"
#include "InventorySaveGameData.h"
#include "GbxProfile.h"
#include "EWalkingButtonScheme.h"
#include "EDrivingButtonScheme.h"
#include "EJoystickScheme.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EVehicleInputMode.h"
#include "EPlayerDifficultySetting.h"
#include "OakProfileLastInventoryFilterInfo.h"
#include "OakProfileMenuTutorialInfo.h"
#include "ENetworkType.h"
#include "CrewQuartersDecorationItemSaveGameData.h"
#include "ECrossplayState.h"
#include "EInviteType.h"
#include "EFriendSyncState.h"
#include "EStreamingService.h"
#include "EFriendEventNotificationLifetime.h"
#include "EFriendEventNotificationFrequency.h"
#include "ETradeRequestReceptionType.h"
#include "VaultCardRewardList.h"
#include "UObject/NoExportTypes.h"
#include "ECrosshairColorsEnum.h"
#include "RecentlyMetPlayer.h"
#include "OakFriendEncounterData.h"
#include "GameStatSaveGameData.h"
#include "OakInventoryCustomizationPartInfo.h"
#include "InventoryCategorySaveData.h"
#include "OakMailItem.h"
#include "GearSoldByFriendData.h"
#include "OakSDUSaveGameData.h"
#include "OakCustomizationSaveGameData.h"
#include "GuardianRankProfileData.h"
#include "CrewQuartersRoomItemSaveGameData.h"
#include "OakVaultCardPreviousChallengeData.h"
#include "OakChallengeSaveGameData.h"
#include "GameStat.h"
#include "OakProfile.generated.h"

UCLASS()
class OAKGAME_API UOakProfile : public UGbxProfile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GamepadHipSensitivityLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GamepadZoomedSensitivityLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GamepadVehicleSensitivityLevel;
    
    UPROPERTY()
    float GamepadMovementDeadZoneX;
    
    UPROPERTY()
    float GamepadMovementDeadZoneY;
    
    UPROPERTY()
    float GamepadLookDeadZoneInnerX;
    
    UPROPERTY()
    float GamepadLookDeadZoneOuterX;
    
    UPROPERTY()
    float GamepadLookDeadZoneInnerY;
    
    UPROPERTY()
    float GamepadLookDeadZoneOuterY;
    
    UPROPERTY()
    float GamepadVehicleMovementDeadZoneX;
    
    UPROPERTY()
    float GamepadVehicleMovementDeadZoneY;
    
    UPROPERTY()
    float GamepadVehicleLookDeadZoneInnerX;
    
    UPROPERTY()
    float GamepadVehicleLookDeadZoneOuterX;
    
    UPROPERTY()
    float GamepadVehicleLookDeadZoneInnerY;
    
    UPROPERTY()
    float GamepadVehicleLookDeadZoneOuterY;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, GlobalConfig)
    float GamepadLeftDeadZoneInner;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, GlobalConfig)
    float GamepadLeftDeadZoneOuter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, GlobalConfig)
    float GamepadRightDeadZoneInner;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, GlobalConfig)
    float GamepadRightDeadZoneOuter;
    
    UPROPERTY()
    bool bDefaultDeadZoneInnerUpdated;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadLookAxialDeadZoneScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadMoveAxialDeadZoneScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bGamepadUseAdvancedHipAimSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bGamepadUseAdvancedZoomedAimSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bGamepadUseAdvancedVehicleAimSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadHipYawRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadHipPitchRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadHipExtraYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadHipExtraPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadHipRampUpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadHipRampUpDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadZoomedYawRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadZoomedPitchRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadZoomedExtraYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadZoomedExtraPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadZoomedRampUpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadZoomedRampUpDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadVehicleYawRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadVehiclePitchRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadVehicleExtraYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadVehicleExtraPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadVehicleRampUpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GamepadVehicleRampUpDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIronsightAimAssist;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EWalkingButtonScheme WalkingButtonScheme;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EJoystickScheme WalkingJoystickScheme;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EDrivingButtonScheme DrivingButtonScheme;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EJoystickScheme DrivingJoystickScheme;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseADSScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseVehicleScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bMouseIronsightAimAssist;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EVehicleInputMode VehicleInputMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bWeaponAimToggle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bMantleRequiresButton;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bFixedMinimapRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bFixedInitialZoneMapRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCombatNumberLongFormat;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShowMinimapLegendaries;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bMapInvertPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bMapInvertYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPlayerDifficultySetting Difficulty;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSwapDualWieldControls;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUsePlayerCallouts;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LastStatusMenuPage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOakProfileLastInventoryFilterInfo> InventoryScreenLastFilter;
    
    UPROPERTY()
    FOakProfileMenuTutorialInfo TutorialInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasSeenFirstBoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SubsAndCCSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CCAndSubsBackgroundOpacity;
    
    UPROPERTY()
    TArray<FString> SeenNewsItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ENetworkType DefaultNetworkType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EInviteType DefaultInviteType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ECrossplayState DesiredCrossplayState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EFriendSyncState DesiredFriendSyncState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString MatchmakingRegion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EStreamingService StreamingService;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShiftFirstBoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShiftFirstBootPrimary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIncreasedChanceForSubscribers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRareChestEventEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBadassEventEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinTimeBetweenBadassEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPinataEventEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bMoxxisDrinkEventEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MoxxisDrinkEventBitsProductId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bExtractionEventEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<int32> CitizenScienceLevelProgression;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CitizenScienceActiveBoosterIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CitizenScienceActiveBoosterRemainingTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CitizenScienceActiveBoosterTotalTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CitizenScienceCSBucksAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCitizenScienceHasSeenIntroVideo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCitizenScienceTutorialDone;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StreamerPrimaryActiveBoosterIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StreamerPrimaryActiveBoosterRemainingTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StreamerPrimaryActiveBoosterTotalTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StreamerSecondaryActiveBoosterIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StreamerSecondaryActiveBoosterRemainingTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StreamerSecondaryActiveBoosterTotalTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StreamerBoosterTier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EFriendEventNotificationLifetime FriendEventNotificationLifetime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EFriendEventNotificationFrequency FriendEventNotificationFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETradeRequestReceptionType TradeRequestReceptionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxCachedFriendEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxCachedFriendStatuses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FString> FriendEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FString> FriendStatuses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDateTime LastWhisperFetchEventsTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDateTime LastWhisperFetchStatusesTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasSeenNonStadiaControllerDisclaimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableSubtitles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableClosedCaptions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableAutoCentering;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ECrosshairColorsEnum CrosshairNeutralColorFrame;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ECrosshairColorsEnum CrosshairEnemyColorFrame;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ECrosshairColorsEnum CrosshairAllyColorFrame;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HeadBobScale;
    
    UPROPERTY()
    TArray<FRecentlyMetPlayer> RecentlyMetPlayers;
    
    UPROPERTY()
    TMap<FUniqueNetIdRepl, FOakFriendEncounterData> FriendEncounters;
    
    UPROPERTY()
    int32 MaxFriendEncounterSize;
    
public:
    UPROPERTY()
    TArray<FGameStatSaveGameData> ProfileStatsData;
    
    UPROPERTY()
    TArray<FInventoryCategorySaveData> BankInventoryCategoryList;
    
    UPROPERTY()
    TArray<FInventorySaveGameData> BankInventoryList;
    
    UPROPERTY()
    TArray<FInventorySaveGameData> LostLootInventoryList;
    
    UPROPERTY()
    TArray<FOakMailItem> NPCMailItems;
    
    UPROPERTY()
    TArray<FString> MailGuids;
    
    UPROPERTY()
    TArray<FString> UnreadMailGuids;
    
    UPROPERTY()
    TArray<FGearSoldByFriendData> GearSoldByFriends;
    
    UPROPERTY()
    TArray<FOakSDUSaveGameData> ProfileSDUList;
    
    UPROPERTY()
    TArray<FOakCustomizationSaveGameData> UnlockedCustomizations;
    
    UPROPERTY()
    TArray<FOakInventoryCustomizationPartInfo> UnlockedInventoryCustomizationParts;
    
    UPROPERTY()
    FGuardianRankProfileData GuardianRank;
    
    UPROPERTY()
    TArray<FCrewQuartersDecorationItemSaveGameData> UnlockedCrewQuartersDecorations;
    
    UPROPERTY()
    TArray<FCrewQuartersRoomItemSaveGameData> UnlockedCrewQuartersRooms;
    
    UPROPERTY()
    uint32 LastActiveVaultCardID;
    
    UPROPERTY()
    int32 CurrentVaultCardDaySeed;
    
    UPROPERTY()
    int32 CurrentVaultCardWeekSeed;
    
    UPROPERTY()
    TArray<FVaultCardRewardList> VaultCardRewards;
    
    UPROPERTY()
    TArray<FOakVaultCardPreviousChallengeData> VaultCardPreviousChallenges;
    
    UPROPERTY()
    int32 TotalPlaytimeSeconds;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakChallengeSaveGameData> OakProfileChallengeData;
    
    UPROPERTY(VisibleAnywhere)
    uint32 PlayerSelectedLeague;
    
private:
    UPROPERTY()
    TArray<FGameStat> ProfileStats;
    
public:
    UOakProfile();
};


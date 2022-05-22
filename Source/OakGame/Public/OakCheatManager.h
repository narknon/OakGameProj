#pragma once
#include "CoreMinimal.h"
#include "GbxCheatManager.h"
#include "UObject/NoExportTypes.h"
#include "ENetworkType.h"
#include "EPlayerDifficultySetting.h"
#include "EInviteType.h"
#include "EMultiplayerLootMode.h"
#include "EPickupLootAttachmentMode.h"
#include "GbxMenuInputEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=EOnlineActivityOutcome -FallbackName=EOnlineActivityOutcome
#include "EDebugMatchmakingFailure.h"
#include "OakCheatManager.generated.h"

class UTeam;
class AVehicle;
class USwfMovie;
class UPIEBenchmarkManager;
class UPlayerClassIdentifier;
class UGbxGFxDialogBox;
class AOakCharacter;

UCLASS(Within=OakPlayerController)
class UOakCheatManager : public UGbxCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSoftObjectPath BalanceMeItemPoolList;
    
    UPROPERTY(EditDefaultsOnly)
    UTeam* PlayerOpposingTeam;
    
    UPROPERTY(EditDefaultsOnly)
    UTeam* PlayerTeam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<AVehicle>> DefaultVehicleClass;
    
    UPROPERTY(EditDefaultsOnly)
    FSoftObjectPath VehicleSpawnPoolList;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SimplifiedChineseFontSWF;
    
    UPROPERTY(Transient)
    UPIEBenchmarkManager* PIEBenchmarkManager;
    
    UOakCheatManager();
    UFUNCTION(Exec)
    void WipeRecentlyMetPlayers();
    
    UFUNCTION(Exec)
    void ValidateChallenges();
    
    UFUNCTION(Exec)
    void UpdateStatValue(const FString& StatName, int32 StatValue);
    
    UFUNCTION(Exec)
    void UpdateAchievement(int32 AchievementId, int32 NewValue);
    
    UFUNCTION(Exec)
    void UnregisterModifier(const FName& ModifierName);
    
    UFUNCTION(Exec)
    void UnregisterAllModifiers();
    
    UFUNCTION(Exec)
    void UnlockVaultCardReward(int32 ColumnIndex, int32 RowIndex);
    
    UFUNCTION(Exec)
    void UnlockTVHM();
    
    UFUNCTION(Exec)
    void UnlockAllCustomizations();
    
    UFUNCTION(Exec)
    void UnlockAchievement(int32 AchievementId);
    
    UFUNCTION(Exec)
    void TriggerMissionFastForward();
    
    UFUNCTION(Exec)
    void TrackPreviousMission();
    
    UFUNCTION(Exec)
    void TrackNextMission();
    
    UFUNCTION(Exec)
    void ToggleWeapon();
    
    UFUNCTION(Exec)
    void ToggleVaultCardKeysRequired();
    
    UFUNCTION(Exec)
    void ToggleRenderingScaleform();
    
    UFUNCTION(Exec)
    void ToggleOnlineActivityFeedsTest();
    
    UFUNCTION(Exec)
    void ToggleDualWieldInputSwap();
    
    UFUNCTION(Exec)
    void TestZeppelinQos();
    
    UFUNCTION(Exec)
    void TestXboxStringFilter(int32 UserNum, FString& NameToTest);
    
    UFUNCTION(Exec)
    void TestWriteKraken();
    
    UFUNCTION(Exec)
    void TestVoG();
    
    UFUNCTION(Exec)
    void TestUnlockWeaponTrinkets();
    
    UFUNCTION(Exec)
    void TestUnlockWeaponSkins();
    
    UFUNCTION(Exec)
    void TestTutorialWidgetRemove();
    
    UFUNCTION(Exec)
    void TestTutorialWidget();
    
    UFUNCTION(Exec)
    void TestTribe();
    
    UFUNCTION(Exec)
    void TestTravelNotificationMessage(const FString& TitleString, const FString& PlayerNameString, const FString& DescriptionString);
    
    UFUNCTION(Exec)
    void TestSetDifficultySetting(EPlayerDifficultySetting NewDifficultySetting);
    
    UFUNCTION(Exec)
    void TestSession(const FString& SessionTemplateName);
    
    UFUNCTION(Exec)
    void TestSaveGameInterface();
    
    UFUNCTION(Exec)
    void TestReadOdyssey();
    
    UFUNCTION(Exec)
    void TestReadKraken();
    
    UFUNCTION(Exec)
    void TestRaidNotification(FString& TestAssetPath, uint8 RaidNotificationId, int32 Priority);
    
    UFUNCTION(Exec)
    void TestPreStartDateVaultCard();
    
    UFUNCTION(Exec)
    void TestPresence(const FString& PresenceKey);
    
    UFUNCTION(Exec)
    void TestPlayThrough(int32 PlayThroughOverride);
    
    UFUNCTION(Exec)
    void TestPlayerCount(int32 PlayerCountOverride);
    
    UFUNCTION(Exec)
    void TestParty();
    
    UFUNCTION(Exec)
    void TestOnlineTimedMessage(const FString& TitleString, const FString& PlayerNameString, const FString& DescriptionString, const float Duration);
    
    UFUNCTION(Exec)
    void TestOnlinePendingTradeMessage(const FString& TitleString, const FString& DescriptionString, int32 PlayerIndex);
    
    UFUNCTION(Exec)
    void TestOnlineBlockingMessage(const FString& TitleString, const FString& PlayerNameString, const FString& DescriptionString);
    
    UFUNCTION(Exec)
    void TestOnlineAsyncMessage(const FString& TitleString, const FString& PlayerNameString, const FString& DescriptionString);
    
    UFUNCTION(Exec)
    void TestNotification(FString& TestAssetPath, FString& MessageText, int32 Priority);
    
    UFUNCTION(Exec)
    void TestNetworkTransition(ENetworkType NetworkType, EInviteType InviteType, bool bPrompt);
    
    UFUNCTION(Exec)
    void TestModalTutorial();
    
    UFUNCTION(Exec)
    void TestMatchmakingWidget();
    
    UFUNCTION(Exec)
    void TestMatchmaking(const FString& HopperName, bool bBackfill);
    
    UFUNCTION(Exec)
    void TestLootMode(EMultiplayerLootMode NewLootMode);
    
    UFUNCTION(Exec)
    void TestLoginUI();
    
    UFUNCTION(Exec)
    void TestLevelSyncMessage(const FString& TitleString, const FString& DescriptionString, const float Duration, int32 Repeat);
    
    UFUNCTION(Exec)
    void TestLevelSyncBroadcast(const int32 MessageTypeToTest);
    
    UFUNCTION(Exec)
    void TestLevelSync(int32 NewPlayerLevel);
    
    UFUNCTION(Exec)
    void TestLeaderboards();
    
    UFUNCTION(Exec)
    void TestInitiateDuel();
    
    UFUNCTION(Exec)
    void TestGuardianRankFriendEvent(int32 NewGuardianRank, int32 EnforcerPoints, int32 SurvivorPoints, int32 HunterPoints);
    
    UFUNCTION(Exec)
    void TestGbxRapidjson();
    
    UFUNCTION(Exec)
    void TestGameClip(bool bEnabled);
    
    UFUNCTION(Exec)
    void TestFriendStatus(const FString& Command);
    
    UFUNCTION(Exec)
    void TestFriendsCache(const uint32 PlayerIndex);
    
    UFUNCTION(Exec)
    void TestFriends();
    
    UFUNCTION(Exec)
    void TestFriendEventMessage(const FString& PlayerDisplayName, int32 Level, const FString& ClassDisplayName, const FString& DescriptionString, const FString& ActionString);
    
    UFUNCTION(Exec)
    void TestFriendEvent(int32 Level);
    
    UFUNCTION(Exec)
    void TestFileCache();
    
    UFUNCTION(Exec)
    void TestFeed();
    
    UFUNCTION(Exec)
    void TestExternalUI(const FString& ExternalUIName);
    
    UFUNCTION(Exec)
    void TestExpSyncLevel(int32 ExpSyncLevelOverride);
    
    UFUNCTION(Exec)
    void TestExpPointsForLevel(int32 StartingLevel, int32 EndingLevel);
    
    UFUNCTION(Exec)
    void TestEnableGuardianRankRewards(bool bEnable, int32 RewardIndex);
    
    UFUNCTION(Exec)
    void TestEnableGuardianRankPerks(bool bEnable, int32 PerkIndex);
    
    UFUNCTION(Exec)
    void TestDuelingWidget();
    
    UFUNCTION(Exec)
    void TestDialog();
    
    UFUNCTION(Exec)
    void TestDestroySessionQueue();
    
    UFUNCTION(Exec)
    void TestDeleteAllSaveGames();
    
    UFUNCTION(Exec)
    void TestDamageLevelSync(bool bShouldSyncDamage);
    
    UFUNCTION(Exec)
    void TestCredits();
    
    UFUNCTION(Exec)
    void TestContentInterface();
    
    UFUNCTION(Exec)
    void TestClearPresence();
    
    UFUNCTION(Exec)
    void TestChallengeProgress(bool bUseRealChallenge, int32 TargetValue, int32 MaxValue, bool bShowAsPercent);
    
    UFUNCTION(Exec)
    void TestAttachWeaponToLootable(FName SocketName, EPickupLootAttachmentMode AttachMode);
    
    UFUNCTION(Exec)
    void TestAchievements();
    
    UFUNCTION(Exec)
    void StopMatchmaking();
    
    UFUNCTION(Exec)
    void StopActiveActionSkills();
    
    UFUNCTION(Exec)
    void StartOnlineActivity(const FString& ActivityId);
    
    UFUNCTION(Exec)
    void StartMatchmaking();
    
    UFUNCTION(Exec)
    void StartGuardianRankTracking();
    
    UFUNCTION(Exec)
    void StartDandelion();
    
    UFUNCTION(Exec)
    void SpawnWeaponsForCurrentLootRules(int32 NumWeapons);
    
    UFUNCTION(Exec)
    void SpawnVehicle(const FString& VehicleClassName, float SpawnOffset);
    
    UFUNCTION(Exec)
    void SpawnActorDescription(const FString& Description);
    
    UFUNCTION(Exec)
    void SpamTextChat(int32 NumMessages, const FString& BaseMessage);
    
    UFUNCTION(Exec)
    void SkipDialog(float Radius);
    
    UFUNCTION(Exec)
    void SignUpGearboxAccount(const FString& Email, const FString& Password, const FString& PasswordConfirm);
    
    UFUNCTION(Exec)
    void SignInGearboxAccountD(const FString& Email, const FString& Password, const FString& DisplayName);
    
    UFUNCTION(Exec)
    void SignInGearboxAccount(const FString& Email, const FString& Password);
    
    UFUNCTION(Exec)
    void ShowNATHelp();
    
    UFUNCTION(Exec)
    void ShowCharacterAccuracyPattern(bool bEnabled, float PatternSizeOverride);
    
    UFUNCTION(Exec)
    void SetVaultHunterStatus(int32 Val);
    
    UFUNCTION(Exec)
    void SetUse3DVoG(bool bNewUse3DVoG);
    
    UFUNCTION(Exec)
    void SetSaveGamePlaythroughIndex(int32 PlayThroughIndex);
    
    UFUNCTION(Exec)
    void SetPlayerCustomColor(int32 ColorIndex, float ColorR, float ColorG, float ColorB, bool bUseDefault);
    
    UFUNCTION(Exec)
    void SetOnlineActivityPriority(const FString& ActivityId, int32 Priority);
    
    UFUNCTION(Exec)
    void SetOnlineActivityAvailability(const FString& ActivityId, bool bAvailable);
    
    UFUNCTION(Exec)
    void SetMinimapPrototypePitch(float NewPitch);
    
    UFUNCTION(Exec)
    void SetMenuTutorialsEnabled(bool bEnabled, bool bEnabledInNonGameModes);
    
    UFUNCTION(Exec)
    void SetLaggingMessageVisible(bool bVisible);
    
    UFUNCTION(Exec)
    void SetItemInspectView(bool bChromaKeyBackground, bool bHideUI, bool bHideHint);
    
    UFUNCTION(Exec)
    void SetHudScaleMultiplier(float aHudScaleMultiplier);
    
    UFUNCTION(Exec)
    void SetHasNewMail(bool bHasNewMail);
    
    UFUNCTION(Exec)
    void SetFriendsMeshEnabled(bool bEnabled);
    
    UFUNCTION(Exec)
    void SetChallengesInRoomCompleted();
    
    UFUNCTION(Exec)
    void SetActiveVaultCard(uint32 VaultCardID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCheatSwitchPlayerClass(UPlayerClassIdentifier* NewPlayerClass);
    
    UFUNCTION(Exec)
    void SendTwitchMetadataTestMessage(const FString& TestMessage) const;
    
    UFUNCTION(Exec)
    void SendStatusToWhisper();
    
    UFUNCTION(Exec)
    void SendMail(const FString& PlayerName, const FString& GeraSerialNumber);
    
    UFUNCTION(Exec)
    void SavePlayerProfileToJsonFile(const FString& Filename);
    
    UFUNCTION(Exec)
    void ResetVaultCardData();
    
    UFUNCTION(Exec)
    void ResetVaultCardChallengeCheat();
    
    UFUNCTION(Exec)
    void ResetUnlockedCustomizations();
    
    UFUNCTION(Exec)
    void ResetUITrackingInfo();
    
    UFUNCTION(Exec)
    void ResetStatValue(const FString& InStatName);
    
    UFUNCTION(Exec)
    void ResetSkillScreen();
    
    UFUNCTION(Exec)
    void ResetPreviousVaultCardChallenges();
    
    UFUNCTION(Exec)
    void ResetMissionProgress();
    
    UFUNCTION(Exec)
    void ResetMenuTutorials();
    
    UFUNCTION(Exec)
    void ResetMatchmaking();
    
    UFUNCTION(Exec)
    void ResetGuardianRank();
    
    UFUNCTION(Exec)
    void ResetChallengeProgressByName(const FString& PartialChallengeNameMatch);
    
    UFUNCTION(Exec)
    void ResetAllStatValues();
    
    UFUNCTION(Exec)
    void ResetActionSkillCooldowns();
    
    UFUNCTION(Exec)
    void RerollVaultCardChallenges();
    
    UFUNCTION(Exec)
    void RenameShiftUser(const FString& DisplayName);
    
    UFUNCTION(Exec)
    void RemoveAllPlayerAlerts();
    
    UFUNCTION(Exec)
    void RegisterModifierSet(const FName& ModifierSetName);
    
    UFUNCTION(Exec)
    void RegisterModifier(const FName& ModifierName, const FName& TargetResolverName, const FName& StatusEffectName, const float Value);
    
    UFUNCTION(Exec)
    void RedeemVaultCardReward(int32 ColumnIndex, int32 RowIndex, bool bUnlock);
    
    UFUNCTION(Exec)
    void RedeemVaultCardGearReward(int32 GearIndex);
    
    UFUNCTION(Exec)
    void ReadProfileImage();
    
    UFUNCTION(Exec)
    void ReadPermissions();
    
    UFUNCTION(Exec)
    void ReadDisplayData();
    
    UFUNCTION(Exec)
    void ProcessMail(const FString& MailGuid, bool bAccept);
    
    UFUNCTION(Exec)
    void ProcessLostLoot();
    
    UFUNCTION(Exec)
    void PrintStatValue(const FString& StatName);
    
    UFUNCTION(Exec)
    void PrintNPCMail();
    
    UFUNCTION(Exec)
    void PrintMicropatchSwitches();
    
    UFUNCTION(Exec)
    void PrintMail();
    
    UFUNCTION(Exec)
    void PrintLostLoot();
    
    UFUNCTION(Exec)
    void PrintGearSoldByMe();
    
    UFUNCTION(Exec)
    void PrintGearSoldByFriends();
    
    UFUNCTION(Exec)
    void PrintFriendStatusesJson();
    
    UFUNCTION(Exec)
    void PrintFriendStatusesInProfile();
    
    UFUNCTION(Exec)
    void PrintFriendStatuses();
    
    UFUNCTION(Exec)
    void PrintFriendEventsInProfile();
    
    UFUNCTION(Exec)
    void PrintFriendEvents();
    
    UFUNCTION(Exec)
    void PrintFriendChallengeInfo();
    
    UFUNCTION(Exec)
    void PrintAllStatValues();
    
    UFUNCTION(Exec)
    void PrintAllInProgressChallengeValues();
    
    UFUNCTION(Exec)
    void PrintAllIncompletedChallengeValues();
    
    UFUNCTION(Exec)
    void PrintAllInactiveChallengeValues();
    
    UFUNCTION(Exec)
    void PrintAllCompletedChallengeValues();
    
    UFUNCTION(Exec)
    void PrintAllChallengeValues();
    
    UFUNCTION(Exec)
    void PrintAllActiveChallengeValues();
    
    UFUNCTION(Exec)
    void PlayMenuTutorial(const FName& TutorialName);
    
    UFUNCTION(Exec)
    void PlayerDiscoveryUnlock();
    
    UFUNCTION(Exec)
    void PerformWorldReset();
    
    UFUNCTION(Exec)
    void OverrideVaultCardChestVaultCard(uint32 ColumnIndex, uint32 RowIndex);
    
    UFUNCTION(Exec)
    void OverrideVaultCardChestInventory();
    
    UFUNCTION(Exec)
    void OverrideVaultCardChestCurrency(int32 Amount, const FString& CurrencyInventoryCategoryData);
    
    UFUNCTION(Exec)
    void OverrideMoxxiMaxDuration(float NewMaxDurationInSeconds);
    
    UFUNCTION(Exec)
    void OpenVaultCardChest();
    
    UFUNCTION()
    void OnDialogClicked(UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBalanceMe(AOakCharacter* Character);
    
    UFUNCTION(Exec)
    void NoMaxInventory(bool bEnable);
    
    UFUNCTION(Exec)
    void LogMemSorted(bool bFullLog) const;
    
    UFUNCTION(Exec)
    void LogDetailedMemForObject(const FString& ObjectName) const;
    
    UFUNCTION(Exec)
    void LoadPlayerProfileFromJsonFile(const FString& Filename);
    
    UFUNCTION(Exec)
    void LoadChineseFont();
    
    UFUNCTION(Exec)
    void LoadAllMissions();
    
    UFUNCTION(Exec)
    void LikeFriendEvent(const FString& PlayerName, const FString& EventGuidStr);
    
    UFUNCTION(Exec)
    void LevelRequirementDebug();
    
    UFUNCTION(Exec)
    void LeaveSession(const FString& SessionName);
    
    UFUNCTION(Exec)
    void KillVehicles();
    
    UFUNCTION(Exec)
    void JoinSessionByName(const FString& PlayerId, const FString& InFriendName);
    
    UFUNCTION(Exec)
    void JoinLanGame();
    
    UFUNCTION(Exec)
    void JoinFriendByName(const FString& InFriendName);
    
    UFUNCTION(Exec)
    void InfiniteFFYL();
    
    UFUNCTION(Exec)
    void IncrementStatValue(const FString& InStatName, int32 Amount);
    
    UFUNCTION(Exec)
    void IncrementRandomStats();
    
    UFUNCTION(Exec)
    void IncrementChallengesByName(const FString& PartialChallengeNameMatch, int32 Amount);
    
    UFUNCTION(Exec)
    void IgnorePlayer(const FString& PlayerName, bool bIgnorePlayer);
    
    UFUNCTION(Exec)
    void HideAllOnlineMessages();
    
    UFUNCTION(Exec)
    void GiveForCategory(int32 Amount, const FString& Args);
    
    UFUNCTION(Exec)
    void GetWorstOffenderComponentClass(int32 NbToPrint) const;
    
    UFUNCTION(Exec)
    void GetWorstOffenderActors(int32 NbToPrint, bool bFullLog) const;
    
    UFUNCTION(Exec)
    void GetWorstOffenderActorClass(int32 NbToPrint) const;
    
    UFUNCTION(Exec)
    void GetTickInformationForClass(const FString& ClassName, bool bCheckHeritance, bool bPartialName, bool bFullLog) const;
    
    UFUNCTION(Exec)
    void GetIgnoredPlayers();
    
    UFUNCTION(Exec)
    void GetFarTickingActors(float DistanceToCheck) const;
    
    UFUNCTION(Exec)
    void GetEffectivePlayerCount();
    
    UFUNCTION(Exec)
    void GenerateNewGuid();
    
    UFUNCTION(Exec)
    void FriendStatusDebug(int32 NumDebugFriends, bool bRandomize);
    
    UFUNCTION(Exec)
    void ForceTimeoutAllGameClients();
    
    UFUNCTION(Exec)
    void ForceCreateLocalPlayer();
    
    UFUNCTION(Exec)
    void FinishTestVoG();
    
    UFUNCTION(Exec)
    void FetchStatusesFromWhisper();
    
    UFUNCTION(Exec)
    void FetchMail();
    
    UFUNCTION(Exec)
    void FetchFriendEventsFromWhisper();
    
    UFUNCTION(Exec)
    void FastTravelUnlock(bool bBypassDependencies);
    
    UFUNCTION(Exec)
    void FastTravelLock();
    
    UFUNCTION(Exec)
    void FastTravelBypassDependencies(bool bBypassDependencies);
    
    UFUNCTION(Exec)
    void FakeStreamingEventPoolResult(const FString& EventName, int32 ActionID, int32 ActionValue) const;
    
    UFUNCTION(Exec)
    void FakeStreamingEvent(const FString& EventName);
    
    UFUNCTION(Exec)
    void FakeLateJoin();
    
    UFUNCTION(Exec)
    void ExportMatchmakingModifierData();
    
    UFUNCTION(Exec)
    void EnterPhotoMode();
    
    UFUNCTION(Exec)
    void EnterMfaCode(const FString& str);
    
    UFUNCTION(Exec)
    void EndOnlineActivity(const FString& ActivityId, TEnumAsByte<EOnlineActivityOutcome> Outcome);
    
    UFUNCTION(Exec)
    void EnableWatermarkForStreaming() const;
    
    UFUNCTION(Exec)
    void EnableVoice(bool bEnabled);
    
    UFUNCTION(Exec)
    void EnableGuardianRankSystem(bool bEnable);
    
    UFUNCTION(Exec)
    void EnableCameraMan();
    
    UFUNCTION(Exec)
    void DumpTravelStations();
    
    UFUNCTION(Exec)
    void DumpSaveToJson();
    
    UFUNCTION(Exec)
    void DumpPlayerMissionProgress(const FString& MissionName);
    
    UFUNCTION(Exec)
    void DumpPlayerDebugInfo();
    
    UFUNCTION(Exec)
    void DumpMissionProgress(const FString& MissionName);
    
    UFUNCTION(Exec)
    void DumpGuardianRankAttributes();
    
    UFUNCTION(Exec)
    void DumpAvailableCustomizations();
    
    UFUNCTION(Exec)
    void DumpAnimMemoryInfo(const FString& OutputPath) const;
    
    UFUNCTION(Exec)
    void DisplayActiveBlackMarketMachine();
    
    UFUNCTION(Exec)
    void DiscoverEverything(bool bBypassDependencies);
    
    UFUNCTION(Exec)
    void DiscoverAllLocalLocations();
    
    UFUNCTION(Exec)
    void DisableEquipSlotsForWeapons(bool bEnable);
    
    UFUNCTION(Exec)
    void DeleteAllSaves();
    
    UFUNCTION(Exec)
    void DebugVoiceTestStop();
    
    UFUNCTION(Exec)
    void DebugVoiceTestStart(float OnOffTime, int32 inFakeLoadingScreenPartySize);
    
    UFUNCTION(Exec)
    void DebugTriggerFastTravelTutorial();
    
    UFUNCTION(Exec)
    void DebugStartStreamingInteraction() const;
    
    UFUNCTION(Exec)
    void DebugPlayerStandIn(int32 PlayerStandInActorIndex, const FString& CharacterClass);
    
    UFUNCTION(Exec)
    void DebugOpenPlayerStorage();
    
    UFUNCTION(Exec)
    void DebugOpenModalTutorial(const FString& AssetPath, bool bAllPlayers);
    
    UFUNCTION(Exec)
    void DebugMatchmaking(EDebugMatchmakingFailure Failure, bool bEnabled);
    
    UFUNCTION(Exec)
    void DebugInitStreamingServiceWithClientID(const FString& DebugExtensionClientID) const;
    
    UFUNCTION(Exec)
    void DebugInitStreamingService() const;
    
    UFUNCTION(Exec)
    void DebugFriends();
    
    UFUNCTION(Exec)
    void DebugFakeIsLiveStreaming(bool bFakeIsLiveStreaming) const;
    
    UFUNCTION(Exec)
    void DebugCloseMenus();
    
    UFUNCTION(Exec)
    void DebugClearStreamerBoosters() const;
    
    UFUNCTION(Exec)
    void DeactivateAllModifiers();
    
    UFUNCTION(Exec)
    void CrosshairOffset(float NewValue);
    
    UFUNCTION(Exec)
    void CreateDebugSession(const FString& SessionTemplateName);
    
    UFUNCTION(Exec)
    void CompleteTrackedMission();
    
    UFUNCTION(Exec)
    void CompleteChallengesByName(const FString& PartialChallengeNameMatch);
    
    UFUNCTION(Exec)
    void CompleteChallengesByCategoryName(const FString& PartialChallengeCategoryNameMatch);
    
    UFUNCTION(Exec)
    void ClearTextChatBuffer();
    
    UFUNCTION(Exec)
    void ClearSeenNewsItems();
    
    UFUNCTION(Exec)
    void ClearLostLoot();
    
    UFUNCTION(Exec)
    void ClearGearSoldByMe();
    
    UFUNCTION(Exec)
    void ClearGearSoldByFriends();
    
    UFUNCTION(Exec)
    void ClearFriendStatuses();
    
    UFUNCTION(Exec)
    void ClearFriendEvents();
    
    UFUNCTION(Exec)
    void ClearCameraFade();
    
    UFUNCTION(Exec)
    void CheatIncreaseToMaxInventory() const;
    
    UFUNCTION(Exec)
    void ChangeOnlineActivityLocation(const FString& LocationName);
    
    UFUNCTION(Exec)
    void CancelMatchmaking();
    
    UFUNCTION(Exec)
    void BuildPlayerPath();
    
    UFUNCTION(Exec)
    void BroadcastGearSoldByMe();
    
    UFUNCTION(Exec)
    void BeaconDumpDebugInfo();
    
    UFUNCTION(Exec)
    void AutomaticStartPlotMission();
    
    UFUNCTION(Exec)
    void AskForHelp(bool bAskForHelp);
    
    UFUNCTION(Exec)
    void AnimGameplayDebugger_WatchBPVar(const FString& Arguments);
    
    UFUNCTION(Exec)
    void AnimGameplayDebugger_ClearBPVar();
    
    UFUNCTION(Exec)
    void AllInvTypes() const;
    
    UFUNCTION(Exec)
    void AllInvPartTypes() const;
    
    UFUNCTION(Exec)
    void AdvanceVaultCardHour();
    
    UFUNCTION(Exec)
    void AdvanceVaultCardDay();
    
    UFUNCTION(Exec)
    void AdvanceTrackedMission();
    
    UFUNCTION(Exec)
    void AdvanceBlackMarketMachineWeek();
    
    UFUNCTION(Exec)
    void AddWeaponsToLostLootList(int32 NumWeapons);
    
    UFUNCTION(Exec)
    void AddVaultCardKeys(int32 Amount);
    
    UFUNCTION(Exec)
    void AddVaultCardChests(uint32 Amount);
    
    UFUNCTION(Exec)
    void AddNPCMail();
    
    UFUNCTION(Exec)
    void AddHeldWeaponToLostLootList();
    
    UFUNCTION(Exec)
    void AddHeldWeaponToGearSoldByFriendsList();
    
    UFUNCTION(Exec)
    void ActivateTickOptimizations(bool bActivate) const;
    
    UFUNCTION(Exec)
    void ActivateRandomFastTravel(float DelayTime);
    
    UFUNCTION(Exec)
    void ActivateMission(const FString& MissionName);
    
    UFUNCTION(Exec)
    void ActivateLotsOfMissions(int32 Count);
    
    UFUNCTION(Exec)
    void ActivateAutoTravelThrough(float DelayTime);
    
    UFUNCTION(Exec)
    void ActivateAllModifiers();
    
    UFUNCTION(Exec)
    void ActivateAllChallenges();
    
    UFUNCTION(Exec)
    void AbortActiveActionSkills();
    
};


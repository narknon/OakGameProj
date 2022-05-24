#include "OakPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "RecoilControlComponent.h"
#include "DiscoveryComponent.h"
#include "OakChallengesComponent.h"
#include "VehicleSpawnerComponent.h"
#include "FogOfDiscoveryComponent.h"
#include "OakUseComponent.h"
#include "GameStatsComponent.h"
#include "OakPlayerMissionComponent.h"
#include "PlayerGuardianRankComponent.h"
#include "PlayerShopManagerComponent.h"
#include "WwiseListenerEffectComponent.h"

class UChallenge;
class UGameStatData;
class UEchoLogData;
class AOakHUD;
class AZoneMapViewer;
class UMission;
class UActivityFeedReward;
class ACrewQuartersRoom;
class AOakPlayerState;
class ACatchARide;
class AOakPlayerController;
class UOakCARVehicleData;
class UOakCARVehiclePartData;
class UObject;
class UGFxModalTutorialDataAsset;
class AActor;
class UGbxMenuStack;
class UTravelStationComponentBase;
class UDialogEvent;
class UGFxPCTextChatBuffer;
class AOakInventoryItemPickup;
class UGbxInventoryCategoryData;
class UPlayerClassIdentifier;
class UGbxHUDStateData;
class AGbxCharacter;
class UDynamicRoomBaseData;
class UOakInventoryCustomizationPartData;
class APawn;
class UGbxMenuData;
class AGalaxyMapStation;
class UPlanetData;
class AOakVehicle;
class UUsableComponent;
class UChallengesComponent;
class UOakCustomizationData;
class UCrewQuartersRoomItemData;
class UCrewQuartersDecorationItemData;
class AAdvancedInteractiveObject;
class ACatchARidePlatform;
class UInventoryCategoryData;
class UWeatherTemplate;
class APlayerState;
class URegionData;
class UTutorialMessageDataAsset;
class UCinematicModeData;
class UOakLostLootComponent;
class UGbxDialogComponent;
class UInventoryData;

void AOakPlayerController::WriteProfile() {
}

void AOakPlayerController::UnregisterSavegameDelegates() {
}

void AOakPlayerController::UnlockEchoLog(UEchoLogData* EchoLog) {
}

void AOakPlayerController::UnlockAllVehiclesAndParts_Implementation() {
}
bool AOakPlayerController::UnlockAllVehiclesAndParts_Validate() {
    return true;
}

void AOakPlayerController::TryTradeWithRadialMenuTarget() {
}

void AOakPlayerController::TryInitiateDuel() {
}

void AOakPlayerController::TriggerDisplayMissionRewardsDelegate_Implementation(TSubclassOf<UMission> Mission, FGFxMissionTrackerRewardDisplayData Reward, FGFxMissionTrackerRewardDisplayData OptionalReward) {
}

void AOakPlayerController::ToggleLookingForHelp() {
}

void AOakPlayerController::TextChat(const FString& Msg) {
}

void AOakPlayerController::TempGrantActivityFeedChallengeReward(UActivityFeedReward* Reward, int32 ChallengeLevelTargetValue, int32 ChallengeLevelCompleted) {
}

AZoneMapViewer* AOakPlayerController::SpawnZoneMap() {
    return NULL;
}

void AOakPlayerController::SpawnVehicleFromConfig(int32 GameStage, FOakCARMenuVehicleConfig VehicleConfig, ACatchARide* CARConsole) {
}

void AOakPlayerController::SpawnVehicle_Implementation(int32 GameStage, const UOakCARVehicleData* Vehicle, const TArray<UOakCARVehiclePartData*>& Parts, UObject* CarMenuInterface, FColor Color1, FColor Color2, FColor Color3) {
}
bool AOakPlayerController::SpawnVehicle_Validate(int32 GameStage, const UOakCARVehicleData* Vehicle, const TArray<UOakCARVehiclePartData*>& Parts, UObject* CarMenuInterface, FColor Color1, FColor Color2, FColor Color3) {
    return true;
}

void AOakPlayerController::SpawnMissionVehicle_Implementation(ACatchARide* Console) {
}
bool AOakPlayerController::SpawnMissionVehicle_Validate(ACatchARide* Console) {
    return true;
}

void AOakPlayerController::SpawnCustomReplicatedActor_Implementation(AOakPlayerController* PlayerOwner, UClass* ClassToSpawn, const FTransform& ActorTransform) {
}
bool AOakPlayerController::SpawnCustomReplicatedActor_Validate(AOakPlayerController* PlayerOwner, UClass* ClassToSpawn, const FTransform& ActorTransform) {
    return true;
}

bool AOakPlayerController::ShouldSpectateOnDeath() const {
    return false;
}

void AOakPlayerController::SetupCameraForRaidSpectator() {
}

void AOakPlayerController::SetReRollSourceInventory_Implementation(AActor* InventoryActor) {
}
bool AOakPlayerController::SetReRollSourceInventory_Validate(AActor* InventoryActor) {
    return true;
}

void AOakPlayerController::SetPushToTalkState(bool bPushing) {
}

void AOakPlayerController::SetNonMovementInputLocked(bool bLocked, FName Reason) {
}

void AOakPlayerController::SetMoxxiEventTier_Implementation(int32 Tier) {
}
bool AOakPlayerController::SetMoxxiEventTier_Validate(int32 Tier) {
    return true;
}

void AOakPlayerController::SetLockedCanUseObjects(bool bLocked, FName Reason) {
}

void AOakPlayerController::SetInputLocked(bool bLocked, FName Reason) {
}

void AOakPlayerController::SetHasPlayedSpecialEchoLogInsertAnimationAlready(bool bNewValue) {
}

void AOakPlayerController::SetFocusObject(AActor* FocusActor) {
}

void AOakPlayerController::SetFastTravelLocks(bool bLocked) {
}

void AOakPlayerController::SetEchoMenuLocked(bool bLocked, FName Reason) {
}

void AOakPlayerController::SetCustomViewportViewFlags(int32 ViewFlags, bool bEnabled) {
}

void AOakPlayerController::ServerUpdatePremiumCurrency_Implementation(const UGbxInventoryCategoryData* Category, int32 Quantity) {
}
bool AOakPlayerController::ServerUpdatePremiumCurrency_Validate(const UGbxInventoryCategoryData* Category, int32 Quantity) {
    return true;
}

void AOakPlayerController::ServerSwitchPlayerClass_Implementation(UPlayerClassIdentifier* NewPlayerClass) {
}
bool AOakPlayerController::ServerSwitchPlayerClass_Validate(UPlayerClassIdentifier* NewPlayerClass) {
    return true;
}

void AOakPlayerController::ServerSpawnLostLoot_Implementation(const FString& GearSerialNumber, FSpawnPatternResult SpawnResult) {
}
bool AOakPlayerController::ServerSpawnLostLoot_Validate(const FString& GearSerialNumber, FSpawnPatternResult SpawnResult) {
    return true;
}

void AOakPlayerController::ServerSetWaitingForSaveGameInitialization_Implementation(bool bWaiting) {
}
bool AOakPlayerController::ServerSetWaitingForSaveGameInitialization_Validate(bool bWaiting) {
    return true;
}

void AOakPlayerController::ServerSetTradeRequestReceptionType_Implementation(ETradeRequestReceptionType NewTradeRequestReceptionType) {
}
bool AOakPlayerController::ServerSetTradeRequestReceptionType_Validate(ETradeRequestReceptionType NewTradeRequestReceptionType) {
    return true;
}

void AOakPlayerController::ServerSetRemoteViewportInfo_Implementation(int32 ViewportWidth, int32 ViewportHeight) {
}
bool AOakPlayerController::ServerSetRemoteViewportInfo_Validate(int32 ViewportWidth, int32 ViewportHeight) {
    return true;
}

void AOakPlayerController::ServerSetRemoteDefaultFOV_Implementation(float DefaultFOV) {
}
bool AOakPlayerController::ServerSetRemoteDefaultFOV_Validate(float DefaultFOV) {
    return true;
}

void AOakPlayerController::ServerSetRemoteCrosshairPosition_Implementation(FVector2D ClientCrosshairPosition) {
}
bool AOakPlayerController::ServerSetRemoteCrosshairPosition_Validate(FVector2D ClientCrosshairPosition) {
    return true;
}

void AOakPlayerController::ServerSetRemoteCameraInfo_Implementation(bool bIsFirstPerson) {
}
bool AOakPlayerController::ServerSetRemoteCameraInfo_Validate(bool bIsFirstPerson) {
    return true;
}

void AOakPlayerController::ServerSetReadyForSaveGameChannel_Implementation() {
}
bool AOakPlayerController::ServerSetReadyForSaveGameChannel_Validate() {
    return true;
}

void AOakPlayerController::ServerSetReadyForGameStatChannel_Implementation() {
}
bool AOakPlayerController::ServerSetReadyForGameStatChannel_Validate() {
    return true;
}

void AOakPlayerController::ServerSetMaxSpawnCost_Implementation(int32 InMaxSpawnCost) {
}
bool AOakPlayerController::ServerSetMaxSpawnCost_Validate(int32 InMaxSpawnCost) {
    return true;
}

void AOakPlayerController::ServerSetLateJoinState_Implementation(ELateJoinState InLateJoinState) {
}
bool AOakPlayerController::ServerSetLateJoinState_Validate(ELateJoinState InLateJoinState) {
    return true;
}

void AOakPlayerController::ServerSetFullyAimingAtTarget_Implementation(bool bInClientFullyAimingAtTarget) {
}
bool AOakPlayerController::ServerSetFullyAimingAtTarget_Validate(bool bInClientFullyAimingAtTarget) {
    return true;
}

void AOakPlayerController::ServerSetDuelingEnabled_Implementation(bool bNewDuelingEnabled) {
}
bool AOakPlayerController::ServerSetDuelingEnabled_Validate(bool bNewDuelingEnabled) {
    return true;
}

void AOakPlayerController::ServerSetDifficultySetting_Implementation(EPlayerDifficultySetting NewDifficulty) {
}
bool AOakPlayerController::ServerSetDifficultySetting_Validate(EPlayerDifficultySetting NewDifficulty) {
    return true;
}

void AOakPlayerController::ServerSetCrewQuartersRoomMood_Implementation(ACrewQuartersRoom* InRoom, UDynamicRoomBaseData* RoomToLoad) {
}
bool AOakPlayerController::ServerSetCrewQuartersRoomMood_Validate(ACrewQuartersRoom* InRoom, UDynamicRoomBaseData* RoomToLoad) {
    return true;
}

void AOakPlayerController::ServerSetBulletMagnetismSettings_Implementation(bool bDoBulletMagnetism) {
}
bool AOakPlayerController::ServerSetBulletMagnetismSettings_Validate(bool bDoBulletMagnetism) {
    return true;
}

void AOakPlayerController::ServerSetActiveVaultCardID_Implementation(uint32 VaultCardID) {
}
bool AOakPlayerController::ServerSetActiveVaultCardID_Validate(uint32 VaultCardID) {
    return true;
}

void AOakPlayerController::ServerSendTradeOfferToPlayer_Implementation(AOakPlayerState* PlayerReceivingTradeOffer) {
}
bool AOakPlayerController::ServerSendTradeOfferToPlayer_Validate(AOakPlayerState* PlayerReceivingTradeOffer) {
    return true;
}

void AOakPlayerController::ServerRotateRaidSpectatorTarget_Implementation(bool bNextTarget) {
}
bool AOakPlayerController::ServerRotateRaidSpectatorTarget_Validate(bool bNextTarget) {
    return true;
}

void AOakPlayerController::ServerRequestSwitchSeats_Implementation(APawn* Occupant) {
}
bool AOakPlayerController::ServerRequestSwitchSeats_Validate(APawn* Occupant) {
    return true;
}

void AOakPlayerController::ServerRequestMayhemReload_Implementation(int32 NewMayhemLevel, int32 NewRandomSeed) {
}
bool AOakPlayerController::ServerRequestMayhemReload_Validate(int32 NewMayhemLevel, int32 NewRandomSeed) {
    return true;
}

void AOakPlayerController::ServerRequestActivateCustomPOI_Implementation(UObject* CustomPOIData) {
}
bool AOakPlayerController::ServerRequestActivateCustomPOI_Validate(UObject* CustomPOIData) {
    return true;
}

void AOakPlayerController::ServerRemoveSecondaryStreamerBooster_Implementation(const int32 EffectIndex) {
}
bool AOakPlayerController::ServerRemoveSecondaryStreamerBooster_Validate(const int32 EffectIndex) {
    return true;
}

void AOakPlayerController::ServerRemovePrimaryStreamerBooster_Implementation(const int32 EffectIndex) {
}
bool AOakPlayerController::ServerRemovePrimaryStreamerBooster_Validate(const int32 EffectIndex) {
    return true;
}

void AOakPlayerController::ServerRemoveCitizenScienceBooster_Implementation(const int32 EffectIndex) {
}
bool AOakPlayerController::ServerRemoveCitizenScienceBooster_Validate(const int32 EffectIndex) {
    return true;
}

void AOakPlayerController::ServerRedeemVaultCardGearReward_Implementation(uint32 VaultCardID, int32 GearIndex, bool bRepurchase) {
}
bool AOakPlayerController::ServerRedeemVaultCardGearReward_Validate(uint32 VaultCardID, int32 GearIndex, bool bRepurchase) {
    return true;
}

void AOakPlayerController::ServerProcessVaultCardChestReward_Implementation(uint32 VaultCardID, FSelectedInventoryInfo SelectedInventory) {
}
bool AOakPlayerController::ServerProcessVaultCardChestReward_Validate(uint32 VaultCardID, FSelectedInventoryInfo SelectedInventory) {
    return true;
}

void AOakPlayerController::ServerPlayItemCallout_Implementation(AOakInventoryItemPickup* Pickup) {
}
bool AOakPlayerController::ServerPlayItemCallout_Validate(AOakInventoryItemPickup* Pickup) {
    return true;
}

void AOakPlayerController::ServerPlayIdleDialogInMenu_Implementation(UGbxMenuData* MenuData) {
}
bool AOakPlayerController::ServerPlayIdleDialogInMenu_Validate(UGbxMenuData* MenuData) {
    return true;
}

void AOakPlayerController::ServerPlayIdleDialog_Implementation() {
}
bool AOakPlayerController::ServerPlayIdleDialog_Validate() {
    return true;
}

void AOakPlayerController::ServerPlayerSelectedCharacter_Implementation(const FUniqueNetIdRepl& TargetPlayerId) {
}
bool AOakPlayerController::ServerPlayerSelectedCharacter_Validate(const FUniqueNetIdRepl& TargetPlayerId) {
    return true;
}

void AOakPlayerController::ServerPlayerOpenedCharacterSelect_Implementation() {
}
bool AOakPlayerController::ServerPlayerOpenedCharacterSelect_Validate() {
    return true;
}

void AOakPlayerController::ServerPlaceChosenObject_Implementation(ACrewQuartersRoom* InRoom, UObject* InIO, UObject* ChosenObject) {
}
bool AOakPlayerController::ServerPlaceChosenObject_Validate(ACrewQuartersRoom* InRoom, UObject* InIO, UObject* ChosenObject) {
    return true;
}

void AOakPlayerController::ServerOnUIMenuActivated_Implementation() {
}
bool AOakPlayerController::ServerOnUIMenuActivated_Validate() {
    return true;
}

void AOakPlayerController::ServerOnPlanetSelected_Implementation(AGalaxyMapStation* GalaxyMapStation, UPlanetData* PlanetData) {
}
bool AOakPlayerController::ServerOnPlanetSelected_Validate(AGalaxyMapStation* GalaxyMapStation, UPlanetData* PlanetData) {
    return true;
}

void AOakPlayerController::ServerNotifyTrackedEchoLogPlaybackState_Implementation(UEchoLogData* SetPlayingTrackedEchoLog, bool bPlaying) {
}
bool AOakPlayerController::ServerNotifyTrackedEchoLogPlaybackState_Validate(UEchoLogData* SetPlayingTrackedEchoLog, bool bPlaying) {
    return true;
}

void AOakPlayerController::ServerNotifyLoadingMoviesShown_ForSonyRTMP_Implementation() {
}
bool AOakPlayerController::ServerNotifyLoadingMoviesShown_ForSonyRTMP_Validate() {
    return true;
}

void AOakPlayerController::ServerNotifyLoadingMoviesHidden_ForSonyRTMP_Implementation() {
}
bool AOakPlayerController::ServerNotifyLoadingMoviesHidden_ForSonyRTMP_Validate() {
    return true;
}

void AOakPlayerController::ServerLostLootChanged_Implementation() {
}
bool AOakPlayerController::ServerLostLootChanged_Validate() {
    return true;
}

void AOakPlayerController::ServerJoinedPresenceSession_Implementation(const FString& SessionId) {
}
bool AOakPlayerController::ServerJoinedPresenceSession_Validate(const FString& SessionId) {
    return true;
}

void AOakPlayerController::ServerInterruptTravelToStation_Implementation(ETravelStatus CancelStatus) {
}
bool AOakPlayerController::ServerInterruptTravelToStation_Validate(ETravelStatus CancelStatus) {
    return true;
}

void AOakPlayerController::ServerInitializeLostLootMachine_Implementation(AActor* Actor, int32 Current, int32 Max) {
}
bool AOakPlayerController::ServerInitializeLostLootMachine_Validate(AActor* Actor, int32 Current, int32 Max) {
    return true;
}

void AOakPlayerController::ServerIncrementSendMailStat_Implementation(UGameStatData* Stat) {
}
bool AOakPlayerController::ServerIncrementSendMailStat_Validate(UGameStatData* Stat) {
    return true;
}

void AOakPlayerController::ServerIncrementPhotoModeStylizeStat_Implementation(UGameStatData* Stat) {
}
bool AOakPlayerController::ServerIncrementPhotoModeStylizeStat_Validate(UGameStatData* Stat) {
    return true;
}

void AOakPlayerController::ServerIncrementGameStat_Implementation(UGameStatData* Stat, int32 Amount) {
}
bool AOakPlayerController::ServerIncrementGameStat_Validate(UGameStatData* Stat, int32 Amount) {
    return true;
}

void AOakPlayerController::ServerHintPlayerForNextDialog_Implementation() {
}
bool AOakPlayerController::ServerHintPlayerForNextDialog_Validate() {
    return true;
}

void AOakPlayerController::ServerGearSoldByFriendDataSelected_Implementation(FGearSoldByFriendData SeletedData) {
}
bool AOakPlayerController::ServerGearSoldByFriendDataSelected_Validate(FGearSoldByFriendData SeletedData) {
    return true;
}

void AOakPlayerController::ServerDumpPlayerDebugInfo_Implementation() {
}
bool AOakPlayerController::ServerDumpPlayerDebugInfo_Validate() {
    return true;
}

void AOakPlayerController::ServerCreatePlayerAlert_Implementation(const FUniqueNetIdRepl& InInstigator, AActor* InTargetedActor, FVector InAlertLocation) {
}
bool AOakPlayerController::ServerCreatePlayerAlert_Validate(const FUniqueNetIdRepl& InInstigator, AActor* InTargetedActor, FVector InAlertLocation) {
    return true;
}

void AOakPlayerController::ServerCreatedPresenceSession_Implementation(const FString& SessionId) {
}
bool AOakPlayerController::ServerCreatedPresenceSession_Validate(const FString& SessionId) {
    return true;
}

void AOakPlayerController::ServerClearCurrentAIO_Implementation(bool bImmediate) {
}
bool AOakPlayerController::ServerClearCurrentAIO_Validate(bool bImmediate) {
    return true;
}

void AOakPlayerController::ServerApplySecondaryStreamerBooster_Implementation(const int32 EffectIndex, const float Duration) {
}
bool AOakPlayerController::ServerApplySecondaryStreamerBooster_Validate(const int32 EffectIndex, const float Duration) {
    return true;
}

void AOakPlayerController::ServerApplyPrimaryStreamerBooster_Implementation(const int32 EffectIndex, const float Duration) {
}
bool AOakPlayerController::ServerApplyPrimaryStreamerBooster_Validate(const int32 EffectIndex, const float Duration) {
    return true;
}

void AOakPlayerController::ServerApplyCitizenScienceBooster_Implementation(const int32 EffectIndex, const float Duration) {
}
bool AOakPlayerController::ServerApplyCitizenScienceBooster_Validate(const int32 EffectIndex, const float Duration) {
    return true;
}

void AOakPlayerController::ServerAddGearToInventoryFromSelectedInfo_Implementation(const FSelectedInventoryInfo SelectedInventoryInfo) {
}
bool AOakPlayerController::ServerAddGearToInventoryFromSelectedInfo_Validate(const FSelectedInventoryInfo SelectedInventoryInfo) {
    return true;
}

void AOakPlayerController::ServerAddGearToInventory_Implementation(const FString& GearSerialNumber, EInventoryListType InventoryListType) {
}
bool AOakPlayerController::ServerAddGearToInventory_Validate(const FString& GearSerialNumber, EInventoryListType InventoryListType) {
    return true;
}

void AOakPlayerController::ServerAddCurrency_Implementation(int32 Amount, UGbxInventoryCategoryData* CurrencyType) {
}
bool AOakPlayerController::ServerAddCurrency_Validate(int32 Amount, UGbxInventoryCategoryData* CurrencyType) {
    return true;
}

void AOakPlayerController::ServerAcceptVehicleSeatSwapRequest_Implementation(AOakVehicle* VehicleFrom, int32 FromSeat, int32 ToSeat) {
}
bool AOakPlayerController::ServerAcceptVehicleSeatSwapRequest_Validate(AOakVehicle* VehicleFrom, int32 FromSeat, int32 ToSeat) {
    return true;
}

void AOakPlayerController::ServerAcceptPendingTradeOffer_Implementation(AOakPlayerState* PlayerOfferingTradeState) {
}
bool AOakPlayerController::ServerAcceptPendingTradeOffer_Validate(AOakPlayerState* PlayerOfferingTradeState) {
    return true;
}

void AOakPlayerController::RotateRaidSpectatorTarget(bool bNextTarget) {
}

void AOakPlayerController::ResurrectedDuringCombat(bool bStarted) {
}

void AOakPlayerController::RestoreCameraModeFocus(float BlendOutTime) {
}

void AOakPlayerController::ResourceLockHideFirstPerson(bool bHide, FName Reason) {
}

void AOakPlayerController::ReRollInventoryForNewPart_Implementation(AActor* InventoryActor, const FGameplayTagContainer& DesiredPartTags, bool bMustHaveAllTags) {
}
bool AOakPlayerController::ReRollInventoryForNewPart_Validate(AActor* InventoryActor, const FGameplayTagContainer& DesiredPartTags, bool bMustHaveAllTags) {
    return true;
}

void AOakPlayerController::RegisterSavegameDelegates() {
}

void AOakPlayerController::ReceiveMissionRewards(TSubclassOf<UMission> MissionClass, const FProcessedReward& Reward, const FProcessedReward& OptionalReward) {
}

void AOakPlayerController::ReadProfile() {
}

void AOakPlayerController::RaidSpectatorProcessMouseYawInput(float Val) {
}

void AOakPlayerController::RaidSpectatorProcessMouseScrollInput(float Val) {
}

void AOakPlayerController::RaidSpectatorProcessMousePitchInput(float Val) {
}

void AOakPlayerController::RaidSpectatorProcessGamepadYawInput(float Val) {
}

void AOakPlayerController::RaidSpectatorProcessGamepadRightTrigger(float Val) {
}

void AOakPlayerController::RaidSpectatorProcessGamepadPitchInput(float Val) {
}

void AOakPlayerController::RaidSpectatorProcessGamepadLeftTrigger(float Val) {
}

void AOakPlayerController::QuickSave() {
}

void AOakPlayerController::QuickLoad() {
}

void AOakPlayerController::PlaySwappedSeatDialog_Implementation() {
}

void AOakPlayerController::PlayEquippedEmote(int32 EmoteIndex) {
}

void AOakPlayerController::PauseGame() {
}

void AOakPlayerController::OverrideCameraModeFocus(float BlendInTime, FPostProcessSettings PPSettings) {
}

void AOakPlayerController::OpenStatusMenu(const FName SubMenuId, UObject* SelectionObject) {
}

void AOakPlayerController::OpenShiftFirstBoot() {
}

void AOakPlayerController::OpenQuickMenu() {
}

void AOakPlayerController::OpenPCTextChatMenu() {
}

void AOakPlayerController::OpenMissionLogMenu() {
}

void AOakPlayerController::OpenMapMenu() {
}

void AOakPlayerController::OpenInventoryMenu() {
}

void AOakPlayerController::OpenEchoNetMenu(FName SubmenuName) {
}

void AOakPlayerController::OnUIMenuActivated(UObject* MenuObject) {
}

void AOakPlayerController::OnTextChatLogChanged(UGFxPCTextChatBuffer* TextChatBuffer) {
}

void AOakPlayerController::OnRep_TradeManager() {
}

void AOakPlayerController::OnRep_ReRolledInventoryActor() {
}

void AOakPlayerController::OnRep_ReplicatedCameraModeState() {
}

void AOakPlayerController::OnRep_GearSoldByFriendActor() {
}

void AOakPlayerController::OnRep_CustomReplicatedActor() {
}

void AOakPlayerController::OnMissionDataChanged() {
}

void AOakPlayerController::OnLevelChanged(const int32 OldLevel, const int32 NewLevel) {
}


void AOakPlayerController::OnExperienceAdded(const int32 ExperienceAdded) {
}

void AOakPlayerController::OnCurrentUsableUsabilityChanged(UUsableComponent* NewUseComponent, const FUsabilityInfo& InUsabilityInfo) {
}

void AOakPlayerController::OnCurrentUsableImpactDataChanged(UUsableComponent* NewUsableComponent, FVector NewUsableImpactPoint, float NewUsableDistanceAway) {
}

void AOakPlayerController::OnCurrentUsableChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo, FVector NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway) {
}

void AOakPlayerController::OnConfirmSeatSwap() {
}

void AOakPlayerController::OnCinematicStopped_RetryFadeIn() {
}

void AOakPlayerController::OnCharacterSpawnedInLevel(UTravelStationComponentBase* SpawnedAtStation) {
}

void AOakPlayerController::OnCharacterDied() {
}

void AOakPlayerController::OnChallengeCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) {
}

void AOakPlayerController::OnCameraStyleChanged(FName NewCameraStyle) {
}

void AOakPlayerController::NotifyUncappedExperienceAdded(const int32 ExperienceAdded, EPlayerExperienceSource Source, EPlayerExperienceType Type) {
}

void AOakPlayerController::NotifyPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter) {
}

void AOakPlayerController::NotifyNotIdle() {
}

void AOakPlayerController::NotifyLevelUp(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void AOakPlayerController::NotifyExperienceAdded(const int32 ExperienceAdded, EPlayerExperienceSource Source, EPlayerExperienceType Type) {
}

void AOakPlayerController::MarkInventoryCustomizationPartAsViewed(UOakInventoryCustomizationPartData* CustomizationToTest) {
}

void AOakPlayerController::MarkCustomizationAsViewed(UOakCustomizationData* CustomizationToTest) {
}

void AOakPlayerController::MantleReleased() {
}

void AOakPlayerController::MantlePressed() {
}

void AOakPlayerController::JumpReleased() {
}

void AOakPlayerController::JumpPressed() {
}

bool AOakPlayerController::IsStreamerBuffActive() const {
    return false;
}

bool AOakPlayerController::IsItemAnointed(AActor* InventoryActor) const {
    return false;
}

bool AOakPlayerController::IsInventoryCustomizationPartUnlocked(UOakInventoryCustomizationPartData* CustomizationToTest) const {
    return false;
}

bool AOakPlayerController::IsInventoryCustomizationPartNew(UOakInventoryCustomizationPartData* CustomizationToTest) const {
    return false;
}

bool AOakPlayerController::IsInteractingWithAIO() const {
    return false;
}

bool AOakPlayerController::IsInMenu() {
    return false;
}

bool AOakPlayerController::IsIdle() {
    return false;
}

bool AOakPlayerController::IsCustomizationUnlocked(UOakCustomizationData* CustomizationToTest) {
    return false;
}

bool AOakPlayerController::IsCustomizationNew(UOakCustomizationData* CustomizationToTest) {
    return false;
}

bool AOakPlayerController::IsCrosshairOffCenter() const {
    return false;
}

bool AOakPlayerController::IsCrewQuartersRoomUnlocked(UCrewQuartersRoomItemData* RoomToTest) {
    return false;
}

bool AOakPlayerController::IsCrewQuartersDecorationUnlocked(UCrewQuartersDecorationItemData* DecorationToTest) {
    return false;
}

bool AOakPlayerController::HasPlayedSpecialEchoLogInsertAnimationAlready() const {
    return false;
}

bool AOakPlayerController::HasAnySDUs() const {
    return false;
}

AZoneMapViewer* AOakPlayerController::GetZoneMapViewer() {
    return NULL;
}

UVehicleSpawnerComponent* AOakPlayerController::GetVehicleSpawnerComponent() const {
    return NULL;
}

AOakHUD* AOakPlayerController::GetOakHUD() {
    return NULL;
}

int32 AOakPlayerController::GetNumberOfDiscoveredEridianWritings() {
    return 0;
}

UGbxMenuStack* AOakPlayerController::GetMenuStack() {
    return NULL;
}

int32 AOakPlayerController::GetMaxLostLootSize() {
    return 0;
}

UFogOfDiscoveryComponent* AOakPlayerController::GetFogOfDiscoveryComponent() const {
    return NULL;
}

UDiscoveryComponent* AOakPlayerController::GetDiscoveryComponent() const {
    return NULL;
}

UPlayerClassIdentifier* AOakPlayerController::GetCurrentPlayerClass() const {
    return NULL;
}

int32 AOakPlayerController::GetCurrentLostLootCount() {
    return 0;
}

AAdvancedInteractiveObject* AOakPlayerController::GetCurrentAIO() const {
    return NULL;
}

int32 AOakPlayerController::GetCostToReRollInventoryForNewPart(AActor* InventoryActor) const {
    return 0;
}

void AOakPlayerController::EnterPhotoMode() {
}

void AOakPlayerController::EnsureValidSpectatorTarget() {
}

void AOakPlayerController::DisplayRolloutNotification_Implementation(const FText& Title, const FText& MESSAGE, float Duration) {
}

void AOakPlayerController::DisplayHUDErrorNotification(const FText MESSAGE) {
}

bool AOakPlayerController::DebugLoadGame(const FString& SlotName) {
    return false;
}

void AOakPlayerController::CreatePlayerAlert() {
}

void AOakPlayerController::ClientVehicleUnlock_Implementation(FSoftObjectPath Vehicle) {
}

void AOakPlayerController::ClientVehicleSpawned_Implementation(UObject* CarMenuInterface, ACatchARidePlatform* Platform, AOakVehicle* Vehicle) {
}

void AOakPlayerController::ClientVehiclePartUnlock_Implementation(FSoftObjectPath Part) {
}

void AOakPlayerController::ClientVaultCardChestNoReward_Implementation(uint32 VaultCardID) {
}

void AOakPlayerController::ClientVaultCardChestInventoryReward_Implementation(uint32 VaultCardID, AActor* InventoryActor, FInventoryReplicationData InventoryData) {
}

void AOakPlayerController::ClientVaultCardChestCurrencyReward_Implementation(uint32 VaultCardID, UInventoryCategoryData* CurrencyCategory, int32 Amount) {
}

void AOakPlayerController::ClientUseClientSideCameraUpdates_Implementation(bool bEnabled) {
}

void AOakPlayerController::ClientUnlockInventoryCustomizationPart_Implementation(UOakInventoryCustomizationPartData* CustomizationToUnlock) {
}

void AOakPlayerController::ClientUnlockEchoLog_Implementation(UEchoLogData* EchoLog) {
}

void AOakPlayerController::ClientUnlockCustomization_Implementation(UOakCustomizationData* CustomizationToUnlock) {
}

void AOakPlayerController::ClientUnlockCrewQuartersRoom_Implementation(UCrewQuartersRoomItemData* RoomToUnlock) {
}

void AOakPlayerController::ClientUnlockCrewQuartersDecoration_Implementation(UCrewQuartersDecorationItemData* DecorationToUnlock) {
}

void AOakPlayerController::ClientUnlockAllVehiclesAndParts_Implementation() {
}

void AOakPlayerController::ClientStopWeatherEffects_Implementation() {
}

void AOakPlayerController::ClientStartWeatherEffects_Implementation(const UWeatherTemplate* Template) {
}

void AOakPlayerController::ClientStartOnlineSessionInProgress_Implementation() {
}

void AOakPlayerController::ClientStartCameraFadeAuthoritative_Implementation(float FromAlpha, float ToAlpha, float Duration, FColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
}

void AOakPlayerController::ClientShowPlaceObjectsMenu_Implementation(UGbxMenuData* MenuData, ACrewQuartersRoom* InRoom, UObject* InIO) {
}

void AOakPlayerController::ClientShowMayhemMenu_Implementation() {
}

void AOakPlayerController::ClientShowGamerCardUI_Implementation(APlayerState* RequesteePS) {
}

void AOakPlayerController::ClientShowFastTravelMenu_Implementation() {
}

void AOakPlayerController::ClientShowCrewQuartersMoodMenu_Implementation(UGbxMenuData* MenuData, ACrewQuartersRoom* InRoom) {
}

void AOakPlayerController::ClientShowAllPlayersRequiredMessage_Implementation(bool bIsAlreadyPresentInArea) {
}

void AOakPlayerController::ClientSetSessionInviteFlags_Implementation(bool bAllowInvites, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly) {
}

void AOakPlayerController::ClientSetMenuStackHidden_Implementation(bool bInStackHidden) {
}

void AOakPlayerController::ClientSetHasSeenFastTravelPrompt_Implementation(bool HasSeen) {
}

void AOakPlayerController::ClientSetCustomViewportViewFlags_Implementation(int32 ViewFlags, bool bEnabled) {
}

void AOakPlayerController::ClientSetCurrentAIO_Implementation(AAdvancedInteractiveObject* NewAIO, bool bInstant) {
}

void AOakPlayerController::ClientSetBoundaryWarningState_Implementation(bool bWarningActive) {
}

void AOakPlayerController::ClientSelectGearSoldByFriendData_Implementation() {
}

void AOakPlayerController::ClientResetRegionStage_Implementation(URegionData* REGION) {
}

void AOakPlayerController::ClientRequestVehicleSeatSwap_Implementation(AOakVehicle* VehicleFrom, int32 FromSeat, int32 ToSeat) {
}

void AOakPlayerController::ClientRemoveTutorialMessage_Implementation(UTutorialMessageDataAsset* MessageData) {
}

void AOakPlayerController::ClientPushHUDState_Implementation(UCinematicModeData* InCinematicMode) {
}

void AOakPlayerController::ClientProcessLostLoot_Implementation(UOakLostLootComponent* LostLootComponent) {
}

void AOakPlayerController::ClientPostChallengeUnlockActivityFeed_Implementation(UActivityFeedReward* FeedData, int32 ChallengeLevelTargetValue, int32 ChallengeLevelCompleted) {
}

void AOakPlayerController::ClientPlayLocalCallout_Implementation(UDialogEvent* CalloutEvent) {
}

void AOakPlayerController::ClientPlayerSelectedCharacter_Implementation(const FUniqueNetIdRepl& TargetPlayerId) {
}

void AOakPlayerController::ClientPlayerJoinedPresenceSession_Implementation(const FUniqueNetIdRepl& JoinedPlayerId, const FString& SessionId) {
}

void AOakPlayerController::ClientPlayerDisplayDataChanged_Implementation(AOakPlayerState* InPlayerState) {
}

void AOakPlayerController::ClientPlayAndTrackEchoLog_Implementation(UEchoLogData* EchoLog, UGbxDialogComponent* PlayOnSpeaker) {
}

void AOakPlayerController::ClientPartyKick_Implementation(EKickReason Reason) {
}

void AOakPlayerController::ClientOpenMenu_Implementation(UGbxMenuData* MenuData) {
}

void AOakPlayerController::ClientOpenItemInspect_Implementation(AOakInventoryItemPickup* Item, UInventoryData* InventoryData) {
}

void AOakPlayerController::ClientOnHandleNewPlayer_Implementation() {
}

void AOakPlayerController::ClientNotifyVaultCardGearRewardRedeemed_Implementation(uint32 VaultCardID, int32 GearIndex) {
}

void AOakPlayerController::ClientNotifyNewGameStarted_Implementation() {
}

void AOakPlayerController::ClientNotifyLoadPlayerClass_Implementation(UPlayerClassIdentifier* NewPlayerClass) {
}

void AOakPlayerController::ClientNotifyKilledActor_Implementation() {
}

void AOakPlayerController::ClientNotifyClassSwitch_Implementation(UPlayerClassIdentifier* NewPlayerClass) {
}

void AOakPlayerController::ClientMissionVehicleSpawned_Implementation(ACatchARidePlatform* Platform, AOakVehicle* Vehicle) {
}

void AOakPlayerController::ClientLostLootSpawned_Implementation(const FString& GearSerialNumber) {
}

void AOakPlayerController::ClientJoinPresenceSession_Implementation(const FString& SessionId) {
}

void AOakPlayerController::ClientInitializeLostLootMachine_Implementation(AActor* Actor) {
}

void AOakPlayerController::ClientGotoPreviousState_Implementation() {
}

void AOakPlayerController::ClientGoToHUDState_Implementation(const UGbxHUDStateData* State) {
}

void AOakPlayerController::ClientDoLateJoinFadeIn_Implementation() {
}

void AOakPlayerController::ClientDisplayTravelFailureMessage_Implementation(const EPOIActivationResult& TravelFailureMessage, AOakPlayerState* BlockerPlayerState) {
}

void AOakPlayerController::ClientDisplaySentTradeOffer_Implementation(bool Success, AOakPlayerState* PlayerReceivingTradeOffer) {
}

void AOakPlayerController::ClientDisplayPendingTradeOffer_Implementation(AOakPlayerState* PlayerOfferingTradeState) {
}

void AOakPlayerController::ClientDisplayHUDErrorNotification_Implementation(const FText& MESSAGE) {
}

void AOakPlayerController::ClientCreatePresenceSession_Implementation(const FString& SparkFriendPasscode) {
}

void AOakPlayerController::ClientCreatePlayerAlert_Implementation(const FUniqueNetIdRepl& InInstigator, AActor* InTargetedActor, FVector InAlertLocation) {
}

void AOakPlayerController::ClientCloseMenu_Implementation(UGbxMenuData* MenuData) {
}

void AOakPlayerController::ClientCloseAllMenus_Implementation() {
}

void AOakPlayerController::ClientClearToDefaultHUDState_Implementation() {
}

void AOakPlayerController::ClientClearMenus_Implementation() {
}

void AOakPlayerController::ClientCleanCinematicState_Implementation(UCinematicModeData* InCinematicMode) {
}

void AOakPlayerController::ClientCancelCameraFadeAuthoritative_Implementation() {
}

void AOakPlayerController::ClientBroadcastSlotMachineJackpotFriendEvent_Implementation() {
}

void AOakPlayerController::ClientBroadcastOpenedGoldenChestFriendEvent_Implementation() {
}

void AOakPlayerController::ClientBroadcastFriendGearPurchasedFriendEvent_Implementation() {
}

void AOakPlayerController::ClientApplyCachedSaveGame_Implementation(float OptionalFadeOutDuration) {
}

void AOakPlayerController::ClientAddTutorialMessage_Implementation(UTutorialMessageDataAsset* MessageData) {
}

void AOakPlayerController::ClientAddPremiumCurrency_Implementation(int32 Amount, UGbxInventoryCategoryData* CurrencyType) {
}

void AOakPlayerController::ClientAddModalTutorialMessage_Implementation(UGFxModalTutorialDataAsset* MessageData) {
}

void AOakPlayerController::Client_NotifyCombatEncounterEnded_Implementation(const FPlayerCombatEncounterData& CombatEncounterData) const {
}

void AOakPlayerController::ClearSavegame() {
}

void AOakPlayerController::CheckDebugMenuIsOpen(bool bIsBeingDestroyed) {
}

void AOakPlayerController::ChallengesRegistered() {
}

ECanReRollInventoryResult AOakPlayerController::CanReRollInventoryForNewPart(AActor* InventoryActor) const {
    return ECanReRollInventoryResult::Yes;
}

bool AOakPlayerController::CanOpenStatusMenu(FText& Reason) {
    return false;
}

void AOakPlayerController::CancelReRolledInventory_Implementation() {
}
bool AOakPlayerController::CancelReRolledInventory_Validate() {
    return true;
}

void AOakPlayerController::BroadcastGearSoldByMe(bool bOverrideDelay) {
}

void AOakPlayerController::AttemptSpottedEnemyCalloutForTargetPerceptionChange(AActor* Actor, FAIStimulus Stimulus) {
}

void AOakPlayerController::AddUnlockedInventoryCustomizationPart(UOakInventoryCustomizationPartData* CustomizationToAdd) {
}

void AOakPlayerController::AddUnlockedCustomization(UOakCustomizationData* CustomizationToAdd) {
}

void AOakPlayerController::AddUnlockedCrewQuartersRoom(UCrewQuartersRoomItemData* RoomToAdd) {
}

void AOakPlayerController::AddUnlockedCrewQuartersDecoration(UCrewQuartersDecorationItemData* DecorationToAdd) {
}

void AOakPlayerController::AddNPCMailItemFromTableRowHandle_Implementation(const FDataTableRowHandle& RowHandle) {
}

void AOakPlayerController::AddNPCMailItemFromTableRow_Implementation(const FOakNPCMailDataEntry& NPCMailData) {
}

void AOakPlayerController::AcceptReRolledInventory_Implementation() {
}
bool AOakPlayerController::AcceptReRolledInventory_Validate() {
    return true;
}

void AOakPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakPlayerController, GearSoldByFriendActor);
    DOREPLIFETIME(AOakPlayerController, TradeManager);
    DOREPLIFETIME(AOakPlayerController, ReplicatedCameraModeState);
    DOREPLIFETIME(AOakPlayerController, bInfiniteAmmo);
    DOREPLIFETIME(AOakPlayerController, CustomReplicatedActor);
    DOREPLIFETIME(AOakPlayerController, MoxxisEventTier);
    DOREPLIFETIME(AOakPlayerController, ReRolledInventoryActor);
}

AOakPlayerController::AOakPlayerController() {
    this->OakCharacter = NULL;
    this->OakFirstPersonComponent = NULL;
    this->CurrentSavegame = NULL;
    this->SaveGameChannel = NULL;
    this->bClientWaitingForFullSaveGameInitialization = false;
    this->ExperiencePointsLoadedFromSaveGame = 0;
    this->TimePlayedSecondsLoadedFromSaveGame = 0;
    this->TimePlayedSeconds = 0;
    this->CurrentPlayerClass = NULL;
    this->SkillTreeSubMenuClassPtr = NULL;
    this->OakHUD = NULL;
    this->MenuStack = NULL;
    this->DifficultySetting = EPlayerDifficultySetting::Normal;
    this->bHasActivityFeedRequestInFlight = false;
    this->NextAllowedActivityFeedPostTime = 0.00f;
    this->NewGameFlow = NULL;
    this->TradingMenu = NULL;
    this->CurrentRaidSpectatorTarget = NULL;
    this->CachedEchoLogData = NULL;
    this->UseComponent = CreateDefaultSubobject<UOakUseComponent>(TEXT("UseComp"));
    this->GameStatsComponent = CreateDefaultSubobject<UGameStatsComponent>(TEXT("GameStatsComp"));
    this->PlayerMissionComponent = CreateDefaultSubobject<UOakPlayerMissionComponent>(TEXT("PlayerMissionComp"));
    this->DiscoveryComponent = CreateDefaultSubobject<UDiscoveryComponent>(TEXT("DiscoveryComp"));
    this->VehicleSpawnerComponent = CreateDefaultSubobject<UVehicleSpawnerComponent>(TEXT("VehicleSpawnerComp"));
    this->PlayerGuardianRankComponent = CreateDefaultSubobject<UPlayerGuardianRankComponent>(TEXT("PlayerGuardianRankComponent"));
    this->FoDComponent = CreateDefaultSubobject<UFogOfDiscoveryComponent>(TEXT("FoDComponent"));
    this->RecoilControlComponent = CreateDefaultSubobject<URecoilControlComponent>(TEXT("RecoilControlComponent"));
    this->ShopManagerComponent = CreateDefaultSubobject<UPlayerShopManagerComponent>(TEXT("ShopManagerComponent"));
    this->ChallengesComponent = CreateDefaultSubobject<UOakChallengesComponent>(TEXT("ChallengesComponent"));
    this->WwiseListenerEffectComponent = CreateDefaultSubobject<UWwiseListenerEffectComponent>(TEXT("WwiseListenerEffectComponent"));
    this->bBoundaryWarningActive = false;
    this->CachedUsableTarget = NULL;
    this->CachedUsableDistanceAway = 0.00f;
    this->bAddDefaultBindings = true;
    this->bJumpingUncrouchesThenJumps = false;
    this->MantleAnalogInputThreshold = 0.30f;
    this->MinPassiveMantleButtonHoldDuration = 0.08f;
    this->AutoRespawnDelay = -1.00f;
    this->RaidSpectatorInputComponent = NULL;
    this->SpawnedZoneMap = NULL;
    this->CurrentLevelFogOfDiscovery = NULL;
    this->MissionDeliveryMenuData = NULL;
    this->GearSoldByFriendActor = NULL;
    this->LateJoinStandIn_DigistructEffect = NULL;
    this->LateJoinStandIn_DigistructOutEffect = NULL;
    this->LateJoinStandIn_HoloEffect = NULL;
    this->LateJoinStandIn = NULL;
    this->TriggerFeedbackStates.AddDefaulted(2);
    this->OakAimAssistStrategy = NULL;
    this->AimAssistParameters = NULL;
    this->DefaultAimAssistParameters = NULL;
    this->MoveAxialDeadZoneBegin = 0.50f;
    this->MoveAxialDeadZoneRatio = 1.00f;
    this->CurrentOakProfile = NULL;
    this->bFullyAimingAtTarget = false;
    this->bAimingAtShootableObject = false;
    this->UIManager = NULL;
    this->OakPlayerCameraManager = NULL;
    this->MenusToPreserveInDownState.AddDefaulted(1);
    this->bAllowForegroundFocusEffect = true;
    this->TradeManager = NULL;
    this->CurrentFocusObject = NULL;
    this->GamepadViewScale = 2.00f;
    this->GamepadZoomScale = 0.66f;
    this->MouseViewScale = 1.00f;
    this->MouseZoomScale = 1.00f;
    this->bInfiniteAmmo = false;
    this->CombatEncounterEndedDelay = 3.00f;
    this->CachedPrimaryCharacter = NULL;
    this->bBeingTargeted = false;
    this->bOverrideCrosshairScreenPosition = false;
    this->LoadingCharacterDialog = NULL;
    this->TimeSinceLastMovement = 0.00f;
    this->EchoNetParticleBackdrop = NULL;
    this->CurrentAIO = NULL;
    this->PendingFinalizeAIO = NULL;
    this->WorldSpaceWeatherEffect = NULL;
    this->CustomReplicatedActor = NULL;
    this->MoxxisEventTier = 0;
    this->GameStatChannel = NULL;
    this->ScreenLiquidParticleTemplate = NULL;
    this->ScreenLiquidOpacityBlendInTime = 0.50f;
    this->ScreenLiquidOpacityBlendOutTime = 3.00f;
    this->ScreenLiquidColorTransitionTime = 0.50f;
    this->PausedStateInputComponent = NULL;
    this->LateJoinFadeDuration = 0.50f;
    this->ZoneMapFODSavedData = NULL;
    this->ScreenFadeInParticleTemplate = NULL;
    this->AutoCenteringAngle = 30.00f;
    this->AutoCenteringDelay = 0.60f;
    this->AutoCenteringInterpolationSpeed = 45.00f;
    this->AutoCenteringMinMovementSpeed = 100.00f;
    this->AutoCenteringCurrentDuration = 0.00f;
    this->AutoCenteringEaseInDuration = 0.50f;
    this->AutoCenteringEaseOutDuration = 0.50f;
    this->MinimapRenderTarget = NULL;
    this->ReRolledInventoryActorSource = NULL;
    this->ReRolledInventoryActor = NULL;
    this->PlayerSelectedLeague = 0;
}


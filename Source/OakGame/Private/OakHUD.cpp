#include "OakHUD.h"

class UHUDNotificationAsset;
class UGFxBossBar;
class UGbxHUDStateData;
class AWeapon;
class AOakPlayerController;
class UWwiseEvent;
class UGameInstance;
class UOakPlayerAbilitySlotData;
class UGbxInventoryCategoryData;
class UGbxAbility;

void AOakHUD::TriggerContextualPrompt() {
}

void AOakHUD::StateChanged(const UGbxHUDStateData* OldState, const UGbxHUDStateData* NewState) {
}

void AOakHUD::SetWeaponAsDebugTarget(int32 Slot) {
}

void AOakHUD::SetHUDVisible(AOakPlayerController* OakPlayerController, bool bVisible) {
}

void AOakHUD::RegisterGFxBossBar(const UGFxBossBar* NewBossBar) {
}

void AOakHUD::PopCurrentHUDStateForAllPlayers(UGameInstance* GameInstance) {
}

void AOakHUD::OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) {
}

void AOakHUD::OnVaultRewardReceived(EVaultRewardType VaultRewardType) {
}

void AOakHUD::OnPlayerAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData) {
}

void AOakHUD::OnFFYLStopped() {
}

void AOakHUD::OnAreaEntered(FText DisplayText, UWwiseEvent* DiscoverySound) {
}

void AOakHUD::OnAreaDiscovered(FText DisplayText, UWwiseEvent* DiscoverySound) {
}

void AOakHUD::OnAbilityRemoved(UGbxAbility* Ability) {
}

void AOakHUD::OnAbilityAdded(UGbxAbility* Ability) {
}

void AOakHUD::LoadDisplayedNotificationMenu() {
}

bool AOakHUD::IsContextSensitivePromptActive() {
    return false;
}

void AOakHUD::GotoHUDStateForAllPlayers(UGameInstance* GameInstance, UGbxHUDStateData* State, bool bSetForLateJoin) {
}

void AOakHUD::DisplayRolloutNotification(const FText& Title, const FText& MESSAGE, float Duration) {
}

void AOakHUD::DisplayNotificationWithId(UHUDNotificationAsset* Asset, const uint8 RaidNotificationId, const FText MessageText, const int32 NotificationPriority, UClass* TrackedNotificationTarget, bool bMakeActiveImmediately, bool bAbortIfNotImmediatelyActive) {
}

void AOakHUD::DisplayNotification(UHUDNotificationAsset* Asset, const FText MessageText, const int32 NotificationPriority, UClass* TracketNotificationTarget, bool bMakeActiveImmediately) {
}

void AOakHUD::DisplayErrorNotification(const FText MessageText) {
}

void AOakHUD::DisplayCurrencyWidget(UGbxInventoryCategoryData* CurrencyType) {
}

void AOakHUD::DebugShowNotification(const FString& NotificationType, const FString& Text) {
}

void AOakHUD::ClearNotifications() {
}

void AOakHUD::BeginContextSensitivePromptHeld() {
}

void AOakHUD::ActivateCheckpoint() {
}

void AOakHUD::AbortContextSensitivePromptHeld() {
}

AOakHUD::AOakHUD() {
    this->OakPlayerOwner = NULL;
    this->DeathFadeToBlackTime = 1.00f;
    this->TimeSinceDeath = 0.00f;
    this->ChallengeProgressWidget = NULL;
    this->TutorialMessageWidget = NULL;
    this->CutsceneSkipFont = NULL;
    this->GFxBossBar = NULL;
    this->bSuppressAllNotifications = false;
    this->bListenForDisplayedNotificationMenu = false;
}


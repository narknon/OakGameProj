#include "OakGameInstance.h"
#include "Templates/SubclassOf.h"
#include "OakDiscordManager.h"
#include "OakManagedActorManager.h"
#include "OakDialogSystemCustomization.h"

class UMatchmakingTest;
class UObject;
class UGbxGFxDialogBox;
class UEchoLogData;
class AActor;
class UGbxDialogComponent;
class URegionData;
class UOakManagedActorDefinition;
class AOakInventoryItemPickup;
class UWwiseEvent;

void UOakGameInstance::UpdateMainMenuPlayerStandIns() {
}

void UOakGameInstance::StopMatchmakingTest() {
}

void UOakGameInstance::StartMatchmakingTest(TSubclassOf<UMatchmakingTest> InMatchmakingTest) {
}

bool UOakGameInstance::ShouldStartNewGameFlow(UObject* WorldContextObject) {
    return false;
}

void UOakGameInstance::SetSplitscreenViewportEnabled(const bool bEnabled) {
}

void UOakGameInstance::ServerPartyListenToECHOData_Implementation(UEchoLogData* EchoLogData, UGbxDialogComponent* PlayOnSpeaker) {
}
bool UOakGameInstance::ServerPartyListenToECHOData_Validate(UEchoLogData* EchoLogData, UGbxDialogComponent* PlayOnSpeaker) {
    return true;
}

void UOakGameInstance::SendPlayerAreaObjectStartedEvent(UObject* WorldContextObject) {
}

void UOakGameInstance::ResetRegionStage(URegionData* REGION) {
}

void UOakGameInstance::RemovePlayerAlert(AActor* TargetedActor) {
}

void UOakGameInstance::RemoveManagedActor(AActor* TheActor, bool bDestroyActor) {
}

void UOakGameInstance::OnTrialErrorMessageClicked(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnSplitscreenDialogDismissed(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnShiftReportReasonSelected(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnRemoveShiftFriendConfirmed(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnRemoveFriendConfirmed(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnProfileErrorMessageClicked(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnNATHelpChoiceMade(UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnModalDialogChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnHandleUnpairedMenuInput(const FGbxMenuInputEvent& InputEvent) {
}

void UOakGameInstance::OnControllerDisconnectClicked(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnConfirmSplitscreenLeave(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnConfirmSignIntoAccount(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnConfirmMatchClicked(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnConfirmKickPlayer(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnConfirmKickNetworkedPlayersForJoin(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnConfirmDisconnect(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnConfirmApplyMicropatches(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakGameInstance::OnBlockUserConfirmed(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

bool UOakGameInstance::IsMenuLevel() const {
    return false;
}

int32 UOakGameInstance::GetManagedActorCount(UOakManagedActorDefinition* Type, AActor* TheOwner) {
    return 0;
}

void UOakGameInstance::DebugSplitscreenLeave(uint32 ControllerId) {
}

void UOakGameInstance::DebugSplitscreenJoin(uint32 ControllerId) {
}

void UOakGameInstance::AddPickupAudioStinger(AOakInventoryItemPickup* Pickup, UWwiseEvent* Sound) {
}

void UOakGameInstance::AddPickupAudioCue(AActor* SoundActor, UWwiseEvent* Sound) {
}

void UOakGameInstance::AddManagedActor(AActor* TheActor, UOakManagedActorDefinition* Type, AActor* TheOwner) {
}

UOakGameInstance::UOakGameInstance() {
    this->OakSingletons = NULL;
    this->GbxMenuInput = NULL;
    this->UIControllerDisconnectManager = NULL;
    this->PCTextChatBuffer = NULL;
    this->DevMapToMapIds.AddDefaulted(75);
    this->PlayerClassToClassIds.AddDefaulted(4);
    this->LoadingScreenFadeTime = 0.50f;
    this->LobbyBeaconTemplateName = TEXT("LobbyBeaconTrafficUdp");
    this->MatchmakingBeaconTemplateName = TEXT("MatchmakingBeaconTrafficUdp");
    this->FallbackLaunchSaveGameMapName = TEXT("/Game/Maps/Zone_0/Recruitment/Recruitment_P");
    this->bHideShiftUsersWhenCrossplayIsToggledOff = false;
    this->bRestrictShiftSessionInvitesWhenCrossplayIsToggledOff = true;
    this->bRestrictCrossPlatformJoinsWhenCrossplayIsToggledOff = false;
    this->ManagedActorManager = CreateDefaultSubobject<UOakManagedActorManager>(TEXT("ManagedActorManager"));
    this->bIsPlayerVersusPlayerCollisionEnabled = false;
    this->OakDialogSystemCustomization = CreateDefaultSubobject<UOakDialogSystemCustomization>(TEXT("OakDialogSystemCustomization"));
    this->bHasSelectedInitialPlayer = false;
    this->MatchmakingTest = NULL;
    this->OnlineStatsHelper = NULL;
    this->StatsHelperInst = NULL;
    this->ModifierManagers.AddDefaulted(2);
    this->DiscordManager = CreateDefaultSubobject<UOakDiscordManager>(TEXT("DiscordManager"));
    this->PresenceUpdateTimerSeconds = 60.00f;
    this->bRefreshPresenceOnSessionUpdates = true;
    this->CooldownBeforeNextLootAudioStinger = 0.00f;
}


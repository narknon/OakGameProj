#include "OakPlayerMissionComponent.h"
#include "Templates/SubclassOf.h"

class APawn;
class UMission;
class AOakPlayerController;
class AWeapon;
class AActor;
class UMissionObjective;
class UGbxGFxDialogBox;

void UOakPlayerMissionComponent::ServerRequestMissionData_Implementation() {
}
bool UOakPlayerMissionComponent::ServerRequestMissionData_Validate() {
    return true;
}

void UOakPlayerMissionComponent::ServerNotifyMissionDeliveryChoice_Implementation(bool bMissionAccepted, TSubclassOf<UMission> Mission, AActor* MissionGiver) {
}
bool UOakPlayerMissionComponent::ServerNotifyMissionDeliveryChoice_Validate(bool bMissionAccepted, TSubclassOf<UMission> Mission, AActor* MissionGiver) {
    return true;
}

void UOakPlayerMissionComponent::ServerGrantStarterGear_Implementation(UMissionObjective* MissionObjective, TSubclassOf<UMission> MissionClass) {
}
bool UOakPlayerMissionComponent::ServerGrantStarterGear_Validate(UMissionObjective* MissionObjective, TSubclassOf<UMission> MissionClass) {
    return true;
}

void UOakPlayerMissionComponent::ServerGrantMissionWeapon_Implementation(TSubclassOf<UMission> MissionClass) {
}
bool UOakPlayerMissionComponent::ServerGrantMissionWeapon_Validate(TSubclassOf<UMission> MissionClass) {
    return true;
}

void UOakPlayerMissionComponent::ServerApplyMissionRewards_Implementation(TSubclassOf<UMission> MissionClass) {
}
bool UOakPlayerMissionComponent::ServerApplyMissionRewards_Validate(TSubclassOf<UMission> MissionClass) {
    return true;
}

void UOakPlayerMissionComponent::OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) {
}

void UOakPlayerMissionComponent::OnPawnChanged(APawn* Pawn, APawn* OldPawn) {
}

void UOakPlayerMissionComponent::OnMissionFastForwardPossible() {
}

void UOakPlayerMissionComponent::OnMissionDeliveryChoice(bool bMissionAccepted, bool bEmergencyExit, int32 MissionIndex, AActor* MissionGiver) {
}

void UOakPlayerMissionComponent::OnFastForwardDialogClicked(UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) {
}

void UOakPlayerMissionComponent::ClientUnlockAssociatedAchievement_Implementation(AOakPlayerController* OakPC, int32 AchievementId) {
}

void UOakPlayerMissionComponent::ClientReceiveMissionData_Implementation(const FReplicatedMissionData& MissionData) {
}

void UOakPlayerMissionComponent::ClientMissionKickoffPlayed_Implementation(TSubclassOf<UMission> MissionClass) {
}

void UOakPlayerMissionComponent::ClientInitiateMissionDelivery_Implementation(const FMissionDeliveryData& DeliveryData) {
}

UOakPlayerMissionComponent::UOakPlayerMissionComponent() {
    this->CachedPlaythroughIndex = -1;
    this->PlaythroughsCompleted = 0;
    this->bShowNewPlaythroughNotification = false;
}


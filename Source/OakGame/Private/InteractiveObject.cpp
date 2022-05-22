#include "InteractiveObject.h"
#include "Net/UnrealNetwork.h"

class UAnimationAsset;

void AInteractiveObject::SetGbxUserState(FName VariableName, uint8 Value) {
}

void AInteractiveObject::ResetTrapBrokenState() {
}

void AInteractiveObject::OnTrapTriggerStateChanged(bool bTriggerActivated) {
}



void AInteractiveObject::OnRep_ReplicatedUserStatesData() {
}

void AInteractiveObject::OnRep_RepCurrentState() {
}

void AInteractiveObject::OnRep_RepCurrentLockState() {
}

void AInteractiveObject::OnRep_RepCurrentInteractiveState() {
}

void AInteractiveObject::OnLStateUnlocked_Implementation() {
}

void AInteractiveObject::OnLStateLocked_Implementation() {
}

void AInteractiveObject::OnLocked_Implementation() {
}

void AInteractiveObject::OnIStateNonInteractive_Implementation() {
}

void AInteractiveObject::OnIStateInteractive_Implementation() {
}

void AInteractiveObject::OnEnabling_Implementation() {
}

void AInteractiveObject::OnEnabled_Implementation() {
}

void AInteractiveObject::OnDisabling_Implementation() {
}

void AInteractiveObject::OnDisabled_Implementation() {
}

void AInteractiveObject::OnAnimationEnded(const UAnimationAsset* Asset) {
}

void AInteractiveObject::ChangeState(EInteractiveObjectState NewState) {
}

void AInteractiveObject::ChangeLockState(EInteractiveObjectLockState NewState) {
}

void AInteractiveObject::ChangeInteractiveState(EInteractiveObjectInteractiveState NewState) {
}

void AInteractiveObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInteractiveObject, ReplicatedUserStatesData);
    DOREPLIFETIME(AInteractiveObject, RepCurrentState);
    DOREPLIFETIME(AInteractiveObject, RepCurrentLockState);
    DOREPLIFETIME(AInteractiveObject, RepCurrentInteractiveState);
}

AInteractiveObject::AInteractiveObject() {
    this->bRegisterAsTargetable = false;
    this->bShouldDisplayNameplate = false;
    this->CachedDamageComponent = NULL;
    this->CachedTargetableComponent = NULL;
    this->RepCurrentState = EInteractiveObjectState::Uninitialized;
    this->RepCurrentLockState = EInteractiveObjectLockState::Uninitialized;
    this->RepCurrentInteractiveState = EInteractiveObjectInteractiveState::Uninitialized;
    this->CurrentState = EInteractiveObjectState::Disabled;
    this->CurrentLockState = EInteractiveObjectLockState::Unlocked;
    this->CurrentInteractiveState = EInteractiveObjectInteractiveState::Interactive;
    this->bShouldShowLevelSyncedNameplate = false;
    this->ShouldColorCrosshairRed = false;
    this->bHideWhenAttachedToHiddenCharacter = false;
    this->bCanNotifyKillersOfDeath = false;
    this->bIsTrapTrigger = false;
    this->bTrapBreaker = false;
    this->bReverseTriggerInstructionWhenTriggerDeactivates = false;
    this->bTrapIsBroken = false;
    this->PrimarySkeletalMeshComponent = NULL;
    this->OnEnablingAnimation = NULL;
    this->OnEnabledAnimation = NULL;
    this->OnDisablingAnimation = NULL;
    this->OnDisabledAnimation = NULL;
    this->OnLockedAnimation = NULL;
    this->PlayerAlertType = EPlayerAlertType::Neutral;
}


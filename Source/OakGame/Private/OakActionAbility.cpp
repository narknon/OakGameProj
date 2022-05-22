#include "OakActionAbility.h"
#include "Net/UnrealNetwork.h"

class UOakActionAbilityAugmentSlotData;
class UOakActionAbilityAugmentData;
class AOakPlayerController;

void UOakActionAbility::StopActionAbility() {
}

void UOakActionAbility::StartActionAbility() {
}


bool UOakActionAbility::ShouldDisplayDurationBar() const {
    return false;
}

bool UOakActionAbility::ShouldAbortActivation_Implementation(uint8& OutAbortCode) const {
    return false;
}

void UOakActionAbility::ServerStopActionAbility_Implementation(EOakActionAbilityStopAction StopAction) {
}
bool UOakActionAbility::ServerStopActionAbility_Validate(EOakActionAbilityStopAction StopAction) {
    return true;
}

void UOakActionAbility::ServerStartActionAbility_Implementation() {
}
bool UOakActionAbility::ServerStartActionAbility_Validate() {
    return true;
}

void UOakActionAbility::ServerResetActionAbilityCooldown_Implementation() {
}
bool UOakActionAbility::ServerResetActionAbilityCooldown_Validate() {
    return true;
}

void UOakActionAbility::ResetDurationTimer() {
}

void UOakActionAbility::ResetActionAbilityCooldown() {
}

void UOakActionAbility::RemoveScriptingLock(const FName& Reason) {
}

void UOakActionAbility::OnStopActionAbility_Implementation() {
}

void UOakActionAbility::OnStartActionAbility_Implementation() {
}

void UOakActionAbility::OnRep_Charges() {
}

void UOakActionAbility::OnRep_bIsActive() {
}


void UOakActionAbility::OnPlayerDeadOrDying() {
}

void UOakActionAbility::OnOwnerCinematicModeChanged(bool bInCinematicMode) {
}





void UOakActionAbility::OnDurationResourceDepleted(FGameResourcePoolReference ResourcePool) {
}


void UOakActionAbility::OnCooldownResourceFilled(FGameResourcePoolReference ResourcePool) {
}


bool UOakActionAbility::IsReady() const {
    return false;
}

bool UOakActionAbility::IsPendingStop() const {
    return false;
}

bool UOakActionAbility::IsDurationTimerRunning() const {
    return false;
}

bool UOakActionAbility::IsCoolingDown() const {
    return false;
}

bool UOakActionAbility::IsAugmentSlotted(UOakActionAbilityAugmentData* Augment) const {
    return false;
}

bool UOakActionAbility::IsAugmentInSlot(UOakActionAbilityAugmentData* Augment, UOakActionAbilityAugmentSlotData* AugmentSlot) const {
    return false;
}

bool UOakActionAbility::IsAnyAugmentInSlot(UOakActionAbilityAugmentSlotData* AugmentSlot) const {
    return false;
}

bool UOakActionAbility::IsActive() const {
    return false;
}

bool UOakActionAbility::HasChargesAvailable() const {
    return false;
}

void UOakActionAbility::HandleInputHoldActivationEnd() {
}

void UOakActionAbility::HandleInputHoldActivationBegin() {
}

void UOakActionAbility::HandleInputActivationRelease_Implementation() {
}

void UOakActionAbility::HandleInputActivationEnd() {
}

void UOakActionAbility::HandleInputActivationBegin() {
}

void UOakActionAbility::HandleInputActivationAttempt_Implementation() {
}

UOakActionAbilityAugmentData* UOakActionAbility::GetSlotAugment(UOakActionAbilityAugmentSlotData* AugmentSlot) const {
    return NULL;
}

AOakPlayerController* UOakActionAbility::GetOakPlayerController() const {
    return NULL;
}

bool UOakActionAbility::GetMaxDurationModifier_Implementation(EGbxAttributeModifierType& ModifierType, float& Value) const {
    return false;
}

bool UOakActionAbility::GetMaxCooldownModifier_Implementation(EGbxAttributeModifierType& ModifierType, float& Value) const {
    return false;
}

float UOakActionAbility::GetDurationPercent() const {
    return 0.0f;
}

uint8 UOakActionAbility::GetDefaultActivationErrorCode() const {
    return 0;
}

float UOakActionAbility::GetCooldownRestartPercent_Implementation() const {
    return 0.0f;
}

float UOakActionAbility::GetCooldownPercent() const {
    return 0.0f;
}

FString UOakActionAbility::GetActionSkillWidgetKeyframe_Implementation() const {
    return TEXT("");
}

void UOakActionAbility::ClientNotifyActionSkillActivationFailed_Implementation(uint8 FailureCode) {
}

void UOakActionAbility::CleanupOnActionSkillDeactivation_Implementation() {
}

void UOakActionAbility::AddScriptingLock(const FName& Reason) {
}

void UOakActionAbility::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility, CooldownPoolRef);
    DOREPLIFETIME(UOakActionAbility, DurationPoolRef);
    DOREPLIFETIME(UOakActionAbility, bIsActive);
    DOREPLIFETIME(UOakActionAbility, Charges);
}

UOakActionAbility::UOakActionAbility() {
    this->bShouldDisplayDurationBar = false;
    this->CooldownPoolData = NULL;
    this->DurationPoolData = NULL;
    this->HUDIcon = NULL;
    this->bUsesCharges = false;
    this->SecondaryUseActionType = EOakActionAbilitySecondaryUseActionType::None;
    this->bEndOnDownstate = true;
    this->bCanBeActivatedWhileAttached = false;
    this->bIsActive = false;
    this->OakPlayerController = NULL;
    this->Charges = 0;
}


#include "Weapon.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "DamageModifierComponent.h"

class APawn;
class UAnimMontage;
class UMaterialInterface;
class UParticleSystem;
class UWeaponUseComponent;
class UGbxAction;
class UActorComponent;
class UMeshComponent;
class UAimAssistParameters;

void AWeapon::Unlock(bool bReplicate) {
}

void AWeapon::TryAutoReload() {
}

void AWeapon::ToggleMode(uint8 InputChannel) {
}

void AWeapon::SwitchPendingUseMode() {
}

void AWeapon::SwitchMode(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced) {
}

void AWeapon::StopZooming(bool bSkipTransitions, bool bClearInput) {
}

void AWeapon::StopWeaponAction(TEnumAsByte<EWeaponActionType> WeaponAction) {
}

void AWeapon::StopUsing(uint8 InputChannel, bool bForced) {
}

void AWeapon::StopReloading() {
}

void AWeapon::StopModeSwitch() {
}

void AWeapon::StopEffects(TEnumAsByte<EWeaponEffectType> EffectType, uint8 UseModeIndex) {
}

void AWeapon::StopDynamicMaterialEffect(int32 EffectID) {
}

void AWeapon::StopAnimation(UAnimMontage* Anim, bool bFirstPerson) {
}

void AWeapon::StartZooming() {
}

void AWeapon::StartUsing(uint8 InputChannel) {
}

void AWeapon::StartReloading(bool bAuto) {
}

void AWeapon::SetTargetLocked(bool bIsLocked) {
}

void AWeapon::SetPreUseState(uint8 UseModeIndex, bool bEnabled) {
}

void AWeapon::SetMaterialVectorParameterValue(FName ParamName, FLinearColor ParamValue) {
}

void AWeapon::SetMaterialScalarParameterValue(FName ParamName, float ParamValue) {
}

void AWeapon::SetEffectVectorParameter(FName ParamName, const FVector& ParamValue, const FWeaponEffectQueryData& QueryData) {
}

void AWeapon::SetEffectMaterialParameter(FName ParamName, UMaterialInterface* ParamValue, const FWeaponEffectQueryData& QueryData) {
}

void AWeapon::SetEffectFloatParameter(FName ParamName, float ParamValue, const FWeaponEffectQueryData& QueryData) {
}

void AWeapon::SetEffectEmitterState(FName EmitterName, bool bEnabled, const FWeaponEffectQueryData& QueryData) {
}

void AWeapon::SetEffectColorParameter(FName ParamName, const FLinearColor& ParamValue, const FWeaponEffectQueryData& QueryData) {
}

void AWeapon::SetBoneVisibility(FName BoneName, bool bVisible, TEnumAsByte<EWeaponAttachmentVisibilityType> AttachmentType) {
}

void AWeapon::ServerUnlock_Implementation() {
}
bool AWeapon::ServerUnlock_Validate() {
    return true;
}

void AWeapon::ServerSwitchMode_Implementation(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced) {
}
bool AWeapon::ServerSwitchMode_Validate(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced) {
    return true;
}

void AWeapon::ServerStopUsing_Implementation(uint8 InputChannel, bool bForced) {
}
bool AWeapon::ServerStopUsing_Validate(uint8 InputChannel, bool bForced) {
    return true;
}

void AWeapon::ServerStopModeSwitch_Implementation(uint8 InputChannel, uint8 ClientUseModeIndex) {
}
bool AWeapon::ServerStopModeSwitch_Validate(uint8 InputChannel, uint8 ClientUseModeIndex) {
    return true;
}

void AWeapon::ServerStartUsing_Implementation(uint8 InputChannel, uint8 ClientPatternSeed) {
}
bool AWeapon::ServerStartUsing_Validate(uint8 InputChannel, uint8 ClientPatternSeed) {
    return true;
}

void AWeapon::ServerStartReloading_Implementation(uint8 UseModeIndex, bool bAuto) {
}
bool AWeapon::ServerStartReloading_Validate(uint8 UseModeIndex, bool bAuto) {
    return true;
}

void AWeapon::ServerSetZoomState_Implementation(uint8 UseModeIndex, const FWeaponZoomState& NewState, float ZoomStartOffset) {
}
bool AWeapon::ServerSetZoomState_Validate(uint8 UseModeIndex, const FWeaponZoomState& NewState, float ZoomStartOffset) {
    return true;
}

void AWeapon::ServerSetPatternSeed_Implementation(uint8 ClientPatternSeed) {
}
bool AWeapon::ServerSetPatternSeed_Validate(uint8 ClientPatternSeed) {
    return true;
}

void AWeapon::ServerRestartAutoUse_Implementation() {
}
bool AWeapon::ServerRestartAutoUse_Validate() {
    return true;
}

void AWeapon::ServerLock_Implementation(float Duration) {
}
bool AWeapon::ServerLock_Validate(float Duration) {
    return true;
}

void AWeapon::ServerInterruptReloadToUse_Implementation(int32 ClientLoadedAmmo) {
}
bool AWeapon::ServerInterruptReloadToUse_Validate(int32 ClientLoadedAmmo) {
    return true;
}

void AWeapon::ServerEquipInterruptible_Implementation() {
}
bool AWeapon::ServerEquipInterruptible_Validate() {
    return true;
}

void AWeapon::RegisterTrinketAttachment(const FWeaponRegisterTrinketAttachmentData& Data) {
}

void AWeapon::RegisterSkeletalControl(const FWeaponRegisterSkeletalControlData& Data) {
}

void AWeapon::RegisterSimpleEffect(TEnumAsByte<EWeaponEffectType> EffectType, UParticleSystem* Effect, FName EffectSocket) {
}

void AWeapon::RegisterMaterialEffect(const FWeaponRegisterMaterialEffectData& Data) {
}

void AWeapon::RegisterEffect(const FWeaponRegisterAttachmentEffectData& Data) {
}

void AWeapon::ReevaluateConditionalEffects() {
}

void AWeapon::PrevZoomLevel() {
}

void AWeapon::PlayEffects(TEnumAsByte<EWeaponEffectType> EffectType, uint8 UseModeIndex, int32 EffectID) {
}

int32 AWeapon::PlayDynamicMaterialEffect(const FWeaponMaterialEffectData& Data) {
    return 0;
}

float AWeapon::PlayAnimation(UAnimMontage* Anim, bool bFirstPerson, float PlayRate, float Duration) {
    return 0.0f;
}

void AWeapon::OnZoomedOut() {
}

void AWeapon::OnUseStarted() {
}

void AWeapon::OnUseFinished() {
}

void AWeapon::OnUpdateSkeletalControlsWhenUseFinishes() {
}

void AWeapon::OnUpdateSkeletalControlsWhenUsed() {
}

void AWeapon::OnUpdateSkeletalControlsWhenAmmoChanges() {
}

void AWeapon::OnRep_TargetLockedChanged() {
}

void AWeapon::OnRep_PendingUseModeIndex() {
}

void AWeapon::OnRep_PendingAttachState() {
}

void AWeapon::OnRep_CurrentUseModeIndex(uint8 PreviousUseModeIndex) {
}

void AWeapon::OnReloadEnded(bool bCompleted) {
}

void AWeapon::OnAmmoGivenToEmptyWeapon() {
}

void AWeapon::NotifySkeletalControl(TEnumAsByte<EWeaponEffectType> ControlType, FName ControlName, EWeaponSkeletalControlEvent Event, float EventValue) {
}

void AWeapon::NextZoomLevel() {
}

void AWeapon::Lock(float Duration, bool bReplicate) {
}

void AWeapon::K2_StopWeaponActionObj(UGbxAction* WeaponAction) {
}

UGbxAction* AWeapon::K2_PlayWeaponActionEx(TEnumAsByte<EWeaponActionType> WeaponAction, FActionState_Base ActionParams, bool bCheckForRelevancy) {
    return NULL;
}

UGbxAction* AWeapon::K2_PlayWeaponAction(TEnumAsByte<EWeaponActionType> WeaponAction, float PlayRate, float Duration, bool bCheckForRelevancy) {
    return NULL;
}

bool AWeapon::IsZoomedIn(bool bIncludeTransitions) const {
    return false;
}

bool AWeapon::IsZoomed() const {
    return false;
}

bool AWeapon::IsUsing() const {
    return false;
}

bool AWeapon::IsTargetLocked() const {
    return false;
}

bool AWeapon::IsSwitchingModes() const {
    return false;
}

bool AWeapon::IsReloading() const {
    return false;
}

bool AWeapon::IsPuttingDown() const {
    return false;
}

bool AWeapon::IsPendingUse(uint8 InputChannel) const {
    return false;
}

bool AWeapon::IsLocked() const {
    return false;
}

bool AWeapon::IsLocalAuthority() const {
    return false;
}

bool AWeapon::IsInactive() const {
    return false;
}

bool AWeapon::IsEquipping() const {
    return false;
}

bool AWeapon::IsAuthorityUsing() const {
    return false;
}

bool AWeapon::IsAuthoritySwitchingModes() const {
    return false;
}

bool AWeapon::IsAuthorityReloading() const {
    return false;
}

bool AWeapon::IsAuthorityPuttingDown() const {
    return false;
}

bool AWeapon::IsAuthorityEquipping() const {
    return false;
}

bool AWeapon::IsActive() const {
    return false;
}

void AWeapon::GivenTo(APawn* NewOwner) {
}

float AWeapon::GetZoomFOVScale() const {
    return 0.0f;
}

float AWeapon::GetZoomEffect() const {
    return 0.0f;
}

float AWeapon::GetZoomDuration() const {
    return 0.0f;
}

UActorComponent* AWeapon::GetUseModeComponentByClass(TSubclassOf<UActorComponent> ComponentClass, uint8 UseModeIndex) const {
    return NULL;
}

float AWeapon::GetMuteADSAlpha_Implementation() const {
    return 0.0f;
}

float AWeapon::GetMaxZoomFOVScale() const {
    return 0.0f;
}

uint8 AWeapon::GetLastInputChannel() const {
    return 0;
}

uint8 AWeapon::GetCurrentReloadPartType() const {
    return 0;
}

UMeshComponent* AWeapon::GetAttachmentMesh(bool bFirstPerson, uint8 SlotIndex) const {
    return NULL;
}

UActorComponent* AWeapon::GetAssociatedUseModeComponentByClass(TSubclassOf<UActorComponent> ComponentClass, UActorComponent* ReferenceComponent) const {
    return NULL;
}

UAimAssistParameters* AWeapon::GetAimAssistParameters() const {
    return NULL;
}

void AWeapon::EquipInterruptible() {
}

void AWeapon::Dropped() {
}

void AWeapon::CycleZoomLevel() {
}

void AWeapon::ClientUnlock_Implementation() {
}

void AWeapon::ClientStopReloading_Implementation() {
}

void AWeapon::ClientLock_Implementation(float Duration) {
}

uint8 AWeapon::AddUseMode(UWeaponUseComponent* UseComponent, const TArray<UActorComponent*>& OtherComponents, int32 InputChannels) {
    return 0;
}

void AWeapon::Activate(APawn* WeaponOwner, uint8 InSlot, EWeaponEquipType InEquipType) {
}

void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWeapon, SwitchModeTimeScale);
    DOREPLIFETIME(AWeapon, ReplicationProxy);
    DOREPLIFETIME(AWeapon, PendingAttachState);
    DOREPLIFETIME(AWeapon, EquipTime);
    DOREPLIFETIME(AWeapon, PutDownTime);
    DOREPLIFETIME(AWeapon, PendingUseModeIndex);
    DOREPLIFETIME(AWeapon, CurrentUseModeIndex);
    DOREPLIFETIME(AWeapon, bIsTargetLocked);
}

AWeapon::AWeapon() {
    this->CurrentFireComponent = NULL;
    this->WeaponDisplayData = NULL;
    this->WeaponType = NULL;
    this->SwitchModeTime = 0.00f;
    this->SwitchModeCompletePercent = 0.70f;
    this->PostSprintDelayUseTime = 0.00f;
    this->ViewModelFOV = 0.00f;
    this->DepthOfFieldZoomedForegroundNearRegion = 0.00f;
    this->PendingUseModeIndex = 0;
    this->CurrentUseModeIndex = 0;
    this->CurrentSlotIndex = 0;
    this->NextSlotIndex = 0;
    this->AimAssetParameters = NULL;
    this->bIsTargetLocked = false;
    this->AttributeResolverUseModeBitmask = 0;
    this->bForceUnzoomWhenSwitchingModes = false;
    this->AttachmentSlots3P.AddDefaulted(1);
    this->bWeaponAttached = false;
    this->CachedFireTriggerFeedback = NULL;
    this->CachedZoomTriggerFeedback = NULL;
    this->bShowCrosshair = true;
    this->bAlwaysTickAttachedMeshes = false;
    this->DamageModifierCompClass = UDamageModifierComponent::StaticClass();
    this->CurrentState = TEXT("Inactive");
    this->MainHandGripSocketName = TEXT("R_Grip_IK");
    this->OffHandGripSocketName = TEXT("L_Grip_IK");
}


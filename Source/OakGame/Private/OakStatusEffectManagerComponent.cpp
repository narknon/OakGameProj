#include "OakStatusEffectManagerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AController;
class UGbxDamageType;
class UDestructibleMesh;

void UOakStatusEffectManagerComponent::UnlockFreezePauseState(FName Reason) {
}

void UOakStatusEffectManagerComponent::UnlockElementalEffects(FName Reason) {
}

void UOakStatusEffectManagerComponent::UnlockElementalEffectByType(EOakStatusEffectResourceEffectType Type, FName Reason) {
}

void UOakStatusEffectManagerComponent::UnlockElementalEffectByDamageType(TSubclassOf<UGbxDamageType> DamageTypeClass, FName Reason) {
}

void UOakStatusEffectManagerComponent::UnlockCryoFreezePauseState(FName Reason) {
}

void UOakStatusEffectManagerComponent::TryToFreezeOnActionEnd(EGbxActionEndState EndState) {
}

void UOakStatusEffectManagerComponent::Thawed() {
}

void UOakStatusEffectManagerComponent::Thaw() {
}

void UOakStatusEffectManagerComponent::Shatter(FVector Origin, float Force, bool bReplicate) {
}

void UOakStatusEffectManagerComponent::SetPrimaryFreezeMesh(UDestructibleMesh* Mesh) {
}

void UOakStatusEffectManagerComponent::SetPrimaryCryoFreezeMesh(UDestructibleMesh* Mesh) {
}

void UOakStatusEffectManagerComponent::OnShieldNowNotFull(FGameResourcePoolReference ResourcePool) {
}

void UOakStatusEffectManagerComponent::OnShieldNowNotDepleted(FGameResourcePoolReference ResourcePool) {
}

void UOakStatusEffectManagerComponent::OnShieldNowFull(FGameResourcePoolReference ResourcePool) {
}

void UOakStatusEffectManagerComponent::OnShieldNowDepleted(FGameResourcePoolReference ResourcePool) {
}

void UOakStatusEffectManagerComponent::OnResourceNowNotFilled(FGameResourcePoolReference ResourcePool) {
}

void UOakStatusEffectManagerComponent::OnResourceNowNotDepleted(FGameResourcePoolReference ResourcePool) {
}

void UOakStatusEffectManagerComponent::OnResourceNowFilled(FGameResourcePoolReference ResourcePool) {
}

void UOakStatusEffectManagerComponent::OnResourceNowDepleted(FGameResourcePoolReference ResourcePool) {
}

void UOakStatusEffectManagerComponent::OnRep_ShieldEffectState(const FShieldEffectStateData& OldState) {
}

void UOakStatusEffectManagerComponent::OnRep_FreezeData() {
}

void UOakStatusEffectManagerComponent::OnOwnerInjured() {
}

void UOakStatusEffectManagerComponent::OnOwnerHealthy() {
}

void UOakStatusEffectManagerComponent::OnOwnerDied() {
}

void UOakStatusEffectManagerComponent::LockFreezePauseState(FName Reason) {
}

void UOakStatusEffectManagerComponent::LockElementalEffects(FName Reason) {
}

void UOakStatusEffectManagerComponent::LockElementalEffectByType(EOakStatusEffectResourceEffectType Type, FName Reason) {
}

void UOakStatusEffectManagerComponent::LockElementalEffectByDamageType(TSubclassOf<UGbxDamageType> DamageTypeClass, FName Reason) {
}

void UOakStatusEffectManagerComponent::LockCryoFreezePauseState(FName Reason) {
}

bool UOakStatusEffectManagerComponent::IsFrozen(bool bIncludeTransition) const {
    return false;
}

bool UOakStatusEffectManagerComponent::IsCryoFrozen() const {
    return false;
}

bool UOakStatusEffectManagerComponent::IsAffectedByElementalType(EOakElementalType Type, float Threshold) const {
    return false;
}

void UOakStatusEffectManagerComponent::GetValidFreezePrimitiveComponentNames(TArray<FName>& Array) const {
}

float UOakStatusEffectManagerComponent::GetThawPercent() const {
    return 0.0f;
}

float UOakStatusEffectManagerComponent::GetFreezePercent() const {
    return 0.0f;
}

float UOakStatusEffectManagerComponent::GetCryoThawPercent() const {
    return 0.0f;
}

float UOakStatusEffectManagerComponent::GetCryoFreezePercent() const {
    return 0.0f;
}

void UOakStatusEffectManagerComponent::FrozenDeath(FVector Momentum, FVector HitLocation, FVector HitDirection, float Force, float Radius, int32 BoneIndex) {
}

void UOakStatusEffectManagerComponent::Frozen() {
}

void UOakStatusEffectManagerComponent::Freeze(bool bInstant, EFreezeType Type) {
}

void UOakStatusEffectManagerComponent::CryoThaw() {
}

void UOakStatusEffectManagerComponent::CryoShatter(FVector Origin, float Force, bool bReplicate) {
}

void UOakStatusEffectManagerComponent::CryoFrozenDeath(FVector Momentum, FVector HitLocation, FVector HitDirection, float Force, float Radius, int32 BoneIndex) {
}

void UOakStatusEffectManagerComponent::CryoFreeze(bool bInstant) {
}

void UOakStatusEffectManagerComponent::ClientUpdateFreezePauseState() {
}

void UOakStatusEffectManagerComponent::ClearAllTransientEffects() {
}

void UOakStatusEffectManagerComponent::ClearAllElementalEffects() {
}

void UOakStatusEffectManagerComponent::BroadcastShatter_Implementation(FVector Origin, float Force) {
}

void UOakStatusEffectManagerComponent::ApplyResourceEffectValue(AController* Instigator, EOakStatusEffectResourceEffectType Type, float InValue) {
}

void UOakStatusEffectManagerComponent::ApplyFreezeFallDamage(const FHitResult& Hit) {
}

void UOakStatusEffectManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakStatusEffectManagerComponent, DestructibleSyncID);
    DOREPLIFETIME(UOakStatusEffectManagerComponent, RepFreezeData);
    DOREPLIFETIME(UOakStatusEffectManagerComponent, bFreezePauseAnims);
    DOREPLIFETIME(UOakStatusEffectManagerComponent, ShieldEffectState);
    DOREPLIFETIME(UOakStatusEffectManagerComponent, CSBoosterStatusState);
    DOREPLIFETIME(UOakStatusEffectManagerComponent, StreamerBoosterStatusState);
    DOREPLIFETIME(UOakStatusEffectManagerComponent, ActiveResourceEffects);
    DOREPLIFETIME(UOakStatusEffectManagerComponent, PresentationManager);
}

UOakStatusEffectManagerComponent::UOakStatusEffectManagerComponent() {
    this->bResistCryoFreeze = false;
    this->FreezeNoDamageImpactThreshold = 50.00f;
    this->FreezeFootDownThreshold = 10.00f;
    this->FreezeSupportMeshScale = 1.00f;
    this->DestructibleSyncID = 0;
    this->RepFreezeData = 0;
    this->bSupportCryoFreezeAssets = true;
    this->bCanBuildFreezeSupportMesh = true;
    this->bCanCreateFreezeGroundEffect = true;
    this->bFallOnFrozenDeath = false;
    this->bFreezePauseAnims = false;
    this->FreezeState = EFreezeState::None;
    this->FreezeType = EFreezeType::Cryo;
    this->bSupportShieldStatusEffects = false;
    this->bShouldShowThirdPersonEffects = true;
    this->bClearAllStatusEffectsOnOwnerDeath = true;
}


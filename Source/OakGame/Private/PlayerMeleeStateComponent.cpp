#include "PlayerMeleeStateComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UGbxDamageType;
class AActor;

void UPlayerMeleeStateComponent::SetMeleeDamageType(TSubclassOf<UGbxDamageType> InDamageType) {
}

void UPlayerMeleeStateComponent::SetEnableMeleeWeaponCFX(bool bEnableEffect) {
}

void UPlayerMeleeStateComponent::Server_PerformSirenOverrunMelee_Implementation(AActor* Target) {
}
bool UPlayerMeleeStateComponent::Server_PerformSirenOverrunMelee_Validate(AActor* Target) {
    return true;
}

void UPlayerMeleeStateComponent::Server_PerformPlayerMelee_Implementation() {
}
bool UPlayerMeleeStateComponent::Server_PerformPlayerMelee_Validate() {
    return true;
}

void UPlayerMeleeStateComponent::ResourceUnlockPlayerMeleeWeaponVisible(AActor* PlayerActor, FName Reason) {
}

void UPlayerMeleeStateComponent::ResourceLockPlayerMeleeWeaponVisible(AActor* PlayerActor, FName Reason) {
}

bool UPlayerMeleeStateComponent::PerformPlayerMelee() {
    return false;
}

void UPlayerMeleeStateComponent::OnRep_ReplicatedMeleeData() {
}

void UPlayerMeleeStateComponent::OnMeleeActionEnd(EGbxActionEndState EndState) {
}

bool UPlayerMeleeStateComponent::IsPerformingMelee() {
    return false;
}

void UPlayerMeleeStateComponent::HandleFirstPersonCreated(bool bArmsCreated) {
}

void UPlayerMeleeStateComponent::ClearMeleeDamageType() {
}

void UPlayerMeleeStateComponent::CharacterTransported() {
}

void UPlayerMeleeStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerMeleeStateComponent, ReplicatedMeleeData);
}

UPlayerMeleeStateComponent::UPlayerMeleeStateComponent() {
    this->PlayerMeleeData = NULL;
    this->MeleeWeaponBoneModifyBlendTime = 0.10f;
    this->ActivePlayerMeleeData = NULL;
    this->MeleeHitTime = 0.00f;
    this->EndMeleeDuration = 0.00f;
    this->MeleeCooldownEndTime = 0.00f;
    this->CurrentMeleeTarget = NULL;
    this->DamageTypeOverride = NULL;
}


#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UConditionalDamageModifier;
class UGbxDamageType;
class UImpactData;

void UDamageComponent::UnregisterConditionalDamageModifier(UConditionalDamageModifier* Modifier) {
}

void UDamageComponent::SetSelfReflectedDamageType(const TSubclassOf<UGbxDamageType>& DamageType) {
}

void UDamageComponent::SetGodMode(bool bInGodMode) {
}

void UDamageComponent::SetDemiGodMode(bool bInDemiGodMode) {
}

void UDamageComponent::SetCurrentShield(float NewCurrentShield) {
}

void UDamageComponent::SetCurrentHealth(float NewCurrentHealth) {
}

void UDamageComponent::RegisterConditionalDamageModifier(UConditionalDamageModifier* Modifier) {
}




void UDamageComponent::OnRep_HealthInformation() {
}

void UDamageComponent::OnRep_DeathHitReaction() {
}

void UDamageComponent::OnRep_bCurrentlyDead() {
}

void UDamageComponent::OnOwnerExperienceLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void UDamageComponent::OnHealthResourceNowNotDepleted(FGameResourcePoolReference ResourcePool) {
}

void UDamageComponent::OnHealthResourceNowDepleted(FGameResourcePoolReference ResourcePool) {
}

bool UDamageComponent::IsInGodMode() const {
    return false;
}

bool UDamageComponent::IsInDemiGodMode() const {
    return false;
}

bool UDamageComponent::IsDamageOverkill(float DamageAmount, float OverkillThreshold) const {
    return false;
}

void UDamageComponent::GetValidDamageEventFunctionNames(TArray<FName>& Names) const {
}

float UDamageComponent::GetTotalMaxHealth() const {
    return 0.0f;
}

float UDamageComponent::GetMaxShield() const {
    return 0.0f;
}

float UDamageComponent::GetMaxHealth() const {
    return 0.0f;
}

float UDamageComponent::GetCurrentShield() const {
    return 0.0f;
}

float UDamageComponent::GetCurrentHealthPercent() const {
    return 0.0f;
}

float UDamageComponent::GetCurrentHealth() const {
    return 0.0f;
}

void UDamageComponent::BroadcastPlayImpactSplatterEffect_Implementation(UImpactData* ImpactData, FVector_NetQuantize100 HitLocation, FVector_NetQuantizeNormal HitDirection, float DamageSeverity) {
}

void UDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDamageComponent, HealthInformation);
    DOREPLIFETIME(UDamageComponent, SimpleHealthInformation);
    DOREPLIFETIME(UDamageComponent, DeathHitReaction);
    DOREPLIFETIME(UDamageComponent, bCurrentlyDead);
}

UDamageComponent::UDamageComponent() {
    this->bShowDamageNumbers = true;
    this->bShowImmuneFeedbackInGodMode = false;
    this->bAlwaysBlockWeapons = false;
    this->bIgnoreDamageAreaVisibilityChecks = false;
    this->bDieWhenHealthDepleted = true;
    this->DeathData = NULL;
    this->HealthMode = EDamageComponentHealthMode::ResourcePools;
    this->MinimumDamageLaunchVelocity = 20.00f;
    this->bUseBoundForCylinderTest = false;
    this->LaunchVerticalDampening = 0.50f;
    this->MaxSelfInflictedLaunchVelocity = 250.00f;
    this->SplatterEffect = NULL;
    this->bUseProtectionTimer = false;
    this->LastHitByPlayer = NULL;
    this->AvertDeathChance = 0.00f;
    this->IntrinsicArmor = 0.00f;
    this->SelfReflectionDamageType = NULL;
    this->bPassDamageToParent = false;
    this->bDamageOnlyAppliesToParent = true;
    this->bCanDamageCorpse = true;
    this->CachedHitRegionComponent = NULL;
    this->ParentDamageComponent = NULL;
    this->LastHitBy = NULL;
    this->bGodMode = false;
    this->bDemigodMode = false;
    this->bCurrentlyDead = false;
    this->ImpactPhysicalMaterialOverride = NULL;
    this->bSuppressOnDeathCall = false;
}


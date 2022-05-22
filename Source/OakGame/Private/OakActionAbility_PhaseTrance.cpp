#include "OakActionAbility_PhaseTrance.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UOakActionAbilityAugmentData_PhaseTrance_Element;
class UOakActionAbility_PhaseTrance;
class UOakDamageType;
class UOakAction_Anim_ActionAbility_PhaseTrance;

FPhaseTranceActivationComboData UOakActionAbility_PhaseTrance::UnpackActivationComboDataFromReplication(TSubclassOf<UOakActionAbility_PhaseTrance> PhaseTranceClass, const FVector& PackedComboData) {
    return FPhaseTranceActivationComboData{};
}

bool UOakActionAbility_PhaseTrance::TryEffect(const FOakPhaseTranceEffectSpec& Spec) {
    return false;
}

void UOakActionAbility_PhaseTrance::SetPhaseGraspTimerRunning(bool bIsRunning) {
}

void UOakActionAbility_PhaseTrance::SetEffectsLocked(const FOakPhaseTranceLockEffectSpec& Spec) {
}

void UOakActionAbility_PhaseTrance::ServerRecallOrb_Implementation() {
}
bool UOakActionAbility_PhaseTrance::ServerRecallOrb_Validate() {
    return true;
}


FVector UOakActionAbility_PhaseTrance::PackActivationComboDataForReplication(TSubclassOf<UOakActionAbility_PhaseTrance> PhaseTranceClass, const FPhaseTranceActivationComboData& ComboData) {
    return FVector{};
}

bool UOakActionAbility_PhaseTrance::IsOrbActive() const {
    return false;
}

bool UOakActionAbility_PhaseTrance::HasPhaseTranceElementType(EPhaseTranceElementalType ElementType, const FPhaseTranceActivationComboData& ComboData) {
    return false;
}

bool UOakActionAbility_PhaseTrance::HasPhaseTranceEffectType(EPhaseTranceEffectType EffectType, const FPhaseTranceActivationComboData& ComboData) {
    return false;
}

EPhaseTranceElementalType UOakActionAbility_PhaseTrance::GetPhaseTranceElementType(const FPhaseTranceActivationComboData& ComboData) {
    return EPhaseTranceElementalType::None;
}

EPhaseTranceEffectType UOakActionAbility_PhaseTrance::GetPhaseTranceEffectType(const FPhaseTranceActivationComboData& ComboData) {
    return EPhaseTranceEffectType::None;
}

UOakActionAbilityAugmentData_PhaseTrance_Element* UOakActionAbility_PhaseTrance::GetCurrentlyAttunedElementData() const {
    return NULL;
}

EPhaseTranceElementalType UOakActionAbility_PhaseTrance::GetCurrentlyAttunedElement() const {
    return EPhaseTranceElementalType::None;
}


void UOakActionAbility_PhaseTrance::BreakPhaseTranceElementData(const FPhaseTranceActivationComboData& ComboData, EPhaseTranceElementalType& ElementType, TSubclassOf<UOakDamageType>& DamageType, FAttributeInitializationData& DamageCoefficientData) {
}

void UOakActionAbility_PhaseTrance::BreakPhaseTranceEffectData(const FPhaseTranceActivationComboData& ComboData, EPhaseTranceEffectType& EffectType, FAttributeInitializationData& DamageCoefficientData) {
}

void UOakActionAbility_PhaseTrance::BreakPhaseTranceAttackData(const FPhaseTranceActivationComboData& ComboData, EPhaseTranceAttackFamilyType& AttackFamilyType, TSubclassOf<UOakAction_Anim_ActionAbility_PhaseTrance>& AttackClass, FAttributeInitializationData& DamageCoefficientData, FAttributeInitializationData& CooldownCoefficientData) {
}

void UOakActionAbility_PhaseTrance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility_PhaseTrance, PhaseGraspDurationPoolRef);
    DOREPLIFETIME(UOakActionAbility_PhaseTrance, ActivationCombo);
    DOREPLIFETIME(UOakActionAbility_PhaseTrance, bCanActivateDuringCooldown);
}

UOakActionAbility_PhaseTrance::UOakActionAbility_PhaseTrance() {
    this->AttackSlot = NULL;
    this->EffectSlot = NULL;
    this->ElementSlot = NULL;
    this->DefaultElementalAugmentData = NULL;
    this->PhasetranceDamageSourceClass = NULL;
    this->DefaultDamageType = NULL;
    this->PhaseGraspDurationPoolData = NULL;
}


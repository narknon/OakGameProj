#include "OakDamageComponent.h"

class UGoreAoEDamageData;

void UOakDamageComponent::TriggerGoreRegions(UGoreAoEDamageData* GoreData, FVector Origin, float Radius) {
}

void UOakDamageComponent::TriggerGoreRegion(FName BoneName, FVector HitDirection, bool bIgnoreRestrictions) {
}

void UOakDamageComponent::TriggerDefaultElementalDeath() {
}

void UOakDamageComponent::TriggerClientGoreRegion_Implementation(const FGoreRegionEventSummary& EventSummary) {
}

void UOakDamageComponent::SetIgnoreShield(bool IgnoreShield) {
}

void UOakDamageComponent::SetDamageBlockEnabled(bool bNewDamageBlockEnabled) {
}

bool UOakDamageComponent::IsElementalDeath() const {
    return false;
}

bool UOakDamageComponent::HasGoredRegionType(EGoreRegionType REGION) const {
    return false;
}

bool UOakDamageComponent::HasGoredAnyRegionType(int32 RegionTypes) const {
    return false;
}

void UOakDamageComponent::GetValidGoreRegionEventFunctionNames(TArray<FName>& Array) const {
}

void UOakDamageComponent::AddSectionPercentagesAtIndex(int32 Index, TArray<float> SectionPercentages) {
}

UOakDamageComponent::UOakDamageComponent() {
    this->bDamageBlockEnabled = true;
    this->DamageBlockData = NULL;
    this->RagdollDeathTag = NULL;
    this->bReplenishOnWorldReset = false;
    this->ElementalDeathType = EOakElementalType::None;
    this->bDisableElementalDeaths = false;
    this->GoreRegionTriggerThreshold = 0.10f;
    this->GoreRegionLimbScale = 1.00f;
    this->GoreSourceMaterialIndex = 0;
    this->AoEGoreData = NULL;
    this->GoreDeathOverride = NULL;
}


#include "StatusEffectManagerComponent.h"

bool UStatusEffectManagerComponent::RemoveStatusEffectInstance(FStatusEffectInstanceReference& Reference) {
    return false;
}

bool UStatusEffectManagerComponent::RemoveStatusEffect(const FStatusEffectRemoveSpec& Spec) {
    return false;
}

FStatusEffectQueryResult UStatusEffectManagerComponent::QueryStatusEffect(const FStatusEffectQuery& Query) const {
    return FStatusEffectQueryResult{};
}

FStatusEffectInstanceReference UStatusEffectManagerComponent::AddStatusEffect(const FStatusEffectSpec& Spec) {
    return FStatusEffectInstanceReference{};
}

UStatusEffectManagerComponent::UStatusEffectManagerComponent() {
}


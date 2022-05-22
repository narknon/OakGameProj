#include "StatusEffectsStatics.h"

class AActor;

bool UStatusEffectsStatics::RemoveStatusEffectInstance(AActor* Target, FStatusEffectInstanceReference& Reference) {
    return false;
}

bool UStatusEffectsStatics::RemoveStatusEffect(AActor* Target, const FStatusEffectRemoveSpec& RemoveSpec) {
    return false;
}

FStatusEffectQueryResult UStatusEffectsStatics::QueryStatusEffect(AActor* Target, const FStatusEffectQuery& Query) {
    return FStatusEffectQueryResult{};
}

FStatusEffectInstanceReference UStatusEffectsStatics::AddStatusEffect(AActor* Target, const FStatusEffectSpec& Spec) {
    return FStatusEffectInstanceReference{};
}

UStatusEffectsStatics::UStatusEffectsStatics() {
}


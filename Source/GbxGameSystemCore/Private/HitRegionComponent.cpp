#include "HitRegionComponent.h"

class UHitRegionData;
class UPrimitiveComponent;

void UHitRegionComponent::TriggerClientEvent_Implementation(const FDamageReactionEventSummary& EventSummary) {
}

void UHitRegionComponent::GetValidDamageEventFunctionNames(TArray<FName>& Array) const {
}

void UHitRegionComponent::GetValidAssociatedComponentNames(TArray<FName>& Array) const {
}

float UHitRegionComponent::GetHitRegionPercentHealth(UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) const {
    return 0.0f;
}

float UHitRegionComponent::GetHitRegionMaxHealth(UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) const {
    return 0.0f;
}

float UHitRegionComponent::GetHitRegionCurrentHealth(UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) const {
    return 0.0f;
}

UHitRegionComponent::UHitRegionComponent() {
    this->DefaultHitRegion = NULL;
    this->CachedMesh = NULL;
    this->CachedDamageComponent = NULL;
}


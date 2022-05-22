#include "SpawnPointComponent.h"

void USpawnPointComponent::SetSpawnStyleTag(FGameplayTag NewTag) {
}

void USpawnPointComponent::ResetStretchPoint() {
}

bool USpawnPointComponent::HasSpawnAITreeTag() const {
    return false;
}

FTransform USpawnPointComponent::GetStretchyPoint() const {
    return FTransform{};
}

FGameplayTag USpawnPointComponent::GetSpawnStyleTag() const {
    return FGameplayTag{};
}

FGameplayTag USpawnPointComponent::GetSpawnAITreeTag() const {
    return FGameplayTag{};
}

void USpawnPointComponent::EnableSpawnPoint() {
}

void USpawnPointComponent::DisableSpawnPoint() {
}

USpawnPointComponent::USpawnPointComponent() {
    this->bEnabled = true;
    this->SpawnPoint = NULL;
    this->SpawnStretchType = ESpawnStretchType::None;
    this->TraceToGroundDistance = 1000.00f;
    this->bStretchOrient = false;
    this->FilterMatchType = ESpawnPointFilter::Any;
    this->bFilterByTags = false;
    this->TagMatchType = EGameplayContainerMatchType::Any;
    this->bAttachSpawnedActors = false;
}


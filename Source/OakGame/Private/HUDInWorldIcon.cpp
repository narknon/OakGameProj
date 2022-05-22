#include "HUDInWorldIcon.h"

class USceneComponent;
class UInWorldIconData;
class AActor;

void UHUDInWorldIcon::SetTargetRadius(float InRadius) {
}

void UHUDInWorldIcon::SetTargetLocationOffset(FVector InLocationOffset) {
}

void UHUDInWorldIcon::SetTargetLocationComponent(USceneComponent* InTargetLocationComponent) {
}

void UHUDInWorldIcon::SetTargetActor(AActor* InTarget) {
}

void UHUDInWorldIcon::SetLifeTimer(float LifeTime) {
}

void UHUDInWorldIcon::SetIconData(UInWorldIconData* InIconData) {
}










bool UHUDInWorldIcon::IsForTarget(const FHUDInWorldIconTargetInfo& Target) const {
    return false;
}

bool UHUDInWorldIcon::HasValidTarget() const {
    return false;
}

bool UHUDInWorldIcon::HasLifeTimeExpired() const {
    return false;
}

float UHUDInWorldIcon::GetTargetRadius() const {
    return 0.0f;
}

FVector UHUDInWorldIcon::GetTargetLocationOffset() const {
    return FVector{};
}

USceneComponent* UHUDInWorldIcon::GetTargetLocationComponent() const {
    return NULL;
}

FVector UHUDInWorldIcon::GetTargetLocation() const {
    return FVector{};
}

AActor* UHUDInWorldIcon::GetTargetActor() const {
    return NULL;
}

UInWorldIconData* UHUDInWorldIcon::GetIconData() const {
    return NULL;
}

UHUDInWorldIcon::UHUDInWorldIcon() {
    this->Stacks = 1;
    this->IconData = NULL;
}


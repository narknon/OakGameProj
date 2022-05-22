#include "GFxInWorldIcon.h"

class USceneComponent;
class UInWorldIconData;
class AActor;

void UGFxInWorldIcon::SetTargetRadius(float InRadius) {
}

void UGFxInWorldIcon::SetTargetLocationOffset(FVector InLocationOffset) {
}

void UGFxInWorldIcon::SetTargetLocationComponent(USceneComponent* InTargetLocationComponent) {
}

void UGFxInWorldIcon::SetTargetActor(AActor* InTarget) {
}

void UGFxInWorldIcon::SetLifeTimer(float LifeTime) {
}

void UGFxInWorldIcon::SetIconData(UInWorldIconData* InIconData) {
}


bool UGFxInWorldIcon::IsForTarget(const FHUDInWorldIconTargetInfo& Target) const {
    return false;
}

bool UGFxInWorldIcon::HasValidTarget() const {
    return false;
}

bool UGFxInWorldIcon::HasLifeTimeExpired() const {
    return false;
}

float UGFxInWorldIcon::GetTargetRadius() const {
    return 0.0f;
}

FVector UGFxInWorldIcon::GetTargetLocationOffset() const {
    return FVector{};
}

USceneComponent* UGFxInWorldIcon::GetTargetLocationComponent() const {
    return NULL;
}

FVector UGFxInWorldIcon::GetTargetLocation() const {
    return FVector{};
}

AActor* UGFxInWorldIcon::GetTargetActor() const {
    return NULL;
}

UInWorldIconData* UGFxInWorldIcon::GetIconData() const {
    return NULL;
}

UGFxInWorldIcon::UGFxInWorldIcon() {
    this->Stacks = 1;
    this->IconData = NULL;
    this->LastClampUpdateType = EGFxInWorldIconClampUpdate::Unknown;
}


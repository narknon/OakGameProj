#include "CommandRing.h"

class AActor;
class USceneComponent;

void ACommandRing::UpdateTarget(AActor* Target, FVector Location, FRotator Rotation, USceneComponent* Base, FVector SurfaceNormal) {
}

void ACommandRing::SetVisibility(bool bIsVisible) {
}

void ACommandRing::ReleaseTarget() {
}

bool ACommandRing::IsTargetValid() const {
    return false;
}

FCommandRingTarget ACommandRing::GetTarget() const {
    return FCommandRingTarget{};
}

FVector ACommandRing::GetCommandRingTargetWorldLocation(const FCommandRingTarget& NewTargetInfo) {
    return FVector{};
}

FRotator ACommandRing::ComputeRotation(ECommandRingAlignmentType Type, AActor* RefActor, FRotator RefRotation, FVector SurfaceNormal) const {
    return FRotator{};
}

FVector ACommandRing::ComputeLocation(ECommandRingLocationType Type, AActor* RefActor, FVector RefLocation, float SearchDistance, FVector& SurfaceNormal) const {
    return FVector{};
}

ACommandRing::ACommandRing() {
    this->bOnlyVisibleToOwner = true;
    this->RelativeActorType = ECommandRingReferenceActorType::Target;
    this->RelativeLocationType = ECommandRingLocationType::Default;
    this->RelativeLocationSearchDistance = 200.00f;
    this->RelativeAlignmentType = ECommandRingAlignmentType::Default;
}


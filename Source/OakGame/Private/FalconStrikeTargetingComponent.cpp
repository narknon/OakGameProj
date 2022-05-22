#include "FalconStrikeTargetingComponent.h"

class AActor;
class ULightProjectile;

void UFalconStrikeTargetingComponent::ServerResetTargetList_Implementation() {
}
bool UFalconStrikeTargetingComponent::ServerResetTargetList_Validate() {
    return true;
}

void UFalconStrikeTargetingComponent::ServerAddTarget_Implementation(AActor* NewTarget) {
}
bool UFalconStrikeTargetingComponent::ServerAddTarget_Validate(AActor* NewTarget) {
    return true;
}

void UFalconStrikeTargetingComponent::PaintTargetFinished() {
}

void UFalconStrikeTargetingComponent::OnRocketDestroyed(ULightProjectile* Rocket) {
}

void UFalconStrikeTargetingComponent::ForceRemoveIconsDelayFinished() {
}

UFalconStrikeTargetingComponent::UFalconStrikeTargetingComponent() {
    this->FallbackHUDIconSocketName = TEXT("SnapZoom");
    this->HUDIconPatternSize = 25.00f;
    this->HUDIconData = NULL;
    this->MaxTargets = 0;
    this->CachedOwnerPlayer = NULL;
}


#include "WadingEffectsComponent.h"

class UPrimitiveComponent;

void UWadingEffectsComponent::NotifyEndRiverOverlap(UPrimitiveComponent* RiverMesh, UPrimitiveComponent* OtherComponent) {
}

void UWadingEffectsComponent::NotifyBeginRiverOverlap(UPrimitiveComponent* RiverMesh, UPrimitiveComponent* OtherComponent) {
}

UWadingEffectsComponent::UWadingEffectsComponent() {
    this->WakePSC = NULL;
    this->CurrentOverlappingLLB = NULL;
    this->CurrentOverlappingLLBSectionIndex = 0;
    this->CurrentLiquidElement = NULL;
    this->CurrentLiquidPhysMat = NULL;
    this->CurrentLiquidZ = 0.00f;
    this->bIsAttachedToPlayer = false;
}


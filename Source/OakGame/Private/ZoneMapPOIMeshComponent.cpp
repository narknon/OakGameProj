#include "ZoneMapPOIMeshComponent.h"

class UMaterialInstanceDynamic;

void UZoneMapPOIMeshComponent::ViewModeChanged_Implementation() {
}

void UZoneMapPOIMeshComponent::SetupMeshMaterial(UMaterialInstanceDynamic* InMeshMaterial) {
}

UZoneMapPOIMeshComponent::UZoneMapPOIMeshComponent() {
    this->MeshRadius = 0;
    this->MeshHeightScale = 0.00f;
    this->AreaRadius = 0;
    this->IconZOffset = 0.00f;
    this->MeshMaterial = NULL;
}


#include "TritonAcousticDataComponent.h"

void UTritonAcousticDataComponent::VisualizeMaterials() {
}

void UTritonAcousticDataComponent::UpdateProbeLocations() {
}

void UTritonAcousticDataComponent::RefreshCachedVoxelData() {
}

void UTritonAcousticDataComponent::BuildFallbackAcousticData() {
}

void UTritonAcousticDataComponent::AuditProbeLocations() {
}

UTritonAcousticDataComponent::UTritonAcousticDataComponent() {
    this->SpeedOfSound = 340.00f;
    this->ExtraTerrainThickness = 3;
    this->bOnlyGenerateSelected = false;
    this->CachedVoxelData = NULL;
    this->CachedVoxelDataNoThinning = NULL;
    this->CachedNavMeshVoxelData = NULL;
}


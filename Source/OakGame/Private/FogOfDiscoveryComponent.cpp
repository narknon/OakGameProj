#include "FogOfDiscoveryComponent.h"

class UPawnAttachSlotComponent;
class APawn;

void UFogOfDiscoveryComponent::SaveFODTexture(bool bFast) {
}

void UFogOfDiscoveryComponent::OnZoneMapMeshDataLoaded() {
}

void UFogOfDiscoveryComponent::OnPlayerExitedVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UFogOfDiscoveryComponent::OnPlayerEnteringVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UFogOfDiscoveryComponent::OnCharacterChanged(APawn* NewPawn, APawn* OldPawn) {
}

void UFogOfDiscoveryComponent::DeferredInitializeZoneMapMesh() {
}

UFogOfDiscoveryComponent::UFogOfDiscoveryComponent() {
    this->FogOfDiscoveryMID = NULL;
}


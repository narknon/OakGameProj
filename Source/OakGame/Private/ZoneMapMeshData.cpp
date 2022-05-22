#include "ZoneMapMeshData.h"

class UStaticMeshComponent;

void UZoneMapMeshData::SetupStaticMeshComponent(int32 Index, UStaticMeshComponent* InStaticMeshComponent) {
}

UZoneMapMeshData::UZoneMapMeshData() {
    this->FogOfDiscoveryTexture = NULL;
    this->ZoneMapMeshVersion = 0;
    this->FoDCapture = NULL;
}


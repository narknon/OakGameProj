#include "FogOfDiscoveryCapture.h"

class UZoneMapData;

bool AFogOfDiscoveryCapture::SetUpDataForLevel(UZoneMapData* LevelZoneMap, FVector2D& CaptureSize, bool bImmediateLoad) {
    return false;
}

bool AFogOfDiscoveryCapture::SetupComponentsForCapture_Implementation() {
    return false;
}

void AFogOfDiscoveryCapture::OnZoneMapMeshDataLoaded() {
}


void AFogOfDiscoveryCapture::FogTextureCreated() {
}

void AFogOfDiscoveryCapture::CaptureScene() {
}

AFogOfDiscoveryCapture::AFogOfDiscoveryCapture() {
    this->RunBlueprintLogic = false;
    this->OverrideDiscoveryTexture = NULL;
    this->WorldPositionTexture = NULL;
    this->CurrentLevelZoneMap = NULL;
    this->PendingLevelZoneMap = NULL;
}


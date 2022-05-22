#include "AudioOcclusionVoxelDataProvider.h"

UAudioOcclusionVoxelDataProvider::UAudioOcclusionVoxelDataProvider() {
    this->bUseMaterialLibrary = false;
    this->CheckCollisionChannel = ECC_Visibility;
    this->CheckCollisionResponse = ECR_Block;
    this->bVoxelizeFoliage = false;
    this->ExtraTerrainThickness = 0;
    this->bFlagMatchingVoxels = false;
}


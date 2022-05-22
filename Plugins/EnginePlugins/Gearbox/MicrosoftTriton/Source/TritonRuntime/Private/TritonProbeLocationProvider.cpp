#include "TritonProbeLocationProvider.h"

class UAudioOcclusionVoxelDataProvider;

void ATritonProbeLocationProvider::FindProbeLocations(const FBoxSphereBounds& WorldBoxSphere, const UAudioOcclusionVoxelDataProvider* GeoVoxels, const UAudioOcclusionVoxelDataProvider* NavVoxels, TArray<FVector>& out_ResultProbeLocations) {
}

ATritonProbeLocationProvider::ATritonProbeLocationProvider() {
    this->TargetDistanceAboveGround = 200.00f;
    this->MinimumHorizontalSpacing = 500.00f;
    this->MinWallDistanceForLowDensityProbes = 1000.00f;
    this->SpacingFactorForLowDensityProbes = 2.00f;
    this->DecimationThreshold = 750.00f;
    this->MaxNumberDecimations = 5;
}


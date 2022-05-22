#include "AIOCameraStatePostProcessOverrides.h"

FAIOCameraStatePostProcessOverrides::FAIOCameraStatePostProcessOverrides() {
    this->bOverrideFocalDistance = false;
    this->bOverrideFarTransitionRegion = false;
    this->bOverrideNearTransitionRegion = false;
    this->bOverrideFocalRegion = false;
    this->bOverrideFarBlurSize = false;
    this->bOverrideNearBlurSize = false;
    this->bOverrideVignetteIntensity = false;
    this->FocalDistanceOverride = 0.00f;
    this->FarTransitionRegionOverride = 0.00f;
    this->NearTransitionRegionOverride = 0.00f;
    this->FocalRegionOverride = 0.00f;
    this->FarBlurSizeOverride = 0.00f;
    this->NearBlurSizeOverride = 0.00f;
    this->VignetteIntensityOverride = 0.00f;
}


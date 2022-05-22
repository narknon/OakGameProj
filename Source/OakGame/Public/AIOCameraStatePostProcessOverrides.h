#pragma once
#include "CoreMinimal.h"
#include "AIOCameraStatePostProcessOverrides.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAIOCameraStatePostProcessOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideFocalDistance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideFarTransitionRegion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideNearTransitionRegion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideFocalRegion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideFarBlurSize: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideNearBlurSize: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideVignetteIntensity: 1;
    
    UPROPERTY(EditAnywhere)
    float FocalDistanceOverride;
    
    UPROPERTY(EditAnywhere)
    float FarTransitionRegionOverride;
    
    UPROPERTY(EditAnywhere)
    float NearTransitionRegionOverride;
    
    UPROPERTY(EditAnywhere)
    float FocalRegionOverride;
    
    UPROPERTY(EditAnywhere)
    float FarBlurSizeOverride;
    
    UPROPERTY(EditAnywhere)
    float NearBlurSizeOverride;
    
    UPROPERTY(EditAnywhere)
    float VignetteIntensityOverride;
    
    FAIOCameraStatePostProcessOverrides();
};


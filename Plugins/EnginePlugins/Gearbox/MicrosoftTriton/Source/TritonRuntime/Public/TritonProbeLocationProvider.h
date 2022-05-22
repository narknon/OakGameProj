#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TritonProbeLocationProvider.generated.h"

class ATritonProbeLocationProvider;
class UAudioOcclusionVoxelDataProvider;

UCLASS()
class ATritonProbeLocationProvider : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TargetDistanceAboveGround;
    
    UPROPERTY(EditAnywhere)
    float MinimumHorizontalSpacing;
    
    UPROPERTY(EditAnywhere)
    float MinWallDistanceForLowDensityProbes;
    
    UPROPERTY(EditAnywhere)
    float SpacingFactorForLowDensityProbes;
    
    UPROPERTY(EditAnywhere)
    float DecimationThreshold;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumberDecimations;
    
    UPROPERTY(EditAnywhere)
    TArray<ATritonProbeLocationProvider*> SuppressingZones;
    
    ATritonProbeLocationProvider();
    UFUNCTION()
    void FindProbeLocations(const FBoxSphereBounds& WorldBoxSphere, const UAudioOcclusionVoxelDataProvider* GeoVoxels, const UAudioOcclusionVoxelDataProvider* NavVoxels, TArray<FVector>& out_ResultProbeLocations);
    
};


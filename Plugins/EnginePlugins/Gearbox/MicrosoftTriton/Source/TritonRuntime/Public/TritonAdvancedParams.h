#pragma once
#include "CoreMinimal.h"
#include "TritonAdvancedParams.generated.h"

USTRUCT(BlueprintType)
struct FTritonAdvancedParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseProbeStreaming;
    
    UPROPERTY(EditAnywhere)
    float PreloadDistance;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLoadedProbes;
    
    UPROPERTY(EditAnywhere)
    float MinDistanceFractionForPreload;
    
    UPROPERTY(EditAnywhere)
    int32 SpatialInterpCacheSize;
    
    UPROPERTY(EditAnywhere)
    int32 VoxelDecompressionCacheSize;
    
    UPROPERTY(EditAnywhere)
    int32 SimCellCacheSize;
    
    UPROPERTY(EditAnywhere)
    bool bAllowProbeAutoLoad;
    
    UPROPERTY(EditAnywhere)
    float ProbeSearchDistance;
    
    TRITONRUNTIME_API FTritonAdvancedParams();
};


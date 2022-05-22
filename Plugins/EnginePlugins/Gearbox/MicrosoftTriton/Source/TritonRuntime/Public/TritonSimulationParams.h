#pragma once
#include "CoreMinimal.h"
#include "TritonSimulationParams.generated.h"

USTRUCT(BlueprintType)
struct FTritonSimulationParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SimulationFrequency;
    
    UPROPERTY(EditAnywhere)
    float SimulationRadius;
    
    UPROPERTY(EditAnywhere)
    float SimulationDepth;
    
    UPROPERTY(EditAnywhere)
    float SimulationHeight;
    
    UPROPERTY(EditAnywhere)
    float IdealVoxelmapResolutionInMeters;
    
    UPROPERTY(EditAnywhere)
    bool bUseRMSForAveragingLongDistanceVolumes;
    
    UPROPERTY(EditAnywhere)
    bool bUseWallinessFactorForLongDistanceVolumes;
    
    TRITONRUNTIME_API FTritonSimulationParams();
};


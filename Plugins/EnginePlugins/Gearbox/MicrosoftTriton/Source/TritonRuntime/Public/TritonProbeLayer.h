#pragma once
#include "CoreMinimal.h"
#include "WwiseAcousticEmulationParameters.h"
#include "TritonProbeSet.h"
#include "TritonSimulationParams.h"
#include "TritonLayerFadeParams.h"
#include "TritonAdvancedParams.h"
#include "Engine/EngineTypes.h"
#include "FallbackAcousticData.h"
#include "TritonProbeLayer.generated.h"

USTRUCT(BlueprintType)
struct FTritonProbeLayer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTritonProbeSet> ProbeLocationSets;
    
    UPROPERTY(EditAnywhere)
    FTritonSimulationParams SimulationParams;
    
    UPROPERTY(EditAnywhere)
    FTritonLayerFadeParams FadeParams;
    
    UPROPERTY(EditAnywhere)
    FTritonAdvancedParams AdvancedParams;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath DatasetPathOverride;
    
    UPROPERTY(EditAnywhere)
    FString DatasetFile;
    
    UPROPERTY(EditAnywhere)
    TArray<FFallbackAcousticData> FallbackAcousticData;
    
    UPROPERTY(EditAnywhere)
    FFallbackAcousticData FallbackAcousticDataAggregate;
    
    UPROPERTY(EditAnywhere)
    FWwiseAcousticEmulationParameters FallbackAcousticEmulationParameters;
    
    UPROPERTY(Transient)
    bool bHasGeneratedEarlyReflections;
    
    TRITONRUNTIME_API FTritonProbeLayer();
};


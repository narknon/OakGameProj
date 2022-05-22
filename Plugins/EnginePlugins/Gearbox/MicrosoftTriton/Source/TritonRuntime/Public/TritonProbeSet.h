#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TritonProbeSet.generated.h"

class ATritonProbeLocationProvider;

USTRUCT(BlueprintType)
struct FTritonProbeSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Label;
    
    UPROPERTY(EditAnywhere)
    ATritonProbeLocationProvider* ProbeLocationProvider;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> ProbeLocations;
    
    UPROPERTY(EditAnywhere)
    bool bLowDetail;
    
    TRITONRUNTIME_API FTritonProbeSet();
};


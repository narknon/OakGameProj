#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerfSample.h"
#include "Engine/LatentActionManager.h"
#include "GbxPerfScopePerfSampleData.generated.h"

UCLASS(BlueprintType)
class UGbxPerfScopePerfSampleData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FPerfSample> Samples;
    
    UGbxPerfScopePerfSampleData();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GetMapGPUHotspots(UObject* WorldContext, int32 NumSamples, FLatentActionInfo LatentInfo);
    
};


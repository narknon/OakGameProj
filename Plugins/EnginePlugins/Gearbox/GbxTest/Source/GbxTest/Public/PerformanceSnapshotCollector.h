#pragma once
#include "CoreMinimal.h"
#include "GbxProbeExtraData.h"
#include "GbxProbeId.h"
#include "ESnapshotExecOutput.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "PerformanceSnapshotCollector.generated.h"

class UPerformanceSnapshotCollector;
class UObject;

UCLASS(BlueprintType)
class UPerformanceSnapshotCollector : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerformanceSnapshotCollector();
    UFUNCTION(BlueprintCallable)
    void ResetSnapshotProviders();
    
    UFUNCTION(BlueprintCallable)
    static UPerformanceSnapshotCollector* CreatePerformanceSnapshotCollector(const FString& StatSection, ESnapshotExecOutput& ExecOut);
    
    UFUNCTION(BlueprintCallable)
    void CollectSnapshot(UObject* WorldContextObject, const FString& ReportContext, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void CollectProbeSnapshot(UObject* WorldContextObject, const FString& ReportContext, const FGbxProbeId& ProbeId, const FString& Test, const TArray<FGbxProbeExtraData>& ExtraDataArray, FLatentActionInfo LatentInfo);
    
};


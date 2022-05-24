#include "PerformanceSnapshotCollector.h"

class UObject;
class UPerformanceSnapshotCollector;

void UPerformanceSnapshotCollector::ResetSnapshotProviders() {
}

UPerformanceSnapshotCollector* UPerformanceSnapshotCollector::CreatePerformanceSnapshotCollector(const FString& StatSection, ESnapshotExecOutput& ExecOut) {
    return NULL;
}

void UPerformanceSnapshotCollector::CollectSnapshot(UObject* WorldContextObject, const FString& ReportContext, FLatentActionInfo LatentInfo) {
}

void UPerformanceSnapshotCollector::CollectProbeSnapshot(UObject* WorldContextObject, const FString& ReportContext, const FGbxProbeId& ProbeId, const FString& Test, const TArray<FGbxProbeExtraData>& ExtraDataArray, FLatentActionInfo LatentInfo) {
}

UPerformanceSnapshotCollector::UPerformanceSnapshotCollector() {
}


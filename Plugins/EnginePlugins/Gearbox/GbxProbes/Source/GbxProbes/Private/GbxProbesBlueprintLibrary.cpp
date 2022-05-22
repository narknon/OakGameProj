#include "GbxProbesBlueprintLibrary.h"

class UObject;

void UGbxProbesBlueprintLibrary::ResolveGbxProbeId(const UObject* InObj, FGameplayTag InTag, FGbxProbeId& OutId, bool& IsValid) {
}

void UGbxProbesBlueprintLibrary::MakeProbeId(const FString& Class, const FString& Type, const FString& SubType, FGbxProbeId& OutId) {
}

void UGbxProbesBlueprintLibrary::IsValidId(const FGbxProbeId& ProbeId, bool& IsValid) {
}

void UGbxProbesBlueprintLibrary::IsTestProbeEnabled(const FGbxProbeId& ProbeId, FName Test, bool& IsEnabled) {
}

void UGbxProbesBlueprintLibrary::IsTestEnabled(FName Test, bool& IsEnabled) {
}

void UGbxProbesBlueprintLibrary::IsClassEnabled(FName Class, bool& IsEnabled) {
}

void UGbxProbesBlueprintLibrary::FlushPendingTestProbes() {
}

void UGbxProbesBlueprintLibrary::EmitTestProbeResultWithData(const FGbxProbeId& ProbeId, FName Test, EGbxProbeResult Result, const TArray<FGbxProbeExtraData>& ExtraDataArray) {
}

void UGbxProbesBlueprintLibrary::EmitTestProbeResult(const FGbxProbeId& ProbeId, FName Test, EGbxProbeResult Result, const FString& ExtraData) {
}

UGbxProbesBlueprintLibrary::UGbxProbesBlueprintLibrary() {
}


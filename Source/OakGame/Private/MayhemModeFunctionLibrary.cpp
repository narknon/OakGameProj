#include "MayhemModeFunctionLibrary.h"

class UObject;
class AOakPlayerController;

EPOIActivationResult UMayhemModeFunctionLibrary::TryMapReloadForMayhemActivityOrLevelChange(const UObject* WorldContextObject, AOakPlayerController* OptionalInstigator, int32 MayhemLevel, int32 RandomSeed) {
    return EPOIActivationResult::Success;
}

void UMayhemModeFunctionLibrary::RerollNonCurrent(const UObject* WorldContextObject) {
}

void UMayhemModeFunctionLibrary::MutateRandomSeed(const UObject* WorldContextObject) {
}

bool UMayhemModeFunctionLibrary::IsMayhemModeAvailable(const UObject* WorldContextObject) {
    return false;
}

bool UMayhemModeFunctionLibrary::IsMayhemModeActive(const UObject* WorldContextObject) {
    return false;
}

int32 UMayhemModeFunctionLibrary::GetRandomSeed(const UObject* WorldContextObject) {
    return 0;
}

int32 UMayhemModeFunctionLibrary::GetMayhemLevel(const UObject* WorldContextObject) {
    return 0;
}

int32 UMayhemModeFunctionLibrary::GetMaxMayhemLevel(const UObject* WorldContextObject) {
    return 0;
}

int32 UMayhemModeFunctionLibrary::GetConditionallyOverriddenMayhemLevel(const UObject* WorldContextObject) {
    return 0;
}

void UMayhemModeFunctionLibrary::DeactivateMayhemMode(const UObject* WorldContextObject) {
}

void UMayhemModeFunctionLibrary::AssignOptionalOverrides(const UObject* WorldContextObject, const FMayhemDebugOverrides& OptionalOverrides) {
}

void UMayhemModeFunctionLibrary::ActivateMayhemMode(const UObject* WorldContextObject, int32 MayhemLevel, int32 RandomSeed) {
}

UMayhemModeFunctionLibrary::UMayhemModeFunctionLibrary() {
}


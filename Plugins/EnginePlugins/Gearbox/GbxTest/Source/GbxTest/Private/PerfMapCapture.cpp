#include "PerfMapCapture.h"

class UObject;
class UWorld;

void UPerfMapCapture::SavePerfMapCapturesFromConfiguration(UWorld* World, const FString& Path, FMapParameters Configuration, FLatentActionInfo LatentInfo) {
}

bool UPerfMapCapture::SavePerfMapCaptures(UObject* World, const FString& Path, float Density, bool bLighting, bool bSpecular, float Gamma, int32 Width, int32 Height, float VolumeX, float VolumeY, float VolumeZ, const FString& OutputPattern) {
    return false;
}

UPerfMapCapture::UPerfMapCapture() {
}


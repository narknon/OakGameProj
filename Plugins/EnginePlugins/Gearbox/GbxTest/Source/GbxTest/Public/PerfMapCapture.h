#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MapParameters.h"
#include "Engine/LatentActionManager.h"
#include "PerfMapCapture.generated.h"

class UWorld;

UCLASS(BlueprintType)
class GBXTEST_API UPerfMapCapture : public UObject {
    GENERATED_BODY()
public:
    UPerfMapCapture();
    UFUNCTION(BlueprintCallable)
    static void SavePerfMapCapturesFromConfiguration(UWorld* World, const FString& Path, FMapParameters Configuration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool SavePerfMapCaptures(UObject* World, const FString& Path, float Density, bool bLighting, bool bSpecular, float Gamma, int32 Width, int32 Height, float VolumeX, float VolumeY, float VolumeZ, const FString& OutputPattern);
    
};


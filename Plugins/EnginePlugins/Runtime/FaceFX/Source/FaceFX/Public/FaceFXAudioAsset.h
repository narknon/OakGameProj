#pragma once
#include "CoreMinimal.h"
#include "FaceFXAudioAsset.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FACEFX_API FFaceFXAudioAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEvent;
    
    UPROPERTY(EditAnywhere)
    uint32 WwiseID;
    
    FFaceFXAudioAsset();
};


#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimId.h"
#include "FaceFXAudioAsset.h"
#include "FaceFXAnimData.h"
#include "GbxFaceFXAnimData.generated.h"

USTRUCT(BlueprintType)
struct FGbxFaceFXAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FFaceFXAnimId FaceFXAnimId;
    
    UPROPERTY(VisibleAnywhere)
    FFaceFXAudioAsset Audio;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FFaceFXAnimData> AnimationRawData;
    
    FACEFX_API FGbxFaceFXAnimData();
};


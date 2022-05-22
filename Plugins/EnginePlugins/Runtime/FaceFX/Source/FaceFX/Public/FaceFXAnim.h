#pragma once
#include "CoreMinimal.h"
#include "FaceFXAsset.h"
#include "FaceFXAnimData.h"
#include "FaceFXAnimId.h"
#include "FaceFXAudioAsset.h"
#include "FaceFXAnim.generated.h"

UCLASS()
class FACEFX_API UFaceFXAnim : public UFaceFXAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TArray<FFaceFXAnimData> PlatformData;
    
    UPROPERTY(EditInstanceOnly)
    FFaceFXAnimId ID;
    
    UPROPERTY(EditInstanceOnly)
    FFaceFXAudioAsset Audio;
    
public:
    UFaceFXAnim();
};


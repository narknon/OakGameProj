#pragma once
#include "CoreMinimal.h"
#include "FaceFXSkelMeshComponentId.h"
#include "FaceFXAnimId.h"
#include "FaceFXTrackKey.generated.h"

class UFaceFXAnim;

USTRUCT(BlueprintType)
struct FFaceFXTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFaceFXSkelMeshComponentId SkelMeshComponentId;
    
    UPROPERTY(EditAnywhere)
    FFaceFXAnimId AnimationId;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFaceFXAnim> Animation;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY(EditAnywhere)
    uint8 bLoop: 1;
    
private:
    UPROPERTY(Transient)
    uint8 bIsAnimationDurationLoaded: 1;
    
    UPROPERTY(Transient)
    float AnimationDuration;
    
public:
    FACEFX_API FFaceFXTrackKey();
};


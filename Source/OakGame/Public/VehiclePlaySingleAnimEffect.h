#pragma once
#include "CoreMinimal.h"
#include "BaseVehicleEffectData.h"
#include "EVehiclePlaySingleAnimMode.h"
#include "VehiclePlaySingleAnimEffect.generated.h"

class UAnimationAsset;

UCLASS(EditInlineNew)
class UVehiclePlaySingleAnimEffect : public UBaseVehicleEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SkelMeshTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EVehiclePlaySingleAnimMode PlayMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimationAsset* AnimationAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlaying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCurrentAnimPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Position;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayRate;
    
    UVehiclePlaySingleAnimEffect();
};


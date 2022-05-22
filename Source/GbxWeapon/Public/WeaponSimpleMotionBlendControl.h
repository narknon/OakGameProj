#pragma once
#include "CoreMinimal.h"
#include "WeaponSimpleMotionControlBase.h"
#include "SimpleMotionState.h"
#include "Animation/AnimData/BoneMaskFilter.h"
#include "WeaponSimpleMotionBlendControl.generated.h"

class UAnimationAsset;

UCLASS(EditInlineNew)
class UWeaponSimpleMotionBlendControl : public UWeaponSimpleMotionControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseExistingNode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMeshSpaceBlend: 1;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* Animation;
    
    UPROPERTY(EditAnywhere)
    FInputBlendPose BlendLayerSetup;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState ActiveState;
    
    UPROPERTY(EditAnywhere)
    float ActiveBlendTarget;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState RecoveryState;
    
    UWeaponSimpleMotionBlendControl();
};


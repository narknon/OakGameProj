#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "CharacterJumpGoalSetting.h"
#include "ElementalSlideEffect.h"
#include "CharacterSlidingData.generated.h"

class UControlledMove;
class UImpactData;
class UWwiseEvent;

UCLASS()
class UCharacterSlidingData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinSprintSpeedPctToStartSliding;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UControlledMove> ControlledMove;
    
    UPROPERTY(EditAnywhere)
    FName FootBone;
    
    UPROPERTY(EditAnywhere)
    UImpactData* FootImpact;
    
    UPROPERTY(EditAnywhere)
    UImpactData* FootImpact1st;
    
    UPROPERTY(EditAnywhere)
    FElementalSlideEffect ElementalSlideEffects[6];
    
    UPROPERTY(EditAnywhere)
    FElementalSlideEffect ElementalSlideEffects1P[6];
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEventStart;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEventStop;
    
    UPROPERTY(EditAnywhere)
    FName BaseBone;
    
    UPROPERTY(EditAnywhere)
    FName SpeedParticleParameterName;
    
    UPROPERTY(EditAnywhere)
    UImpactData* BaseImpact;
    
    UPROPERTY(EditAnywhere)
    float LegsRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinDesiredAngleRotationBetweenCameraAndLegsYaw;
    
    UPROPERTY(EditAnywhere)
    float MaxAllowedAimOffset;
    
    UPROPERTY(EditAnywhere)
    float FootCollisionDistance;
    
    UPROPERTY(EditAnywhere)
    float FootTraceLateralOffset;
    
    UPROPERTY(EditAnywhere)
    float FootCollisionStopAngle;
    
    UPROPERTY(VisibleAnywhere)
    float FootCollisionStopAngleDot;
    
    UPROPERTY(EditAnywhere)
    float FootCollisionStopSpeed;
    
    UPROPERTY(EditAnywhere)
    float LegsCollisionInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinSprintSpeedPctToTriggerSlideJump;
    
    UPROPERTY(EditAnywhere)
    FCharacterJumpGoalSetting JumpGoal;
    
    UPROPERTY(EditAnywhere)
    float JumpHorizontalSpeedScale;
    
    UPROPERTY(EditAnywhere)
    float MinForceSlideFloorAngle;
    
    UPROPERTY(VisibleAnywhere)
    float ForceSlideFloorZ;
    
    UPROPERTY(EditAnywhere)
    float MinDownhillSpeedToStartForcedSlide;
    
    UPROPERTY(EditAnywhere)
    float MaxDirectionDeviationFromDownhillAngle;
    
    UCharacterSlidingData();
};


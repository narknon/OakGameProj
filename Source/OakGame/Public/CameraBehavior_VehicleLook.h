#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "EIntroType.h"
#include "CameraKeyOffset.h"
#include "CameraPitchOffset.h"
#include "VehicleOverrideData.h"
#include "CameraIntroBlend.h"
#include "CameraBehavior_VehicleLook.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UCameraBehavior_VehicleLook : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFollowGroundNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector GroundDetectionOrigin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector GroundDetectionPoint0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector GroundDetectionPoint1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector GroundDetectionPoint2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BankingTolerance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve BankingDampingBySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BaseLookAtPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LookAtOffsetInTheAir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtOffsetInTheAirDamping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtOffsetInTheGroundDamping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCameraFollowVehicleBody;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve CameraFollowBodyPitchRotationBySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve CameraFollowBodyRollRotationBySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraBodyFollowDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseForwardOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraOffsetDamping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FreeAimMinTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCameraKeyOffset FreeLookOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bKeepCameraOffsetsInFreeLook;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve ForwardOffsetByPitchAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve UpOffsetByPitchAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCameraPitchOffset> PitchKeysByYawAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClampToRotateOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableAutoLookInDrivingCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve MinVelocityByTurnRateForAutoLook;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoLookPitchDamping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoResetDamping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve AutoLookYawFixBySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LatteralOffsetDampingFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardOffsetDampingFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowAutoLookInReverse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float KeepLookAtRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float KeepLookAtSpeedTreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BodySocketToFollow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCameraKeyOffset StationaryOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve ForwardInterpolationRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCameraKeyOffset ForwardOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve ReverseInterpolationRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReverseMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCameraKeyOffset ReverseOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyTurnSettingsInReverse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve TurnInterpolationRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCameraKeyOffset TurnOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocalOriginRayCast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DodgeRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimalRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementDampingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCameraIntroBlend DefaultIntro;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EIntroType, FCameraIntroBlend> IntroByType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVehicleOverrideData> OverrideByParts;
    
public:
    UCameraBehavior_VehicleLook();
};


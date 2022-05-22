#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AimAssistParameters.h"
#include "OakAimAssistParameters.generated.h"

UCLASS()
class UOakAimAssistParameters : public UAimAssistParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Stickiness;
    
    UPROPERTY(EditDefaultsOnly)
    float ZoomStickiness;
    
    UPROPERTY(EditDefaultsOnly)
    float ReduceInput;
    
    UPROPERTY(EditDefaultsOnly)
    float RadiusScaleDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MinRadiusScale;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRadiusScale;
    
    UPROPERTY(EditDefaultsOnly)
    float FullStrengthRatio;
    
    UPROPERTY(EditDefaultsOnly)
    float FarPlaneMinCap;
    
    UPROPERTY(EditDefaultsOnly)
    float FarPlaneMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float FarPlaneMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float NearPlaneMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float NearPlaneMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float NearPlaneMaxScaling;
    
    UPROPERTY(EditDefaultsOnly)
    float IdleAimAssistSmoothingDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float NoTargetAimAssistSmoothingDuration;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBulletMagnetismAlwaysOn;
    
    UPROPERTY(EditDefaultsOnly)
    float BulletMagnetismOuterAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float BulletMagnetismInnerAngle;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBulletMagnetismZoomScale;
    
    UPROPERTY(EditDefaultsOnly)
    float BulletMagnetismZoomScale;
    
    UPROPERTY(EditAnywhere)
    FVector2D BulletMagnetismCorrectionRate;
    
    UPROPERTY(EditAnywhere)
    float MaxBulletMagnetismDeflection;
    
    UPROPERTY(EditAnywhere)
    float MaxSnapToTargetPitch;
    
    UPROPERTY(EditAnywhere)
    float MaxSnapToTargetYaw;
    
private:
    UPROPERTY(Transient)
    float InitialStickiness;
    
    UPROPERTY(Transient)
    float InitialZoomStickiness;
    
    UPROPERTY(Transient)
    float InitialReduceInput;
    
    UPROPERTY(Transient)
    float InitialRadiusScaleDistance;
    
    UPROPERTY(Transient)
    float InitialMinRadiusScale;
    
    UPROPERTY(Transient)
    float InitialMaxRadiusScale;
    
    UPROPERTY(Transient)
    float InitialFullStrengthRatio;
    
    UPROPERTY(Transient)
    float InitialFarPlaneMinCap;
    
    UPROPERTY(Transient)
    float InitialFarPlaneMinDistance;
    
    UPROPERTY(Transient)
    float InitialFarPlaneMaxDistance;
    
    UPROPERTY(Transient)
    float InitialNearPlaneMaxDistance;
    
    UPROPERTY(Transient)
    float InitialNearPlaneMinDistance;
    
    UPROPERTY(Transient)
    float InitialNearPlaneMaxScaling;
    
    UPROPERTY(Transient)
    float InitialIdleAimAssistSmoothingDuration;
    
    UPROPERTY(Transient)
    float InitialNoTargetAimAssistSmoothingDuration;
    
    UPROPERTY(Transient)
    bool InitialbBulletMagnetismAlwaysOn;
    
    UPROPERTY(Transient)
    float InitialBulletMagnetismOuterAngle;
    
    UPROPERTY(Transient)
    float InitialBulletMagnetismInnerAngle;
    
    UPROPERTY(Transient)
    bool InitialbBulletMagnetismZoomScale;
    
    UPROPERTY(Transient)
    float InitialBulletMagnetismZoomScale;
    
    UPROPERTY(Transient)
    FVector2D InitialBulletMagnetismCorrectionRate;
    
    UPROPERTY(Transient)
    float InitialMaxBulletMagnetismDeflection;
    
    UPROPERTY(Transient)
    float InitialMaxSnapToTargetPitch;
    
    UPROPERTY(Transient)
    float InitialMaxSnapToTargetYaw;
    
public:
    UOakAimAssistParameters();
};


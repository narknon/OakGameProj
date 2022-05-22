#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Curves/CurveFloat.h"
#include "RoadBumpinessData.h"
#include "HoverBodySinus.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_TechnicalHandler.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_TechnicalHandler : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SuspensionDropMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SuspensionCamberCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CamberIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BigWheelsBodyZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AccelerationTreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurningVelocityTreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollMaxAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BankingBoostAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve PitchAccelerationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoostBodyPitchAdd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoostBodyUpAdd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSteeringAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RoadSurfaceAmplitudePitchHighFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RoadSurfaceFrequencyPitchHighFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RoadSurfaceFrequencyRollFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RoadSurfacePersistencePitchHighFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RoadSurfaceOctavesPitchHighFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RoadSurfaceAmplitudePitchLowFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RoadSurfaceFrequencyPitchLowFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RoadSurfacePersistencePitchLowFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RoadSurfaceOctavesPitchLowFreq;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BodyFollowSpeedOfPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BodyFollowAmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinTimeToSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTimeToSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinBumpTimeValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxBumpTimeValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinAlphaValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAlphaValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxInterpSpeed;
    
private:
    UPROPERTY(EditAnywhere)
    float DefaultRoadBumpiness;
    
    UPROPERTY(EditAnywhere)
    TArray<FRoadBumpinessData> RoadBumpinessOverrides;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EngineAmplitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BodyCycleFromEngineCycleRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IdleRPM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverWheelAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverSpinSpeedIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverSpinSpeedFullTrottle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverOffsetZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverFrontWheelAdd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverMaxVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverSuspensionIntensityUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverSuspensionIntensityDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHoverBodySinus> HoverBodySin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SwivelCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverMaxPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverMaxRollAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverPitchBoostingInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverRollInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverWheelRotationIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverWheelRotationIntensityY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve HoverBodyTransitionCurve;
    
    FAnimNode_TechnicalHandler();
};


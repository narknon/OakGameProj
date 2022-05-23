#pragma once
#include "CoreMinimal.h"
#include "HoverBodySinusOutrunner.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "RoadBumpinessDataOutrunner.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_OutrunnerHandler.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_OutrunnerHandler : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SuspensionDropMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AccelInterpSpeed;
    
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
    float BoostAlphaInterSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BankingBoostAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve PitchAccelerationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve TranslationUpAccelerationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSteeringAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BoostBodyTranslation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoostBodyPitchAdd;
    
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
    TArray<FRoadBumpinessDataOutrunner> RoadBumpinessOverrides;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverWheelSpeedWhenTurningOnSelf;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverWheelAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector HoverWheelRearLeftPos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector HoverWheelRearRightPos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverSpinSpeedIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverSuspensionArmAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverSuspensionArmAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverSuspensionArmSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverMaxPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverMaxRollAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverSpinSpeedFullTrottle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverSpinMaxSpeedAngularVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverPitchBoostingInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverRollInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverBodyAccelTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverBodyActiveBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverVelocityIntensityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverVelocityIntensityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverWheelRotationIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverWheelRotationIntensityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHoverBodySinusOutrunner> HoverBodySin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SwivelCone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve HoverBodyTransitionCurve;
    
    FAnimNode_OutrunnerHandler();
};


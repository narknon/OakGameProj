#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Curves/CurveFloat.h"
#include "AnimNode_RevolverHandler.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_RevolverHandler : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSteeringAngle;
    
    UPROPERTY(EditAnywhere)
    float SinPeriod1;
    
    UPROPERTY(EditAnywhere)
    float SinPeriod2;
    
    UPROPERTY(EditAnywhere)
    float SinPeriod3;
    
    UPROPERTY(EditAnywhere)
    float SinAmplitude1;
    
    UPROPERTY(EditAnywhere)
    float SinAmplitude2;
    
    UPROPERTY(EditAnywhere)
    float SinAmplitude3;
    
    UPROPERTY(EditAnywhere)
    float SwivelConeX;
    
    UPROPERTY(EditAnywhere)
    float SwivelConeY;
    
    UPROPERTY(EditAnywhere)
    float SwivelPeriodX;
    
    UPROPERTY(EditAnywhere)
    float SwivelPeriodY;
    
    UPROPERTY(EditAnywhere)
    float HoverIntrepSpeed;
    
    UPROPERTY(EditAnywhere)
    float BodyCompensationInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float HoverBodyCompensationInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float BodyOffsetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float BodyHoverOffset;
    
    UPROPERTY(EditAnywhere)
    float PositionOffsetFromRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverMaxPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverMaxRollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverPitchInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverPitchBoostingInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoverRollInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve AccelerationCurve;
    
    FAnimNode_RevolverHandler();
};


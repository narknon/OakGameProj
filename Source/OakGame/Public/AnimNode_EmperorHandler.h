#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_EmperorHandler.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_EmperorHandler : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SuspensionDropMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlidingInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D SlidingDisplacement;
    
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
    float HoverIntrepSpeed;
    
    UPROPERTY(EditAnywhere)
    float HoverBodyHeigth;
    
    UPROPERTY(EditAnywhere)
    float InoccupiedHoverBodyHeigth;
    
    FAnimNode_EmperorHandler();
};


#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_Carnivora.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_Carnivora : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxYawFrontWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinYawFrontWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxYawTireTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinYawTireTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinTrackShaftBoneScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTrackShaftBoneScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrontWheelsMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrontWheelsMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TireTrackMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TireTrackMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrontWheelRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TireTrackWheelsRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmallGearRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BigAxleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainAxleRadius;
    
    FAnimNode_Carnivora();
};


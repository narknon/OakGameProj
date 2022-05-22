#pragma once
#include "CoreMinimal.h"
#include "GbxAnimTableRow.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MotionMatchedAnimationRow.generated.h"

USTRUCT()
struct FMotionMatchedAnimationRow : public FGbxAnimTableRow {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Forward;
    
    UPROPERTY()
    FVector Up;
    
    UPROPERTY()
    FVector Velocity;
    
    UPROPERTY()
    FVector AngularVelocity;
    
    UPROPERTY(EditAnywhere)
    FVector OverrideForward;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideForward;
    
    UPROPERTY(EditAnywhere)
    FVector OverrideUp;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideUp;
    
    UPROPERTY()
    float RootBoneToRootBodyOffset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> OffsetCalculationAxis;
    
    UPROPERTY(EditAnywhere)
    bool bOffsetCalculationAxisIsNegative;
    
    UPROPERTY(EditAnywhere)
    float SampleTime;
    
    UPROPERTY(EditAnywhere)
    float PoseDriverStrength;
    
    GBXGAMESYSTEMCORE_API FMotionMatchedAnimationRow();
};


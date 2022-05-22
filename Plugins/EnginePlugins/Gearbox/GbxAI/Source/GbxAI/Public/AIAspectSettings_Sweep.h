#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "ESweepDirection.h"
#include "AIAspectSettings_Sweep.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_Sweep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector CenterKey;
    
    UPROPERTY(EditAnywhere)
    FGbxParam HeightOffset;
    
    UPROPERTY(EditAnywhere)
    float SweepRadius;
    
    UPROPERTY(EditAnywhere)
    float SweepAngle;
    
    UPROPERTY(EditAnywhere)
    float SweepAngleInterval;
    
    UPROPERTY(EditAnywhere)
    ESweepDirection Direction;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    GBXAI_API FAIAspectSettings_Sweep();
};


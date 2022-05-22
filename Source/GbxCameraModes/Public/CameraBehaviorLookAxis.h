#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviorLookAxis.generated.h"

USTRUCT(BlueprintType)
struct GBXCAMERAMODES_API FCameraBehaviorLookAxis {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InputScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimit: 1;
    
    UPROPERTY(EditAnywhere)
    float MinAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(EditAnywhere)
    float FeatheringAngle;
    
    UPROPERTY(EditAnywhere)
    float FeatheringInputScale;
    
    FCameraBehaviorLookAxis();
};


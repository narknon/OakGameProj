#pragma once
#include "CoreMinimal.h"
#include "StanceFloatValue.h"
#include "GbxNavSlowdownData.generated.h"

USTRUCT(BlueprintType)
struct FGbxNavSlowdownData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSlowdownNearGoal;
    
    UPROPERTY(EditAnywhere)
    FStanceFloatValue SlowdownSpeed;
    
    UPROPERTY(EditAnywhere)
    float SlowdownDistanceMin;
    
    UPROPERTY(EditAnywhere)
    float SlowdownDistanceMax;
    
    GBXNAV_API FGbxNavSlowdownData();
};


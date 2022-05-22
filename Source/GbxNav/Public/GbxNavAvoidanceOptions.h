#pragma once
#include "CoreMinimal.h"
#include "GbxAvoidanceProperties.h"
#include "GbxNavAvoidanceOptions.generated.h"

USTRUCT(BlueprintType)
struct FGbxNavAvoidanceOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAvoidanceSteering;
    
    UPROPERTY(EditAnywhere)
    bool bAvoidanceObstacle;
    
    UPROPERTY(EditAnywhere)
    bool bAvoidPawnsBehindMe;
    
    UPROPERTY(EditAnywhere)
    bool bAvoidWithNoGoal;
    
    UPROPERTY(EditAnywhere)
    FGbxAvoidanceProperties AvoidanceProperties;
    
    GBXNAV_API FGbxNavAvoidanceOptions();
};


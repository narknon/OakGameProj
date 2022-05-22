#pragma once
#include "CoreMinimal.h"
#include "ChallengeGoalValue.generated.h"

USTRUCT(BlueprintType)
struct FChallengeGoalValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 GoalValue;
    
    UPROPERTY(EditAnywhere)
    int32 NotificationThreshold;
    
    GBXGAMESYSTEMCORE_API FChallengeGoalValue();
};


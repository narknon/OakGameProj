#pragma once
#include "CoreMinimal.h"
#include "GbxNavGoalModifiers.h"
#include "PathSegmentSetting.generated.h"

USTRUCT(BlueprintType)
struct FPathSegmentSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ReachDistance;
    
    UPROPERTY(EditAnywhere)
    float ReachHeight;
    
    UPROPERTY(EditAnywhere)
    float SnapGroundDistance;
    
    UPROPERTY(EditAnywhere)
    FGbxNavGoalModifiers GoalModifiers;
    
    OAKGAME_API FPathSegmentSetting();
};


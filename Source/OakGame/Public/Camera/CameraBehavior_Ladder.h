#pragma once
#include "CoreMinimal.h"
#include "LadderBehaviorGoalParams.h"
#include "CameraBehavior_InitialRotation.h"
#include "CameraBehavior_Ladder.generated.h"

UCLASS(EditInlineNew)
class UCameraBehavior_Ladder : public UCameraBehavior_InitialRotation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLadderBehaviorGoalParams EnterBottomParams;
    
    UPROPERTY(EditAnywhere)
    FLadderBehaviorGoalParams EnterTopParams;
    
    UPROPERTY(EditAnywhere)
    FLadderBehaviorGoalParams SlidingParams;
    
    UCameraBehavior_Ladder();
};


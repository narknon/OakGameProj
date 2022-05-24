#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior_InitialRotation.h"
#include "LadderBehaviorGoalParams.h"
#include "CameraBehavior_ExitLadder.generated.h"

UCLASS(EditInlineNew)
class UCameraBehavior_ExitLadder : public UCameraBehavior_InitialRotation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLadderBehaviorGoalParams ExitTopParams;
    
    UPROPERTY(EditAnywhere)
    FLadderBehaviorGoalParams ExitBottomParams;
    
    UPROPERTY(EditAnywhere)
    FLadderBehaviorGoalParams ExitJumpParams;
    
    UCameraBehavior_ExitLadder();
};


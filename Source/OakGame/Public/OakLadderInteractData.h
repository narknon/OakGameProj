#pragma once
#include "CoreMinimal.h"
#include "LadderInteractData.h"
#include "CharacterJumpGoalSetting.h"
#include "OakLadderInteractData.generated.h"

UCLASS()
class UOakLadderInteractData : public ULadderInteractData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterJumpGoalSetting UpwardJumpGoal;
    
    UPROPERTY(EditAnywhere)
    float UpwardJumpFinishVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float InputDirectionalVerticalityThreshold;
    
    UOakLadderInteractData();
};


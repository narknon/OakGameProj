#pragma once
#include "CoreMinimal.h"
#include "CharacterJumpGoalSetting.generated.h"

USTRUCT(BlueprintType)
struct FCharacterJumpGoalSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GoalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseInitialZVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseGoalHeight: 1;
    
    OAKGAME_API FCharacterJumpGoalSetting();
};


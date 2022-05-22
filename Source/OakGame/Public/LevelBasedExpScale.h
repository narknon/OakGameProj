#pragma once
#include "CoreMinimal.h"
#include "LevelBasedExpScale.generated.h"

USTRUCT(BlueprintType)
struct FLevelBasedExpScale {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 LevelDifference;
    
    UPROPERTY(EditAnywhere)
    float HigherLevelEnemyExpScale;
    
    UPROPERTY(EditAnywhere)
    float LowerLevelEnemyExpScale;
    
    OAKGAME_API FLevelBasedExpScale();
};


#pragma once
#include "CoreMinimal.h"
#include "ECSTweenEasingFunc.h"
#include "CSPuzzleIntroSettings.generated.h"

USTRUCT(BlueprintType)
struct OAKCS_API FCSPuzzleIntroSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeStartingIntro;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBetweenEachPuzzleColumn;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBetweenEachPuzzleTile;
    
    UPROPERTY(EditDefaultsOnly)
    ECSTweenEasingFunc EasingFunction;
    
    UPROPERTY(EditDefaultsOnly)
    float FallingSpeed;
    
    FCSPuzzleIntroSettings();
};


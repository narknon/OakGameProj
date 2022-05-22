#pragma once
#include "CoreMinimal.h"
#include "ECSTweenEasingFunc.h"
#include "CSPuzzleFeedbackSettings.generated.h"

USTRUCT(BlueprintType)
struct OAKCS_API FCSPuzzleFeedbackSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeFirstFeedback;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeProgressBarFeedback;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeToUpdateProgressBar;
    
    UPROPERTY(EditDefaultsOnly)
    float TileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    ECSTweenEasingFunc TileMovementEasingFunction;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBetweenEachTileFlipped;
    
    UPROPERTY(EditDefaultsOnly)
    float DelaytBetweenTileFlippingAndPerferctAlignmentAnim;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBetweenEachTilePerfectAlignmentAnim;
    
    FCSPuzzleFeedbackSettings();
};


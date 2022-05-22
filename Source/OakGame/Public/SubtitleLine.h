#pragma once
#include "CoreMinimal.h"
#include "SubtitleLine.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FSubtitleLine {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText TextToDisplay;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    bool bForce;
    
    FSubtitleLine();
};


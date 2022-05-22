#pragma once
#include "CoreMinimal.h"
#include "OakStatusEffectPresentation_Audio.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FOakStatusEffectPresentation_Audio {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUsesAudioEvents;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StartEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StopEvent;
    
    OAKGAME_API FOakStatusEffectPresentation_Audio();
};


#pragma once
#include "CoreMinimal.h"
#include "OakJAKFeedbackData.generated.h"

class UParticleSystem;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FOakJAKFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleEffect;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* SoundEvent;
    
    OAKGAME_API FOakJAKFeedbackData();
};


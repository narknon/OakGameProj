#pragma once
#include "CoreMinimal.h"
#include "OakStatusEffectPresentation_Material_TransitionData.generated.h"

USTRUCT()
struct FOakStatusEffectPresentation_Material_TransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TransitionTriggerValue;
    
    UPROPERTY(EditAnywhere)
    float MaterialTargetValue;
    
    OAKGAME_API FOakStatusEffectPresentation_Material_TransitionData();
};


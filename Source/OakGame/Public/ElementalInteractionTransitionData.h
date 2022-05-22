#pragma once
#include "CoreMinimal.h"
#include "ElementalInteractionTransitionData.generated.h"

class UElementalInteractionData;

USTRUCT(BlueprintType)
struct OAKGAME_API FElementalInteractionTransitionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UElementalInteractionData* SourceInteraction;
    
    UPROPERTY(EditAnywhere)
    UElementalInteractionData* TargetInteraction;
    
    UPROPERTY(EditAnywhere)
    float TransitionTime;
    
    UPROPERTY(EditAnywhere)
    float DamageTriggeredTransitionTime;
    
public:
    FElementalInteractionTransitionData();
};


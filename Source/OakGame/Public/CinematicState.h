#pragma once
#include "CoreMinimal.h"
#include "ECinematicState.h"
#include "CinematicState.generated.h"

class UOakCinematicTag;

USTRUCT(BlueprintType)
struct FCinematicState {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakCinematicTag* CinematicTag;
    
    UPROPERTY()
    float SequenceTime;
    
    UPROPERTY()
    ECinematicState CurrentState;
    
    OAKGAME_API FCinematicState();
};


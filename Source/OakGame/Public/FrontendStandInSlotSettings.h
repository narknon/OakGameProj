#pragma once
#include "CoreMinimal.h"
#include "FrontendStandInSlotTransitionSettings.h"
#include "FrontendStandInSlotSettings.generated.h"

USTRUCT(BlueprintType)
struct FFrontendStandInSlotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> SlotsToRemainHidden;
    
    UPROPERTY(EditAnywhere)
    FFrontendStandInSlotTransitionSettings Transitions[4];
    
    OAKGAME_API FFrontendStandInSlotSettings();
};


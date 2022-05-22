#pragma once
#include "CoreMinimal.h"
#include "FrontendStandInSlotTransitionSettings.generated.h"

USTRUCT(BlueprintType)
struct FFrontendStandInSlotTransitionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> SlotsToHideDuringInspection;
    
    OAKGAME_API FFrontendStandInSlotTransitionSettings();
};


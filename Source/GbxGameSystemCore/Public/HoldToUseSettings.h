#pragma once
#include "CoreMinimal.h"
#include "EHoldToUseMode.h"
#include "HoldToUseSettings.generated.h"

USTRUCT(BlueprintType)
struct FHoldToUseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EHoldToUseMode Mode;
    
    UPROPERTY(EditAnywhere)
    float HoldToUseStartTime;
    
    UPROPERTY(EditAnywhere)
    float HoldToUseTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseInteractionBreakDistance;
    
    UPROPERTY(EditAnywhere)
    float InteractionBreakDistance;
    
    GBXGAMESYSTEMCORE_API FHoldToUseSettings();
};


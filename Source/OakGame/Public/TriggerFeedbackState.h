#pragma once
#include "CoreMinimal.h"
#include "TriggerFeedbackState.generated.h"

class UWeaponTriggerFeedbackAsset;

USTRUCT(BlueprintType)
struct FTriggerFeedbackState {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWeaponTriggerFeedbackAsset* WeaponTriggerFeedback;
    
    OAKGAME_API FTriggerFeedbackState();
};


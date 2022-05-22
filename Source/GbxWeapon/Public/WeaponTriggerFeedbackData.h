#pragma once
#include "CoreMinimal.h"
#include "WeaponTriggerFeedbackData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTriggerFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Position;
    
    UPROPERTY(EditAnywhere)
    float Force;
    
    GBXWEAPON_API FWeaponTriggerFeedbackData();
};


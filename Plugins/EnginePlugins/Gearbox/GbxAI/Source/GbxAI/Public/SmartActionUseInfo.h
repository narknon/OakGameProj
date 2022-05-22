#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SmartActionUseInfo.generated.h"

USTRUCT(BlueprintType)
struct FSmartActionUseInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag ActionTag;
    
    UPROPERTY()
    bool bInterrupting;
    
    UPROPERTY()
    float UseDuration;
    
    UPROPERTY()
    float CooldownTime;
    
    UPROPERTY()
    bool bPassiveAction;
    
    UPROPERTY()
    bool bCombatAction;
    
    GBXAI_API FSmartActionUseInfo();
};


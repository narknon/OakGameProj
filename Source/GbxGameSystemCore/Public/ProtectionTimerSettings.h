#pragma once
#include "CoreMinimal.h"
#include "ProtectionTimerSettings.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FProtectionTimerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TimerDuration;
    
    UPROPERTY(EditAnywhere)
    float Threshold;
    
    UPROPERTY(EditAnywhere)
    float MaintainedMaxHealthPct;
    
    FProtectionTimerSettings();
};


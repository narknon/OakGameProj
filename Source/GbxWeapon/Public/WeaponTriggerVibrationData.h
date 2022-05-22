#pragma once
#include "CoreMinimal.h"
#include "WeaponTriggerVibrationData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTriggerVibrationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Position;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    GBXWEAPON_API FWeaponTriggerVibrationData();
};


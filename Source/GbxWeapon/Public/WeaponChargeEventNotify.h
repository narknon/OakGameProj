#pragma once
#include "CoreMinimal.h"
#include "EWeaponChargeEventType.h"
#include "EWeaponChargeComparisonOperatorType.h"
#include "WeaponChargeEventNotify.generated.h"

USTRUCT(BlueprintType)
struct FWeaponChargeEventNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Threshold;
    
    UPROPERTY(EditAnywhere)
    EWeaponChargeComparisonOperatorType Comparision;
    
    UPROPERTY(EditAnywhere)
    EWeaponChargeEventType EVENTTYPE;
    
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    GBXWEAPON_API FWeaponChargeEventNotify();
};


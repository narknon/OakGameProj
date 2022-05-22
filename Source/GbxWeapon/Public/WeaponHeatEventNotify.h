#pragma once
#include "CoreMinimal.h"
#include "EWeaponHeatComparisonOperatorType.h"
#include "WeaponHeatEventNotify.generated.h"

USTRUCT(BlueprintType)
struct FWeaponHeatEventNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Threshold;
    
    UPROPERTY(EditAnywhere)
    EWeaponHeatComparisonOperatorType Comparision;
    
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    GBXWEAPON_API FWeaponHeatEventNotify();
};


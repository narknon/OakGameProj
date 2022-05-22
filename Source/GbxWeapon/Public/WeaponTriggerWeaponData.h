#pragma once
#include "CoreMinimal.h"
#include "WeaponTriggerWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTriggerWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartPosition;
    
    UPROPERTY(EditAnywhere)
    float EndPosition;
    
    UPROPERTY(EditAnywhere)
    float Force;
    
    GBXWEAPON_API FWeaponTriggerWeaponData();
};


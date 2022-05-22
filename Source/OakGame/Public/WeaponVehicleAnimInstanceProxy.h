#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "WeaponVehicleAnimInstanceProxy.generated.h"

USTRUCT()
struct OAKGAME_API FWeaponVehicleAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FWeaponVehicleAnimInstanceProxy();
};


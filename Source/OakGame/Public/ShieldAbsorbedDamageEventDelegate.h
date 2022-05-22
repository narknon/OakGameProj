#pragma once
#include "CoreMinimal.h"
#include "ShieldAbsorbedDamageEventDelegate.generated.h"

class UDamageSource;
class UGbxDamageType;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShieldAbsorbedDamageEvent, const UDamageSource*, DamageSource, const UGbxDamageType*, DamageType);


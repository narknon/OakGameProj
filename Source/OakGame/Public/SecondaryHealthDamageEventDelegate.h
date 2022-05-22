#pragma once
#include "CoreMinimal.h"
#include "HealthType.h"
#include "SecondaryHealthDamageEventDetails.h"
#include "SecondaryHealthDamageEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSecondaryHealthDamageEvent, int32, Index, const FHealthType&, HealthType, float, Damage, const FSecondaryHealthDamageEventDetails&, Details);


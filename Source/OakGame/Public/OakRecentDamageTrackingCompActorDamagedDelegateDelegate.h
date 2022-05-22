#pragma once
#include "CoreMinimal.h"
#include "ERecentDamageFlags.h"
#include "OakRecentDamageTrackingCompActorDamagedDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOakRecentDamageTrackingCompActorDamagedDelegate, const AActor*, DamagedActor, const int32, HealthDamage, const int32, ShieldDamage, ERecentDamageFlags, DamageFlags);


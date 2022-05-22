#pragma once
#include "CoreMinimal.h"
#include "OakDroneProjectileFacingTargetChangedDelegateDelegate.generated.h"

class AOakDroneProjectile;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakDroneProjectileFacingTargetChangedDelegate, AOakDroneProjectile*, Drone);


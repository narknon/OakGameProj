#pragma once
#include "CoreMinimal.h"
#include "EGrenadeThrowFailureReason.h"
#include "GrenadeThrowFailedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrenadeThrowFailed, EGrenadeThrowFailureReason, FailureReason);


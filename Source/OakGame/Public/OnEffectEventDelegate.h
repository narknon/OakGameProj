#pragma once
#include "CoreMinimal.h"
#include "EVehicleEffectEvent.h"
#include "EEffectStateType.h"
#include "OnEffectEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEffectEvent, EVehicleEffectEvent, EventName, EEffectStateType, EventState);


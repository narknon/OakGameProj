#pragma once
#include "CoreMinimal.h"
#include "OnStartPowerSlideBoostEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartPowerSlideBoostEvent, float, BoostRatio);


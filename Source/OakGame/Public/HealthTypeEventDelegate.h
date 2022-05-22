#pragma once
#include "CoreMinimal.h"
#include "HealthType.h"
#include "HealthTypeEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealthTypeEvent, const FHealthType&, HealthType, int32, Index);


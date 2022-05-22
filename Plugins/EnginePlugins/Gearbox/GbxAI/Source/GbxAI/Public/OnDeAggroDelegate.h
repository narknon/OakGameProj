#pragma once
#include "CoreMinimal.h"
#include "OnDeAggroDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeAggro, float, AggroDuration);


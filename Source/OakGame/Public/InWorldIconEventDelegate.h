#pragma once
#include "CoreMinimal.h"
#include "HUDInWorldIconTargetInfo.h"
#include "InWorldIconEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInWorldIconEvent, const FHUDInWorldIconTargetInfo&, TargetInfo);


#pragma once
#include "CoreMinimal.h"
#include "EHyperHoopState.h"
#include "HyperHoopStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHyperHoopStateChanged, EHyperHoopState, NewState, EHyperHoopState, OldState);


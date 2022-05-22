#pragma once
#include "CoreMinimal.h"
#include "ZoomStateChangeWithLevelDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoomStateChangeWithLevelDelegate, uint8, Level);


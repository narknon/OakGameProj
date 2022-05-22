#pragma once
#include "CoreMinimal.h"
#include "OakMayhemModeUpdatedBlueprintDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOakMayhemModeUpdatedBlueprintDelegate, bool, bMayhemActive, int32, MayhemLevel);


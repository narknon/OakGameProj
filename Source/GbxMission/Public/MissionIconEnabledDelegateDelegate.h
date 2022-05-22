#pragma once
#include "CoreMinimal.h"
#include "MissionIconEnabledDelegateDelegate.generated.h"

class UMissionIconComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionIconEnabledDelegate, UMissionIconComponent*, Component);


#pragma once
#include "CoreMinimal.h"
#include "EMainMenuViewpointType.h"
#include "MainMenuViewpointChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMainMenuViewpointChangedDelegate, EMainMenuViewpointType, MenuTransition);


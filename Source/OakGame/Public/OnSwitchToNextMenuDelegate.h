#pragma once
#include "CoreMinimal.h"
#include "OnSwitchToNextMenuDelegate.generated.h"

class AOakPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSwitchToNextMenu, AOakPlayerController*, OakPlayerController);


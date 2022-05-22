#pragma once
#include "CoreMinimal.h"
#include "EOakGameStateUIGroupMode.h"
#include "MenuMapOnUIGroupModeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuMapOnUIGroupModeChanged, EOakGameStateUIGroupMode, NewGroupMode);


#pragma once
#include "CoreMinimal.h"
#include "TravelStationOptionStateChangedDelegate.generated.h"

class UFastTravelStationDebugButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTravelStationOptionStateChanged, UFastTravelStationDebugButton*, TriggeredButton, bool, bIsChecked);


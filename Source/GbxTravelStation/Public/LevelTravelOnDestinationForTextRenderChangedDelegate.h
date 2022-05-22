#pragma once
#include "CoreMinimal.h"
#include "LevelTravelOnDestinationForTextRenderChangedDelegate.generated.h"

class ULevelTravelStationData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelTravelOnDestinationForTextRenderChanged, ULevelTravelStationData*, Destination);


#pragma once
#include "CoreMinimal.h"
#include "TravelStationResurrectChangedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTravelStationResurrectChanged, AActor*, OtherStation);


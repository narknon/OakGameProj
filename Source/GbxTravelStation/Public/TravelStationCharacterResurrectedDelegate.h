#pragma once
#include "CoreMinimal.h"
#include "TravelStationCharacterResurrectedDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTravelStationCharacterResurrected, APawn*, ResurrectedCharacter);


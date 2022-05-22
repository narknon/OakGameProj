#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersRoomCountdownEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrewQuartersRoomCountdownEvent, float, CountdownTime);


#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersChangeCountdownEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrewQuartersChangeCountdownEvent, float, CountdownTime);


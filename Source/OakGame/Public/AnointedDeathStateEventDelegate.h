#pragma once
#include "CoreMinimal.h"
#include "EAnointedDeathState.h"
#include "AnointedDeathStateEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnointedDeathStateEvent, EAnointedDeathState, DeathState);


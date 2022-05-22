#pragma once
#include "CoreMinimal.h"
#include "EA9KSawState.h"
#include "OnSawStateChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSawStateChange, EA9KSawState, NewSawState);


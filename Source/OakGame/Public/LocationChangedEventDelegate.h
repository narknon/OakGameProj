#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocationChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocationChangedEvent, const FVector, NewLocation);


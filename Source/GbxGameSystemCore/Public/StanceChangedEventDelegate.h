#pragma once
#include "CoreMinimal.h"
#include "StanceChangedEventArgs.h"
#include "StanceChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStanceChangedEvent, FStanceChangedEventArgs, Args);


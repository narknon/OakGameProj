#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineScrollDirection.h"
#include "OnVendingMachineScrolledDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVendingMachineScrolled, EVendingMachineScrollDirection, ScrollDirection);


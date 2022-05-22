#pragma once
#include "CoreMinimal.h"
#include "EOakElementalType.h"
#include "ElementalDeathDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElementalDeathDelegate, EOakElementalType, Type);


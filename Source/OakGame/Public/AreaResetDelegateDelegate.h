#pragma once
#include "CoreMinimal.h"
#include "AreaResetDelegateDelegate.generated.h"

class AAreaResetVolume;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAreaResetDelegate, AAreaResetVolume*, Volume);


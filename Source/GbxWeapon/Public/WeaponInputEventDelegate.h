#pragma once
#include "CoreMinimal.h"
#include "WeaponInputEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponInputEvent, uint8, InputChannel);


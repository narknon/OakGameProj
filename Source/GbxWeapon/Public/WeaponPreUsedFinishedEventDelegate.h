#pragma once
#include "CoreMinimal.h"
#include "WeaponPreUsedFinishedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponPreUsedFinishedEvent, bool, bInterrupted);


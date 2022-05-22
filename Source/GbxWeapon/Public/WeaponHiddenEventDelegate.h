#pragma once
#include "CoreMinimal.h"
#include "WeaponHiddenEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponHiddenEvent, bool, bIsHidden);


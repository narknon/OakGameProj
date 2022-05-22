#pragma once
#include "CoreMinimal.h"
#include "WeaponDelayUseEventDelegate.generated.h"

class UWeaponSlotData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponDelayUseEvent, UWeaponSlotData*, AttachedSlot);


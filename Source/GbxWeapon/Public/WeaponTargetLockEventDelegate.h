#pragma once
#include "CoreMinimal.h"
#include "WeaponTargetLockEventDelegate.generated.h"

class AWeapon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponTargetLockEvent, AWeapon*, EventWeapon, bool, bLockedOn);


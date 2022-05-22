#pragma once
#include "CoreMinimal.h"
#include "WeaponReloadEndedEventDelegate.generated.h"

class AWeapon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponReloadEndedEvent, AWeapon*, EventWeapon, bool, bCompleted);


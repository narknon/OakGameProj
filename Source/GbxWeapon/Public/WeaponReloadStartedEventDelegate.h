#pragma once
#include "CoreMinimal.h"
#include "WeaponReloadStartedEventDelegate.generated.h"

class AWeapon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponReloadStartedEvent, AWeapon*, EventWeapon, bool, bAutoReload);


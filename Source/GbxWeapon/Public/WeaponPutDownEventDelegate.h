#pragma once
#include "CoreMinimal.h"
#include "WeaponPutDownEventDelegate.generated.h"

class AWeapon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponPutDownEvent, AWeapon*, EventWeapon);


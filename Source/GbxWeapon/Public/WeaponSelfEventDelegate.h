#pragma once
#include "CoreMinimal.h"
#include "WeaponSelfEventDelegate.generated.h"

class AWeapon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponSelfEvent, AWeapon*, EventWeapon);


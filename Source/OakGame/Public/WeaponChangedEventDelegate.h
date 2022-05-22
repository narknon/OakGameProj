#pragma once
#include "CoreMinimal.h"
#include "WeaponChangedEventDelegate.generated.h"

class AWeapon;
class UWeaponSlotData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponChangedEvent, AWeapon*, ChangedWeapon, UWeaponSlotData*, ChangedSlot);


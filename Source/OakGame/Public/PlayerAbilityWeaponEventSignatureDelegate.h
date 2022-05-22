#pragma once
#include "CoreMinimal.h"
#include "PlayerAbilityWeaponEventSignatureDelegate.generated.h"

class AWeapon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerAbilityWeaponEventSignature, AWeapon*, Weapon);


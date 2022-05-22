#pragma once
#include "CoreMinimal.h"
#include "DamageCompTakeShieldDamageDelegateDelegate.generated.h"

class UDamageComponent;
class UDamageCauserComponent;
class UGbxDamageType;
class UDamageSource;
class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FDamageCompTakeShieldDamageDelegate, UDamageComponent*, DamageReceiver, float, ShieldDamage, const UGbxDamageType*, DamageType, const UDamageSource*, DamageSource, AController*, InstigatedBy, UDamageCauserComponent*, DamageCauser);


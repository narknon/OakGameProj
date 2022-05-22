#pragma once
#include "CoreMinimal.h"
#include "DamageCompHealthDepletedDelegateDelegate.generated.h"

class UDamageComponent;
class UDamageCauserComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageCompHealthDepletedDelegate, UDamageComponent*, DamageReceiver, UDamageCauserComponent*, DamageCauser);


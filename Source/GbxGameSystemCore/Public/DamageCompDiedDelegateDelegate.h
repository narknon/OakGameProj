#pragma once
#include "CoreMinimal.h"
#include "DamageCompDiedDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageCompDiedDelegate, AActor*, DamageReceiver, AActor*, DamageCauser);


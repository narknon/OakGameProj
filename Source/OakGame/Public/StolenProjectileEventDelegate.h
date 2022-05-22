#pragma once
#include "CoreMinimal.h"
#include "StolenProjectileEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStolenProjectileEvent, AActor*, StolenProjectile);


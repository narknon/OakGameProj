#pragma once
#include "CoreMinimal.h"
#include "LightProjectileEventDelegate.generated.h"

class ULightProjectile;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLightProjectileEvent, ULightProjectile*, Projectile);


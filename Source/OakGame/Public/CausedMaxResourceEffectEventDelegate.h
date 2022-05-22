#pragma once
#include "CoreMinimal.h"
#include "EOakStatusEffectResourceEffectType.h"
#include "CausedMaxResourceEffectEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCausedMaxResourceEffectEvent, AActor*, Target, EOakStatusEffectResourceEffectType, ResourceEffectType);


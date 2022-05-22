#pragma once
#include "CoreMinimal.h"
#include "EOakStatusEffectResourceEffectType.h"
#include "CausedMaxResourceEffectEvent2Delegate.generated.h"

class UStatusEffectEventProviderInterface;
class IStatusEffectEventProviderInterface;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCausedMaxResourceEffectEvent2, TScriptInterface<IStatusEffectEventProviderInterface>, Target, EOakStatusEffectResourceEffectType, ResourceEffectType);


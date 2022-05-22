#pragma once
#include "CoreMinimal.h"
#include "StatusEffectSpec.h"
#include "CausedElementalEffectEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCausedElementalEffectEvent, AActor*, Causer, const FStatusEffectSpec&, Spec);


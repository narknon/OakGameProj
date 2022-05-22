#pragma once
#include "CoreMinimal.h"
#include "StatusEffectSpec.h"
#include "EOakElementalType.h"
#include "ReceivedElementalEffectEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReceivedElementalEffectEvent, AActor*, Receiver, const FStatusEffectSpec&, Spec, EOakElementalType, ElementalType);


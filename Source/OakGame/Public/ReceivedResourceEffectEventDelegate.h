#pragma once
#include "CoreMinimal.h"
#include "OakResourceEffectData.h"
#include "ReceivedResourceEffectEventDelegate.generated.h"

class AActor;
class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FReceivedResourceEffectEvent, AActor*, Target, AController*, Instigator, const FOakResourceEffectData&, ResourceEffectData, float, Value);


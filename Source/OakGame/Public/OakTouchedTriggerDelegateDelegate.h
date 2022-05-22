#pragma once
#include "CoreMinimal.h"
#include "OakTouchedTriggerDelegateDelegate.generated.h"

class AActor;
class UActorComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOakTouchedTriggerDelegate, AActor*, TouchingActor, bool, bIsPlayer, UActorComponent*, ComponentTouched);


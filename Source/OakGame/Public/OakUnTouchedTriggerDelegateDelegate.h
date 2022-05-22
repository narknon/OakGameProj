#pragma once
#include "CoreMinimal.h"
#include "OakUnTouchedTriggerDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOakUnTouchedTriggerDelegate, AActor*, LeavingActor, bool, bIsPlayer);


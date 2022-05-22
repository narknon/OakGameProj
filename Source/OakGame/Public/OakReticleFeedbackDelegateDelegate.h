#pragma once
#include "CoreMinimal.h"
#include "EOakReticleFeedbackGameEvent.h"
#include "OakReticleFeedbackDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakReticleFeedbackDelegate, EOakReticleFeedbackGameEvent, GameEvent);


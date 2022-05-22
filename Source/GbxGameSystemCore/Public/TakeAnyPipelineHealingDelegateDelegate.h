#pragma once
#include "CoreMinimal.h"
#include "TakeAnyPipelineHealingDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTakeAnyPipelineHealingDelegate, AActor*, HealReceiver, float, Healing, AActor*, HealInstigator);


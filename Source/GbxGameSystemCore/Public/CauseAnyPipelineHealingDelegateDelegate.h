#pragma once
#include "CoreMinimal.h"
#include "CausedHealingDetails.h"
#include "CauseAnyPipelineHealingDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCauseAnyPipelineHealingDelegate, const FCausedHealingDetails&, Details);


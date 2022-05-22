#pragma once
#include "CoreMinimal.h"
#include "EExitDownStateReason.h"
#include "DownStateExitReasonChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownStateExitReasonChangedEvent, EExitDownStateReason, ExitReason);


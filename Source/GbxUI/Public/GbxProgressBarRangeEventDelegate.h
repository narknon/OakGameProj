#pragma once
#include "CoreMinimal.h"
#include "GbxProgressBarRangeEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxProgressBarRangeEvent, const FName&, RangeName);


#pragma once
#include "CoreMinimal.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "PredictProjectilePathAsyncDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPredictProjectilePathAsyncDelegate, const FPredictProjectilePathResult&, Result);


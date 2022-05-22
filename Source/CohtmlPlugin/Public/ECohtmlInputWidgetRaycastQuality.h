#pragma once
#include "CoreMinimal.h"
#include "ECohtmlInputWidgetRaycastQuality.generated.h"

UENUM(BlueprintType)
enum ECohtmlInputWidgetRaycastQuality {
    CohtmlRaycastQuality_Fast,
    CohtmlRaycastQuality_Balanced,
    CohtmlRaycastQuality_Accurate,
    CohtmlRaycastQuality_MAX UMETA(Hidden),
};


#pragma once
#include "CoreMinimal.h"
#include "HealthTypeDepletedDetails.h"
#include "HealthTypeDepletedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthTypeDepletedEvent, const FHealthTypeDepletedDetails&, Details);


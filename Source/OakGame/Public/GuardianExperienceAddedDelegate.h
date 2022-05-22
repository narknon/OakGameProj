#pragma once
#include "CoreMinimal.h"
#include "GuardianExperienceAddedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuardianExperienceAdded, const int32, Amount);


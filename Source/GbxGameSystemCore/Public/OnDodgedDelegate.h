#pragma once
#include "CoreMinimal.h"
#include "EAIDodgeType.h"
#include "OnDodgedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDodged, EAIDodgeType, DodgeType);


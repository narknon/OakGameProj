#pragma once
#include "CoreMinimal.h"
#include "CausedDeathDetails.h"
#include "CauseDeathDelegateDelegate.generated.h"

class UDamageComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCauseDeathDelegate, const UDamageComponent*, Damaged, const FCausedDeathDetails&, Details);


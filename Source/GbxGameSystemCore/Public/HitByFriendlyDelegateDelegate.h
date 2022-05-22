#pragma once
#include "CoreMinimal.h"
#include "HitByFriendlyEventDetails.h"
#include "HitByFriendlyDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitByFriendlyDelegate, const FHitByFriendlyEventDetails&, Details);


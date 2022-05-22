#pragma once
#include "CoreMinimal.h"
#include "HitFriendlyEventDetails.h"
#include "HitFriendlyDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitFriendlyDelegate, const FHitFriendlyEventDetails&, Details);


#pragma once
#include "CoreMinimal.h"
#include "InteractionStatusUpdatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionStatusUpdated, bool, IsInteractionReady);


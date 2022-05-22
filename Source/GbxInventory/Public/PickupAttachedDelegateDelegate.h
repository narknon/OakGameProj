#pragma once
#include "CoreMinimal.h"
#include "PickupAttachedDelegateDelegate.generated.h"

class ADroppedInventoryItemPickup;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickupAttachedDelegate, ADroppedInventoryItemPickup*, Pickup);


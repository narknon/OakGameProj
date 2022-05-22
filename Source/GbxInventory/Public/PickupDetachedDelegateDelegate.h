#pragma once
#include "CoreMinimal.h"
#include "PickupDetachedDelegateDelegate.generated.h"

class ADroppedInventoryItemPickup;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickupDetachedDelegate, ADroppedInventoryItemPickup*, Pickup, AActor*, PickedUpBy);


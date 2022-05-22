#pragma once
#include "CoreMinimal.h"
#include "SpawnDroppedPickupLootAsyncDelegateDelegate.generated.h"

class ADroppedInventoryItemPickup;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FSpawnDroppedPickupLootAsyncDelegate, ADroppedInventoryItemPickup*, Pickup);


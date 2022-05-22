#pragma once
#include "CoreMinimal.h"
#include "InventoryItemPickedUpEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemPickedUpEvent, AActor*, WasPickedUpBy);


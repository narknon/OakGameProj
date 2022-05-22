#pragma once
#include "CoreMinimal.h"
#include "InventoryItemPickUpEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryItemPickUpEvent, AActor*, PickedUpActor, int32, Quantity);


#pragma once
#include "CoreMinimal.h"
#include "InventoryItemPickedUpDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryItemPickedUp, AActor*, PickedUpActor, int32, Quantity);


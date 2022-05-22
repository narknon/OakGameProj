#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineBuyType.h"
#include "InventoryBoughtEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryBoughtEvent, EVendingMachineBuyType, BuyType, AActor*, InventoryActor);


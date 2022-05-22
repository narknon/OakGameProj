#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "InventoryItemReplacedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryItemReplaced, const FInventoryListEntryHandle&, UpdatedItemHandle, AActor*, OldInventoryActor);


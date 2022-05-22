#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "InventoryItemRemovedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemRemoved, const FInventoryListEntryHandle&, UpdatedItemHandle);


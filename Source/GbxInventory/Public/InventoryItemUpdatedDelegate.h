#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "InventoryItemUpdatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemUpdated, const FInventoryListEntryHandle&, UpdatedItemHandle);


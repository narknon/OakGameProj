#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "AddedToInventory_InternalDelegate.generated.h"

class UInventoryCategoryData;
class UInventoryListComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FAddedToInventory_Internal, const UInventoryListComponent*, InventoryList, const UInventoryCategoryData*, AddedCategory, AActor*, AddedActor, const FInventoryListEntryHandle&, AddedHandle, int32, Flags, int32, DesiredSlot);


#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "RemovingFromInventory_InternalDelegate.generated.h"

class UInventoryCategoryData;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRemovingFromInventory_Internal, const UInventoryCategoryData*, RemovedCategory, AActor*, RemovedActor, const FInventoryListEntryHandle&, RemovedHandle);


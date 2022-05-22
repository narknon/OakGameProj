#pragma once
#include "CoreMinimal.h"
#include "InventoryUnequippedEventDelegate.generated.h"

class AActor;
class UInventorySlotData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryUnequippedEvent, AActor*, UnequippedActor, UInventorySlotData*, SlotData);


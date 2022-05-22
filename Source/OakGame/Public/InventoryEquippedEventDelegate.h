#pragma once
#include "CoreMinimal.h"
#include "InventoryEquippedEventDelegate.generated.h"

class AActor;
class UInventorySlotData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryEquippedEvent, AActor*, EquippedActor, UInventorySlotData*, SlotData);


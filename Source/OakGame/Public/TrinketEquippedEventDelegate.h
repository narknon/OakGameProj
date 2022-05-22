#pragma once
#include "CoreMinimal.h"
#include "TrinketEquippedEventDelegate.generated.h"

class UWeaponTrinketPartData;
class UInventorySlotData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrinketEquippedEvent, UWeaponTrinketPartData*, EquippedTrinket, UInventorySlotData*, SlotData);


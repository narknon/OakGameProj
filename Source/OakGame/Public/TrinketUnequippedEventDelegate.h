#pragma once
#include "CoreMinimal.h"
#include "TrinketUnequippedEventDelegate.generated.h"

class UWeaponTrinketPartData;
class UInventorySlotData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrinketUnequippedEvent, UWeaponTrinketPartData*, UnequippedTrinket, UInventorySlotData*, SlotData);


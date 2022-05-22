#pragma once
#include "CoreMinimal.h"
#include "DisplayItemChangedEventDelegate.generated.h"

class UGunRackSlotData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisplayItemChangedEvent, UGunRackSlotData*, PickedUpSlot);


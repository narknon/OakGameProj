#pragma once
#include "CoreMinimal.h"
#include "DynamicRoomBaseEventDelegate.generated.h"

class ADynamicRoomBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicRoomBaseEvent, ADynamicRoomBase*, RoomReference);


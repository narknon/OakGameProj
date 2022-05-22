#pragma once
#include "CoreMinimal.h"
#include "SDUUpdatedEventDelegate.generated.h"

class UOakSDUData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDUUpdatedEvent, UOakSDUData*, UpdatedSDU, int32, Level);


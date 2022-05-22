#pragma once
#include "CoreMinimal.h"
#include "SDURemovedEventDelegate.generated.h"

class UOakSDUData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDURemovedEvent, UOakSDUData*, UpdatedSDU);


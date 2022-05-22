#pragma once
#include "CoreMinimal.h"
#include "FirstPersonCreatedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFirstPersonCreatedEvent, bool, bCreatedArms);


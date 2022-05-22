#pragma once
#include "CoreMinimal.h"
#include "OnActorComponentAppliedFromAspectDataDelegate.generated.h"

class UActorComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorComponentAppliedFromAspectData, UActorComponent*, Component);


#pragma once
#include "CoreMinimal.h"
#include "ElementalInteractionStartedEventDelegate.generated.h"

class UElementalInteractionData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElementalInteractionStartedEvent, UElementalInteractionData*, State, bool, bIsInitialState);


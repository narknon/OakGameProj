#pragma once
#include "CoreMinimal.h"
#include "HUDStateChangedEventDelegate.generated.h"

class UGbxHUDStateData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHUDStateChangedEvent, const UGbxHUDStateData*, PreviousState, const UGbxHUDStateData*, CurrentState);


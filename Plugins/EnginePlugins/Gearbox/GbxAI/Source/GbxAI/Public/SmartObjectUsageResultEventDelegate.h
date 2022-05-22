#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESmartActionResult.h"
#include "SmartObjectUsageResultEventDelegate.generated.h"

class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSmartObjectUsageResultEvent, AController*, Controller, FGameplayTag, ActionTag, ESmartActionResult, Result);


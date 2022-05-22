#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SmartObjectUsageEventDelegate.generated.h"

class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSmartObjectUsageEvent, AController*, Controller, FGameplayTag, ActionTag);


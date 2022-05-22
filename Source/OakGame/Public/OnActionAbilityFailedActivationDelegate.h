#pragma once
#include "CoreMinimal.h"
#include "OnActionAbilityFailedActivationDelegate.generated.h"

class UOakActionAbility;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionAbilityFailedActivation, UOakActionAbility*, ActionAbility, uint8, FailureCode);


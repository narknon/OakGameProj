#pragma once
#include "CoreMinimal.h"
#include "GuardianTokensAddedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuardianTokensAddedEvent, const int32, TokensAdded);


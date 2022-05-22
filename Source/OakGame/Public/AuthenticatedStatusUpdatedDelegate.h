#pragma once
#include "CoreMinimal.h"
#include "AuthenticatedStatusUpdatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAuthenticatedStatusUpdated, bool, IsAuthenticated);


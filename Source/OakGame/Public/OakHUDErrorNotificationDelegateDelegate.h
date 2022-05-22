#pragma once
#include "CoreMinimal.h"
#include "OakHUDErrorNotificationDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakHUDErrorNotificationDelegate, const FText&, Reason);


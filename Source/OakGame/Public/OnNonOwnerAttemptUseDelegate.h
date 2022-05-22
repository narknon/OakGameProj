#pragma once
#include "CoreMinimal.h"
#include "OnNonOwnerAttemptUseDelegate.generated.h"

class AOakPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNonOwnerAttemptUse, AOakPlayerController*, UsingPlayer);


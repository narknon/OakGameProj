#pragma once
#include "CoreMinimal.h"
#include "MenuMapPlaythroughChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMenuMapPlaythroughChangedDelegate, int32, PreviousPlayThroughCount, int32, NewPlayThroughCount);


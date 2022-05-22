#pragma once
#include "CoreMinimal.h"
#include "EBindingType.h"
#include "ChangedColumnFocusDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangedColumnFocus, EBindingType, BindingType);


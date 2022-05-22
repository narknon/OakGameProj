#pragma once
#include "CoreMinimal.h"
#include "OakMinimapIconComponentDelegateDelegate.generated.h"

class UOakMinimapIconComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakMinimapIconComponentDelegate, UOakMinimapIconComponent*, MinimapIconComponent);


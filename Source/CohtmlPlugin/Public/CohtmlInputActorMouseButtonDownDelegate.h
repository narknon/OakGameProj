#pragma once
#include "CoreMinimal.h"
#include "ECohtmlKeys.h"
#include "CohtmlInputActorMouseButtonDownDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCohtmlInputActorMouseButtonDown, TEnumAsByte<ECohtmlKeys::Type>, BUTTON);


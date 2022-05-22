#pragma once
#include "CoreMinimal.h"
#include "ECohtmlKeys.h"
#include "CohtmlInputActorMouseButtonUpDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCohtmlInputActorMouseButtonUp, TEnumAsByte<ECohtmlKeys::Type>, BUTTON);


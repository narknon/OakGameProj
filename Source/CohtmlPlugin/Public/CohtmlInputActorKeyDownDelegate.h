#pragma once
#include "CoreMinimal.h"
#include "ECohtmlKeys.h"
#include "CohtmlInputActorKeyDownDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCohtmlInputActorKeyDown, TEnumAsByte<ECohtmlKeys::Type>, Key);


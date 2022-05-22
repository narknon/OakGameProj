#pragma once
#include "CoreMinimal.h"
#include "ECohtmlKeys.h"
#include "CohtmlInputActorKeyUpDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCohtmlInputActorKeyUp, TEnumAsByte<ECohtmlKeys::Type>, Key);


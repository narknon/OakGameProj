#pragma once
#include "CoreMinimal.h"
#include "LootableEventDelegate.generated.h"

class ALootableObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLootableEvent, ALootableObject*, LootableObject);


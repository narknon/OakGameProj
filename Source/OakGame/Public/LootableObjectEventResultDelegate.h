#pragma once
#include "CoreMinimal.h"
#include "LootableEventResultItem.h"
#include "LootableObjectEventResultDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLootableObjectEventResult, const TArray<FLootableEventResultItem>&, Result);


#pragma once
#include "CoreMinimal.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GFxBackpackWidgetItemDelegateDelegate.generated.h"

class UGbxGFxObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGFxBackpackWidgetItemDelegate, const FOakUIInventoryItemDisplayInfo&, Item, UGbxGFxObject*, GridWidget);


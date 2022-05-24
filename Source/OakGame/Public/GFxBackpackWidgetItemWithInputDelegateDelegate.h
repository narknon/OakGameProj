#pragma once
#include "CoreMinimal.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GbxMenuInputEvent.h"
#include "GFxBackpackWidgetItemWithInputDelegateDelegate.generated.h"

class UGbxGFxObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGFxBackpackWidgetItemWithInputDelegate, const FOakUIInventoryItemDisplayInfo&, Item, UGbxGFxObject*, GridWidget, const FGbxMenuInputEvent&, InputInfo);


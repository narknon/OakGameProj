#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxListItemDelegateWithControllerDelegate.generated.h"

class UGbxGFxListCell;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGbxGFxListItemDelegateWithController, UGbxGFxListCell*, ClickedItem, const FGbxMenuInputEvent&, InputInfo);


#pragma once
#include "CoreMinimal.h"
#include "GbxListItemDelegateWithControllerDelegate.generated.h"

class UGbxListItem;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxListItemDelegateWithController, UGbxListItem*, ClickedItem);


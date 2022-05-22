#pragma once
#include "CoreMinimal.h"
#include "GbxCascadingListItemData.h"
#include "GbxCascadingListEventDelegate.generated.h"

class UGbxListItem;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FGbxCascadingListEvent, const FGbxCascadingListItemData&, ItemData, const UGbxListItem*, ItemView, const FName&, ParentId);


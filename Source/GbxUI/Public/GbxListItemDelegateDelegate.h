#pragma once
#include "CoreMinimal.h"
#include "GbxListItemDelegateDelegate.generated.h"

class UGbxListItem;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxListItemDelegate, UGbxListItem*, Item);


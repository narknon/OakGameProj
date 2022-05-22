#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListItemDelegateDelegate.generated.h"

class UGbxGFxListCell;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGbxGFxListItemDelegate, UGbxGFxListCell*, Item);


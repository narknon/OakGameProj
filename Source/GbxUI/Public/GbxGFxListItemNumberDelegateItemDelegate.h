#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListItemNumberDelegateItemDelegate.generated.h"

class UGbxGFxListItemNumber;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxGFxListItemNumberDelegateItem, UGbxGFxListItemNumber*, Item);


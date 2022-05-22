#pragma once
#include "CoreMinimal.h"
#include "OakDisplayCurrencyWidgetOnHUDDelegate.generated.h"

class UGbxInventoryCategoryData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakDisplayCurrencyWidgetOnHUD, UGbxInventoryCategoryData*, CurrencyType);


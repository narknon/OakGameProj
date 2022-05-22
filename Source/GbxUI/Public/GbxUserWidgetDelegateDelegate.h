#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputEvent.h"
#include "GbxUserWidgetDelegateDelegate.generated.h"

class UGbxUserWidget;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGbxUserWidgetDelegate, UGbxUserWidget*, Widget, const FGbxMenuInputEvent&, InputInfo);


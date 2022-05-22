#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIAction_Decorator.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew, HideDropdown, NotPlaceable)
class GBXAI_API UAIAction_Decorator : public UAIAction {
    GENERATED_BODY()
public:
    UAIAction_Decorator();
};


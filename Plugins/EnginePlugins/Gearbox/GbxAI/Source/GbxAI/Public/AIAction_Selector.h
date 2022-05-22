#pragma once
#include "CoreMinimal.h"
#include "AIAction_Composite.h"
#include "AIAction_Selector.generated.h"

UCLASS(CollapseCategories, EditInlineNew, Placeable)
class GBXAI_API UAIAction_Selector : public UAIAction_Composite {
    GENERATED_BODY()
public:
    UAIAction_Selector();
};


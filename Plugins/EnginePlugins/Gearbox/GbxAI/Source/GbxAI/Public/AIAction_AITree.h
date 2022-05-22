#pragma once
#include "CoreMinimal.h"
#include "AIAction_Priority.h"
#include "AIAction_AITree.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_AITree : public UAIAction_Priority {
    GENERATED_BODY()
public:
    UAIAction_AITree();
};


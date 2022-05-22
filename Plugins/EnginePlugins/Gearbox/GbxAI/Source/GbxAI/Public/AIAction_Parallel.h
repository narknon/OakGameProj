#pragma once
#include "CoreMinimal.h"
#include "AIAction_Composite.h"
#include "AIAction_Parallel.generated.h"

UCLASS(CollapseCategories, EditInlineNew, Placeable)
class GBXAI_API UAIAction_Parallel : public UAIAction_Composite {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bWaitForAllChildren;
    
    UAIAction_Parallel();
};


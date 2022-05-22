#pragma once
#include "CoreMinimal.h"
#include "AIAction_CompositeChild.h"
#include "AIAction_RandomChild.generated.h"

UCLASS(CollapseCategories, EditInlineNew, HideDropdown, Within=AIAction_Random)
class GBXAI_API UAIAction_RandomChild : public UAIAction_CompositeChild {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    int32 MaxRunCount;
    
    UPROPERTY(EditAnywhere)
    bool bUseMaxRunCount;
    
    UAIAction_RandomChild();
};


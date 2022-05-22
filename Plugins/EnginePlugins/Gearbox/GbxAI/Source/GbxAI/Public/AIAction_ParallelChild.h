#pragma once
#include "CoreMinimal.h"
#include "AIAction_CompositeChild.h"
#include "AIAction_ParallelChild.generated.h"

UCLASS(CollapseCategories, EditInlineNew, HideDropdown, Within=AIAction_Parallel)
class GBXAI_API UAIAction_ParallelChild : public UAIAction_CompositeChild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanPreventActionFromStarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanCauseActionToSucceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanCauseActionToFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMustFinish;
    
    UAIAction_ParallelChild();
};


#pragma once
#include "CoreMinimal.h"
#include "AIAction_Selector.h"
#include "EAIActionSequenceCanStartCheck.h"
#include "GbxParam.h"
#include "AIAction_Sequence.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Sequence : public UAIAction_Selector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAIActionSequenceCanStartCheck CanStartChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CanBeInterrupted;
    
    UAIAction_Sequence();
};


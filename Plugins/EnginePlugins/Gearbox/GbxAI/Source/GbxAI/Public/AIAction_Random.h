#pragma once
#include "CoreMinimal.h"
#include "AIAction_Selector.h"
#include "AIAction_Random.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Random : public UAIAction_Selector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseCumulativeInverseWeight;
    
    UPROPERTY(EditAnywhere)
    float ResetRunCountTime;
    
    UAIAction_Random();
};


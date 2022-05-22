#pragma once
#include "CoreMinimal.h"
#include "AIAction_Selector.h"
#include "AIAction_Priority.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Priority : public UAIAction_Selector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TryInterruptPeriod;
    
    UPROPERTY(EditAnywhere)
    float TryInterruptInsignificantPeriod;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptWhileInsignificant;
    
    UAIAction_Priority();
};


#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspect_LockTarget.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_LockTarget : public UAIAspect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bFailOnTargetChange;
    
public:
    UAIAspect_LockTarget();
};


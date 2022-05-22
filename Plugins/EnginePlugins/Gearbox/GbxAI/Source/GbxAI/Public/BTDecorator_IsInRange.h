#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "GbxParam.h"
#include "BTDecorator_IsInRange.generated.h"

UCLASS(EditInlineNew)
class GBXAI_API UBTDecorator_IsInRange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam Range;
    
    UBTDecorator_IsInRange();
};


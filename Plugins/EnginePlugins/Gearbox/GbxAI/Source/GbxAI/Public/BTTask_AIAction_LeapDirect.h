#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_LeapDirect.generated.h"

class UAIAction_LeapDirect;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_LeapDirect : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_LeapDirect* Action;
    
    UBTTask_AIAction_LeapDirect();
};


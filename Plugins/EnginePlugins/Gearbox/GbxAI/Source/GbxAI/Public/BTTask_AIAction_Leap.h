#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_Leap.generated.h"

class UAIAction_Leap;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_Leap : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_Leap* Action;
    
    UBTTask_AIAction_Leap();
};


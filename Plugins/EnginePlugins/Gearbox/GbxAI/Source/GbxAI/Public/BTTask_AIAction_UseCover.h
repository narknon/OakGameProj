#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_UseCover.generated.h"

class UAIAction_UseCover;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_UseCover : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_UseCover* Action;
    
    UBTTask_AIAction_UseCover();
};


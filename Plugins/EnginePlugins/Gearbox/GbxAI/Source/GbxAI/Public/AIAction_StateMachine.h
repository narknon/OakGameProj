#pragma once
#include "CoreMinimal.h"
#include "AIAction_Selector.h"
#include "AIAction_StateMachine.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_StateMachine : public UAIAction_Selector {
    GENERATED_BODY()
public:
    UAIAction_StateMachine();
};


#pragma once
#include "CoreMinimal.h"
#include "AIAction_GoToPoint.h"
#include "AIAction_MoveToLevelSequence.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_MoveToLevelSequence : public UAIAction_GoToPoint {
    GENERATED_BODY()
public:
    UAIAction_MoveToLevelSequence();
};


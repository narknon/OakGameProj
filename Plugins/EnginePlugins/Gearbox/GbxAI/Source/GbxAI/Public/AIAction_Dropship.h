#pragma once
#include "CoreMinimal.h"
#include "AIAction_MoveNode.h"
#include "AIAction_Dropship.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Dropship : public UAIAction_MoveNode {
    GENERATED_BODY()
public:
    UAIAction_Dropship();
};


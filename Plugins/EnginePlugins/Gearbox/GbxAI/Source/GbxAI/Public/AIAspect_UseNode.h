#pragma once
#include "CoreMinimal.h"
#include "AIAspect_MoveNode.h"
#include "AIAspect_UseNode.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_UseNode : public UAIAspect_MoveNode {
    GENERATED_BODY()
public:
    UAIAspect_UseNode();
};


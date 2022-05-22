#pragma once
#include "CoreMinimal.h"
#include "AIAspect_GbxAction.h"
#include "AIAspect_FallToGround.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_FallToGround : public UAIAspect_GbxAction {
    GENERATED_BODY()
public:
    UAIAspect_FallToGround();
};


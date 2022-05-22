#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIConstraint.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew, HideDropdown, NotPlaceable)
class GBXAI_API UAIConstraint : public UAIAspect {
    GENERATED_BODY()
public:
    UAIConstraint();
};


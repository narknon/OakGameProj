#pragma once
#include "CoreMinimal.h"
#include "AIAspect_EnvQuery.h"
#include "AIAspect_FindCover.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_FindCover : public UAIAspect_EnvQuery {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCheckFlanking;
    
    UAIAspect_FindCover();
};


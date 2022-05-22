#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspect_AvoidWhileIdle.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_AvoidWhileIdle : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAvoidWhileIdle;
    
    UAIAspect_AvoidWhileIdle();
};


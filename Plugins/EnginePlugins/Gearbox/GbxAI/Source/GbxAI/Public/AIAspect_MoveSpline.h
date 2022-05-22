#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "AIAspectSettings_MoveSpline.h"
#include "AIAspect_MoveSpline.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_MoveSpline : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_MoveSpline MoveSplineSettings;
    
    UAIAspect_MoveSpline();
};


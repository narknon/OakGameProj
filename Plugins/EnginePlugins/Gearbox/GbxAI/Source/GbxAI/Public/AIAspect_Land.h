#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "AIAspectSettings_Land.h"
#include "AIAspect_Land.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_Land : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Land LandSettings;
    
    UAIAspect_Land();
};


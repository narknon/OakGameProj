#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "AIAspectSettings_NavFlyOffset.h"
#include "AIAspect_NavFlyOffset.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_NavFlyOffset : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_NavFlyOffset OffsetSettings;
    
    UAIAspect_NavFlyOffset();
};


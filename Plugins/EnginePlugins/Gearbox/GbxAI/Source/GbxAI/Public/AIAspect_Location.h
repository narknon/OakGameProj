#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Location.h"
#include "AIAspect_Location.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NotPlaceable)
class GBXAI_API UAIAspect_Location : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Location Settings;
    
    UAIAspect_Location();
};


#pragma once
#include "CoreMinimal.h"
#include "AIActionBase.h"
#include "AIAspectExecutionSettings.h"
#include "AIAspect.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew, HideDropdown, Placeable, Within=AIAction)
class GBXAI_API UAIAspect : public UAIActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectExecutionSettings AspectExecutionSettings;
    
    UAIAspect();
};


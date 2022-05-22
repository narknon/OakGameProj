#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Crouch.h"
#include "AIAspect_Crouch.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_Crouch : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Crouch Settings;
    
    UAIAspect_Crouch();
};


#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_MovePath.h"
#include "AIAspect_Navigation.h"
#include "AIAspect_MovePath.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_MovePath : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_MovePath MovePathSettings;
    
    UAIAspect_MovePath();
};


#pragma once
#include "CoreMinimal.h"
#include "AIAction_Priority.h"
#include "AIAspectSettings_MovePath.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAction_PatrolPath.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAction_PatrolPath : public UAIAction_Priority {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_MovePath MovePathSetting;
    
    UAIAction_PatrolPath();
};


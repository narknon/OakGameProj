#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_GbxAction.h"
#include "AIAction.h"
#include "AIAction_PlayGbxAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_PlayGbxAction : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GbxAction ActionSettings;
    
    UAIAction_PlayGbxAction();
};


#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIAspectSettings_Teleport.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspectSettings_EnvQuery.h"
#include "AIAction_Teleport.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Teleport : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector GoalKey;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Teleport TeleportSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_EnvQuery QuerySettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseQuery;
    
    UAIAction_Teleport();
};


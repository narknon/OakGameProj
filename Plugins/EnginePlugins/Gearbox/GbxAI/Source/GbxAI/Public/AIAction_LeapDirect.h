#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_Leap.h"
#include "AIAction.h"
#include "AIAspectSettings_EnvQuery.h"
#include "AIAction_LeapDirect.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_LeapDirect : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Leap LeapSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_EnvQuery QuerySettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseQuery;
    
    UAIAction_LeapDirect();
};


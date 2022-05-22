#pragma once
#include "CoreMinimal.h"
#include "AIAction_Sequence.h"
#include "AIAspectSettings_GbxAction.h"
#include "AIAction_OnAggro.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_OnAggro : public UAIAction_Sequence {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bRotateBeforeAction;
    
    UPROPERTY(EditAnywhere)
    bool bRotateDuringAction;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GbxAction ActionWhenFirstNoticer;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GbxAction ActionWhenSecondNoticer;
    
public:
    UAIAction_OnAggro();
};


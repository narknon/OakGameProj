#pragma once
#include "CoreMinimal.h"
#include "AIAction_GoToPoint.h"
#include "AIAspectSettings_Leap.h"
#include "AIAction_Leap.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Leap : public UAIAction_GoToPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Leap LeapSettings;
    
    UAIAction_Leap();
};


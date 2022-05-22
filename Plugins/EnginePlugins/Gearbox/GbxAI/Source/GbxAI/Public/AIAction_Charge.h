#pragma once
#include "CoreMinimal.h"
#include "AIAction_GoToPoint.h"
#include "AIAspectSettings_Charge.h"
#include "AIAction_Charge.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Charge : public UAIAction_GoToPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Charge ChargeSettings;
    
    UAIAction_Charge();
};


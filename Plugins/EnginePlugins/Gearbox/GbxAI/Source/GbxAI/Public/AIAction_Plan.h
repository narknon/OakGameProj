#pragma once
#include "CoreMinimal.h"
#include "AIActionSettings_Plan.h"
#include "AIAction_Sequence.h"
#include "AIAction_Plan.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Plan : public UAIAction_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIActionSettings_Plan Settings;
    
    UAIAction_Plan();
};


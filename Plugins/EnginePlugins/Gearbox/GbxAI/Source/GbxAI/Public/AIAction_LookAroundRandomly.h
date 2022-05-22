#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "LookAroundRandomlySettings.h"
#include "AIAction_LookAroundRandomly.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_LookAroundRandomly : public UAIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FLookAroundRandomlySettings Settings;
    
public:
    UAIAction_LookAroundRandomly();
};


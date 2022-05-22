#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_LeadRoute.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_LeadUpdate.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_LeadUpdate : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_LeadRoute LeadSettings;
    
    UPROPERTY()
    FGbxBlackboardKeySelector MoveTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector Distance;
    
    UPROPERTY()
    FGbxBlackboardKeySelector TeleportTarget;
    
    UAIAspect_LeadUpdate();
};


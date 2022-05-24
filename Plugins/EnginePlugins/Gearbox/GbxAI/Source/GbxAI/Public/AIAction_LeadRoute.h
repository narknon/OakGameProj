#pragma once
#include "CoreMinimal.h"
#include "AIAction_Priority.h"
#include "AIAspectSettings_LeadRoute.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAspectSettings_FindClosestPlayer.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAction_LeadRoute.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAction_LeadRoute : public UAIAction_Priority {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_LeadRoute LeadSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_FindClosestPlayer FindClosestPlayerSettings;
    
    UPROPERTY()
    FGbxBlackboardKeySelector MoveTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector Distance;
    
    UPROPERTY()
    FGbxBlackboardKeySelector TeleportTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector UnusedKey;
    
private:
    UPROPERTY()
    uint8 LeadRouteVersion;
    
public:
    UAIAction_LeadRoute();
};


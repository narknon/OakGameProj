#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Route.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_Route.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_Route : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Route RouteSettings;
    
    UPROPERTY()
    FGbxBlackboardKeySelector MoveTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector Distance;
    
    UPROPERTY()
    FGbxBlackboardKeySelector SmartAction;
    
    UPROPERTY()
    FGbxBlackboardKeySelector BodyEnable;
    
    UPROPERTY()
    FGbxBlackboardKeySelector BodyTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector LookEnable;
    
    UPROPERTY()
    FGbxBlackboardKeySelector LookTarget;
    
    UAIAspect_Route();
};


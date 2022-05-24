#pragma once
#include "CoreMinimal.h"
#include "AIAction_Sequence.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAspectSettings_Route.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAction_Route.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAction_Route : public UAIAction_Sequence {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Route RouteSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY()
    FGbxBlackboardKeySelector SmartAction;
    
    UPROPERTY()
    FGbxBlackboardKeySelector MoveTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector Distance;
    
    UPROPERTY()
    FGbxBlackboardKeySelector BodyEnable;
    
    UPROPERTY()
    FGbxBlackboardKeySelector BodyTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector LookEnable;
    
    UPROPERTY()
    FGbxBlackboardKeySelector LookTarget;
    
private:
    UPROPERTY()
    uint8 RouteVersion;
    
public:
    UAIAction_Route();
};


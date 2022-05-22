#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_UseSmartObject.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_ClaimSmartObject.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_ClaimSmartObject : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_UseSmartObject SmartObjectSettings;
    
    UPROPERTY()
    FGbxBlackboardKeySelector SmartAction;
    
    UPROPERTY()
    FGbxBlackboardKeySelector MoveTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector Distance;
    
    UPROPERTY()
    FGbxBlackboardKeySelector BodyTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector LookTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector LookEnabled;
    
    UAIAspect_ClaimSmartObject();
};


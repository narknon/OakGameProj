#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAction_Sequence.h"
#include "AIAspectSettings_UseSmartObject.h"
#include "AIAspectSettings_Rotation.h"
#include "AIAspectSettings_EnvQuery.h"
#include "GbxBlackboardKeySelector.h"
#include "EnvQueryParams.h"
#include "AIAspectSettings_Move.h"
#include "AIAction_UseSmartObject.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAction_UseSmartObject : public UAIAction_Sequence {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_UseSmartObject SmartObjectSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation MoveToRotationSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_EnvQuery QuerySettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseQuery;
    
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
    
    UPROPERTY()
    FAIAspectSettings_Move MoveSettings;
    
    UPROPERTY()
    FEnvQueryParams SmartObjectQuery;
    
private:
    UPROPERTY()
    uint8 UseSmartObjectVersion;
    
public:
    UAIAction_UseSmartObject();
};


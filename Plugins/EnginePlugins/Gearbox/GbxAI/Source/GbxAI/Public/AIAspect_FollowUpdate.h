#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Follow.h"
#include "AIAspectSettings_Navigation.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_FollowUpdate.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_FollowUpdate : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Follow Settings;
    
    UPROPERTY()
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY()
    FGbxBlackboardKeySelector TeleportTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector MoveTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector Distance;
    
    UAIAspect_FollowUpdate();
};


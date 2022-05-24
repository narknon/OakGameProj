#pragma once
#include "CoreMinimal.h"
#include "AIAction_Priority.h"
#include "AIAspectSettings_Follow.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAspectSettings_FindClosestPlayer.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAction_Follow.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAction_Follow : public UAIAction_Priority {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Follow Settings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_FindClosestPlayer FindClosestPlayerSettings;
    
    UPROPERTY(EditAnywhere)
    bool bFindClosestPlayer;
    
    UPROPERTY()
    FGbxBlackboardKeySelector TeleportTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector MoveTarget;
    
    UPROPERTY()
    FGbxBlackboardKeySelector Distance;
    
    UPROPERTY()
    FGbxBlackboardKeySelector BodyDirection;
    
private:
    UPROPERTY()
    uint8 FollowVersion;
    
public:
    UAIAction_Follow();
};


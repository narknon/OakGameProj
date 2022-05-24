#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "GbxBlackboardKeySelector.h"
#include "EGbxNavGoalReach.h"
#include "AIAspect_NavBlackboard.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_NavBlackboard : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector GoalKey;
    
    UPROPERTY(EditAnywhere)
    float MinOffsetInFrontOfTarget;
    
    UPROPERTY(EditAnywhere)
    float MaxOffsetInFrontOfTarget;
    
    UPROPERTY(EditAnywhere)
    float OffsetAngle;
    
    UPROPERTY()
    EGbxNavGoalReach Reach;
    
    UAIAspect_NavBlackboard();
};


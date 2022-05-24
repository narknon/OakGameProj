#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "GbxBlackboardKeySelector.h"
#include "EGbxNavGoalReach.h"
#include "ECircleDirection.h"
#include "AIAspect_Circle.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Circle : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector GoalKey;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    ECircleDirection Direction;
    
    UPROPERTY(EditAnywhere)
    float MinOffsetInFrontOfTarget;
    
    UPROPERTY(EditAnywhere)
    float MaxOffsetInFrontOfTarget;
    
    UPROPERTY(EditAnywhere)
    float OffsetAngle;
    
    UPROPERTY(EditAnywhere)
    float GoalUpdateDistance;
    
    UPROPERTY(EditAnywhere)
    bool bTestDirectPath;
    
    UPROPERTY(EditAnywhere)
    bool bDebugTestDirectPath;
    
    UPROPERTY()
    EGbxNavGoalReach Reach;
    
    UAIAspect_Circle();
};


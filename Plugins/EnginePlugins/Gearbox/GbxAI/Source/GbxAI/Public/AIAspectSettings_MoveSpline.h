#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "EGbxNavGoalReach.h"
#include "AIAspectSettings_MoveSpline.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_MoveSpline {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector SplineKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector OffsetKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector ReverseKey;
    
    UPROPERTY(EditAnywhere)
    float LookDistance;
    
    UPROPERTY(EditAnywhere)
    float MissNavigationStep;
    
    UPROPERTY(EditAnywhere)
    float MissNavigationStepDistance;
    
    UPROPERTY(EditAnywhere)
    float AdditionnalLookDistanceSpeedFactor;
    
    UPROPERTY(EditAnywhere)
    float SnapToNavigation;
    
    UPROPERTY()
    bool bSnapToNavigation;
    
    UPROPERTY(EditAnywhere)
    float GoalUpdateDistance;
    
    UPROPERTY(EditAnywhere)
    EGbxNavGoalReach Reach;
    
    GBXAI_API FAIAspectSettings_MoveSpline();
};


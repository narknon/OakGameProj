#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "AIAspectSettings_Teleport.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Teleport {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector GoalKey;
    
    UPROPERTY(EditAnywhere)
    bool bCloak;
    
    UPROPERTY(EditAnywhere)
    bool bTraceToGround;
    
    UPROPERTY(EditAnywhere)
    bool bClearVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bChangeRotation;
    
    UPROPERTY(EditAnywhere)
    bool bClearGoalOnStop;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector RotationKey;
    
    UPROPERTY(EditAnywhere)
    FGbxParam TravelTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseSpeedInsteadOfTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam TravelSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateGoal;
    
    FAIAspectSettings_Teleport();
};


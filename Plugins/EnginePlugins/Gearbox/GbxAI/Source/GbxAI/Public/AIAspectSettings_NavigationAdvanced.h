#pragma once
#include "CoreMinimal.h"
#include "GbxNavGoalModifiers.h"
#include "EGbxStrafeType.h"
#include "EGbxPathType.h"
#include "EGbxNavGoalCheats.h"
#include "AIAspectSettings_NavigationAdvanced.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_NavigationAdvanced {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReachedRequiresDirect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGbxStrafeType StrafeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGbxPathType PathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopWhenReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanRunWhenAtGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateGoalWhileRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGbxNavGoalCheats Cheats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxNavGoalModifiers GoalModifiers;
    
    UPROPERTY()
    bool bCanStartWhenGoalIsUncertain;
    
    UPROPERTY()
    bool bMoveEvenIfUnreachable;
    
    FAIAspectSettings_NavigationAdvanced();
};


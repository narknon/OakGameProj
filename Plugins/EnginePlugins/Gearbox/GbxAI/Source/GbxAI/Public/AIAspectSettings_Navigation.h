#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_NavigationAdvanced.h"
#include "GbxParam.h"
#include "EGbxStrafeType.h"
#include "EGbxPathType.h"
#include "AIAspectSettings_Navigation.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam ReachedHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam ReachedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_NavigationAdvanced Advanced;
    
private:
    UPROPERTY()
    bool bCanMove;
    
    UPROPERTY()
    bool bReachedRequiresDirect;
    
    UPROPERTY()
    EGbxStrafeType StrafeType;
    
    UPROPERTY()
    EGbxPathType PathType;
    
    UPROPERTY()
    bool bStopWhenReached;
    
    UPROPERTY()
    bool bCanRunWhenAtGoal;
    
    UPROPERTY()
    bool bUpdateGoalWhileRunning;
    
public:
    FAIAspectSettings_Navigation();
};


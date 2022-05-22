#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "EAIActionResultDirective.h"
#include "ECompareMethod.h"
#include "GbxParam.h"
#include "AIAspectSettings_IntCompare.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_IntCompare {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIActionResultDirective WhenConditionFails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECompareMethod CompareMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CompareAgainst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAbortOnChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRefreshImmediatelyOnChange;
    
    FAIAspectSettings_IntCompare();
};


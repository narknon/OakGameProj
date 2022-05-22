#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "EAIActionResultDirective.h"
#include "EAIActionResult.h"
#include "AIAspectSettings_BlackboardKey.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_BlackboardKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvertResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIActionResultDirective WhenConditionFails;
    
    UPROPERTY()
    EAIActionResult OnBecomeFalse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAbortOnChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRefreshImmediatelyOnChange;
    
    FAIAspectSettings_BlackboardKey();
};


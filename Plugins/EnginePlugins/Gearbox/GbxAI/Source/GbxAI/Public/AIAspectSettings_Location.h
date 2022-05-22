#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "EAIActionResultTransition.h"
#include "GbxParam.h"
#include "AIAspectSettings_Move.h"
#include "EnvQueryParams.h"
#include "AIAspectSettings_Location.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Location {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIActionResultTransition TargetChangeTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEnvQueryParams TargetQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam TargetQueryPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTargetQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_Move MoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanMove;
    
    FAIAspectSettings_Location();
};


#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_TimeLimit.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_TimeLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam SucceedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam FailTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSucceedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFailTime;
    
    FAIAspectSettings_TimeLimit();
};


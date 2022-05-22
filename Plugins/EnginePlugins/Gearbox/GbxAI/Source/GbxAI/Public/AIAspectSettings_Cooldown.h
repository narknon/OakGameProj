#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_Cooldown.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Cooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam SucceedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSucceedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam FailTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFailTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam AbortTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAbortTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam InitialTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseInitialTimer;
    
    FAIAspectSettings_Cooldown();
};


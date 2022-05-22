#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "EnvQueryParams.h"
#include "AIAspectSettings_EnvQuery.h"
#include "AIAspectSettings_UseSmartObject.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_UseSmartObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector SmartAction;
    
    UPROPERTY(EditAnywhere)
    bool bAbortExisting;
    
    UPROPERTY(EditAnywhere)
    bool bUntilInterrupted;
    
    UPROPERTY(EditAnywhere)
    bool bCanBeInterrupted;
    
    UPROPERTY()
    FEnvQueryParams SmartObjectQuery;
    
    UPROPERTY()
    bool bUseQuery;
    
    UPROPERTY()
    FAIAspectSettings_EnvQuery QuerySettings;
    
    GBXAI_API FAIAspectSettings_UseSmartObject();
};


#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_EnvQueryParam.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UEnvQueryContext_EnvQueryParam : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName DefaultBlackboardKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    bool AllowsUnboundContext;
    
    UEnvQueryContext_EnvQueryParam();
};


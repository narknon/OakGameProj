#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Trace.h"
#include "ExtendedTraceInfo.h"
#include "EnvQueryTest_UberTrace.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryTest_UberTrace : public UEnvQueryTest_Trace {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FExtendedTraceInfo> TracesToPerform;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWantsTracesToHit;
    
    UEnvQueryTest_UberTrace();
};


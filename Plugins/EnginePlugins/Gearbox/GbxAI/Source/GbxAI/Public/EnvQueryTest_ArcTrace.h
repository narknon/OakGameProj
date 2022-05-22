#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Trace.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_ArcTrace.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryTest_ArcTrace : public UEnvQueryTest_Trace {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ArcSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ArcAnglePercent;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 NumSegments;
    
public:
    UEnvQueryTest_ArcTrace();
};


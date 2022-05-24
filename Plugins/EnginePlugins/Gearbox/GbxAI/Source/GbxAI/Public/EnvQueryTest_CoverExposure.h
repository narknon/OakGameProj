#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_CoverExposure.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UEnvQueryTest_CoverExposure : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue DoExposureTest;
    
public:
    UEnvQueryTest_CoverExposure();
};


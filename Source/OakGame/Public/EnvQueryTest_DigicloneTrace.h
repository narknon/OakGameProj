#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_DigicloneTrace.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_DigicloneTrace : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ContextHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    float Radius;
    
public:
    UEnvQueryTest_DigicloneTrace();
};


#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_Boundary.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryTest_Boundary : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Distance;
    
public:
    UEnvQueryTest_Boundary();
};


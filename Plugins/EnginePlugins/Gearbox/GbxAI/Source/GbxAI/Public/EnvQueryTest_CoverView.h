#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_CoverView.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UEnvQueryTest_CoverView : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue DoViewTest;
    
public:
    UEnvQueryTest_CoverView();
};


#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_ActorHealth.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_ActorHealth : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHealthPercentage;
    
    UPROPERTY(EditAnywhere)
    bool bHealthConsumed;
    
    UEnvQueryTest_ActorHealth();
};


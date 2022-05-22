#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_ProjectilesHomingTowardsTarget.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_ProjectilesHomingTowardsTarget : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bMustBeActivelyHoming;
    
    UEnvQueryTest_ProjectilesHomingTowardsTarget();
};


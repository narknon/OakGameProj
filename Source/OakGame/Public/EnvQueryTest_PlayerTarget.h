#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_PlayerTarget.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_PlayerTarget : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> SourceContext;
    
public:
    UEnvQueryTest_PlayerTarget();
};


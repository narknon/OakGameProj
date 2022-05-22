#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_DirectPath.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UEnvQueryTest_DirectPath : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    float CloseEnoughDistance;
    
    UEnvQueryTest_DirectPath();
};


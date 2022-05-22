#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_GbxPath.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UEnvQueryTest_GbxPath : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_GbxPath();
};


#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_TargetIsHurtingMe.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_TargetIsHurtingMe : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DecayRate;
    
public:
    UEnvQueryTest_TargetIsHurtingMe();
};


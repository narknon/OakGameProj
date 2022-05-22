#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_MyMasterIsAttackingTarget.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_MyMasterIsAttackingTarget : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DecayRate;
    
public:
    UEnvQueryTest_MyMasterIsAttackingTarget();
};


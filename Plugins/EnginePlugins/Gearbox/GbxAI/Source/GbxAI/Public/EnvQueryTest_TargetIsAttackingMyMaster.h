#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_TargetIsAttackingMyMaster.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_TargetIsAttackingMyMaster : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DecayRate;
    
public:
    UEnvQueryTest_TargetIsAttackingMyMaster();
};


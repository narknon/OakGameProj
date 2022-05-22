#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_TargetSensed.generated.h"

class UAISense;

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_TargetSensed : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString DevLabel;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAISense>> SensesToTestFor;
    
    UPROPERTY(EditAnywhere)
    float TimeToCareAboutStimuli;
    
public:
    UEnvQueryTest_TargetSensed();
};


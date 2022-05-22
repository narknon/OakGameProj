#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_CustomScoringBoost.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryTest_CustomScoringBoost : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float ReductionExtreme;
    
    UPROPERTY(EditAnywhere)
    float ReductionModerate;
    
    UPROPERTY(EditAnywhere)
    float ReductionLight;
    
    UPROPERTY(VisibleAnywhere)
    float NoBoostWeighting;
    
    UPROPERTY(EditAnywhere)
    float AmplificationLight;
    
    UPROPERTY(EditAnywhere)
    float AmplificationModerate;
    
    UPROPERTY(VisibleAnywhere)
    float AmplificationExtreme;
    
    UEnvQueryTest_CustomScoringBoost();
};


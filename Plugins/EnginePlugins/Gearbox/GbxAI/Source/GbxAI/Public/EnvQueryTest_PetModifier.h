#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "EnvQueryTest_PetModifier.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_PetModifier : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag PetTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag BossTag;
    
public:
    UEnvQueryTest_PetModifier();
};


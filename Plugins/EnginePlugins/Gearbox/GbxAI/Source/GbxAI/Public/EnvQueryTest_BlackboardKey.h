#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_BlackboardKey.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_BlackboardKey : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector BlackboardKey;
    
public:
    UEnvQueryTest_BlackboardKey();
};


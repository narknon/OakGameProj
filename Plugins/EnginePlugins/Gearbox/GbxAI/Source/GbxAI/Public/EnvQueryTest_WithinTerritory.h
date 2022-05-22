#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETerritoryType.h"
#include "EnvQueryTest_WithinTerritory.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryTest_WithinTerritory : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETerritoryType TerritoryArea;
    
    UEnvQueryTest_WithinTerritory();
};


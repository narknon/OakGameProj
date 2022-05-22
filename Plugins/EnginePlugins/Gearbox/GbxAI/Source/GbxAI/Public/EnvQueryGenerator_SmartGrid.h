#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "SmartGridSearchSet.h"
#include "EnvQueryGenerator_SmartGrid.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryGenerator_SmartGrid : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSmartGridSearchSet> SearchSets;
    
    UEnvQueryGenerator_SmartGrid();
};


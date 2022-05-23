#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_Lootables.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryGenerator_Lootables : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bAllowOpenedLootables;
    
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue DistanceMax;
    
public:
    UEnvQueryGenerator_Lootables();
};


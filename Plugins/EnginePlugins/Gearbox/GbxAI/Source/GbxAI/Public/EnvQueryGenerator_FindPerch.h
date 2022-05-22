#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_FindPerch.generated.h"

class UPerchType;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class GBXAI_API UEnvQueryGenerator_FindPerch : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UPerchType* PerchType;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
public:
    UEnvQueryGenerator_FindPerch();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELookAtPointType.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_FindLookAtPoint.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class GBXAI_API UEnvQueryGenerator_FindLookAtPoint : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ELookAtPointType LookAtPointType;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
public:
    UEnvQueryGenerator_FindLookAtPoint();
};


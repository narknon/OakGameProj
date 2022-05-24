#pragma once
#include "CoreMinimal.h"
#include "ETerritoryMovementType.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "DataProviders/AIDataProvider.h"
#include "ETerritoryType.h"
#include "EnvQueryGenerator_Territory.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryGenerator_Territory : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETerritoryType TerritoryArea;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SpaceBetween;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue EverywhereRadius;
    
    UPROPERTY(EditDefaultsOnly)
    ETerritoryMovementType MovementType;
    
    UEnvQueryGenerator_Territory();
};


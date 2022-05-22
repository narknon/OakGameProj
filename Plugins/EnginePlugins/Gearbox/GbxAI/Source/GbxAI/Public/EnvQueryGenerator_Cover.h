#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_Cover.generated.h"

class UCoverSlotData;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class GBXAI_API UEnvQueryGenerator_Cover : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<UCoverSlotData*> SlotTypes;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
    UPROPERTY()
    UCoverSlotData* SlotType;
    
public:
    UEnvQueryGenerator_Cover();
};


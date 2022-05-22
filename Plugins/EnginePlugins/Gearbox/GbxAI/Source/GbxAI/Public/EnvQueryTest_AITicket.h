#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_AITicket.generated.h"

class UAITicketDataAsset;

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_AITicket : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAITicketDataAsset* AITicket;
    
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue Value;
    
    UEnvQueryTest_AITicket();
};


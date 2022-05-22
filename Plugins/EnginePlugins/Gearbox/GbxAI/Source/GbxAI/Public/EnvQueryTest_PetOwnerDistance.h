#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_PetOwnerDistance.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEnvQueryTest_PetOwnerDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue MaxDistanceToOwner;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag AnyDistanceTag;
    
public:
    UEnvQueryTest_PetOwnerDistance();
};


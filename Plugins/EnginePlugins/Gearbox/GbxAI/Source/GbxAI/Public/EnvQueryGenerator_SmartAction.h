#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "ETerritoryType.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_SmartAction.generated.h"

class AActor;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class GBXAI_API UEnvQueryGenerator_SmartAction : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue CombatActions;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue PassiveActions;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AActor>> ActorTypes;
    
    UPROPERTY(Transient)
    TArray<UClass*> ActorTypesCache;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ActionNames;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
    UPROPERTY(EditAnywhere)
    ETerritoryType TerritoryArea;
    
    UPROPERTY(EditAnywhere)
    bool bUseTerritoryArea;
    
public:
    UEnvQueryGenerator_SmartAction();
};


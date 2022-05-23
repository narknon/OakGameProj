#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "ActorTagCompositeQuery.h"
#include "EnvQueryGenerator_InteractiveObjects.generated.h"

class UGbxCondition;
class AActor;

UCLASS(EditInlineNew)
class UEnvQueryGenerator_InteractiveObjects : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue DistanceMax;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    FActorTagCompositeQuery TagQuery;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AActor>> AllowedTypes;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseAllowedTypes: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AActor>> DisallowedTypes;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseDisallowedTypes: 1;
    
    UPROPERTY(Transient)
    TArray<UClass*> AllowedTypesCache;
    
    UPROPERTY(Transient)
    TArray<UClass*> DisallowedTypesCache;
    
public:
    UEnvQueryGenerator_InteractiveObjects();
};


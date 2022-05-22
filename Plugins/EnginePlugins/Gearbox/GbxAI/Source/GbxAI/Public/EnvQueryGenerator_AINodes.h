#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "ActorTagCompositeQuery.h"
#include "EnvQueryGenerator_AINodes.generated.h"

class UEnvQueryContext;
class AActor;

UCLASS(EditInlineNew)
class GBXAI_API UEnvQueryGenerator_AINodes : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue SearchRadius;
    
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
    
    UEnvQueryGenerator_AINodes();
};


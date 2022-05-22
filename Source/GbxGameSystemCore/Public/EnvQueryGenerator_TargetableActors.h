#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "ActorTagCompositeQuery.h"
#include "EnvQueryGenerator_TargetableActors.generated.h"

class UGbxCondition;
class AActor;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UEnvQueryGenerator_TargetableActors : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue DistanceMax;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* TargetSkipDistanceCheckCondition;
    
    UPROPERTY(EditAnywhere)
    bool bAllowNonTargetableActors;
    
    UPROPERTY(EditAnywhere)
    bool bAllowDeadActors;
    
    UPROPERTY(EditAnywhere)
    bool bAllowQuerier;
    
    UPROPERTY(EditAnywhere)
    bool bAllowHostiles;
    
    UPROPERTY(EditAnywhere)
    bool bAllowFriendlies;
    
    UPROPERTY(EditAnywhere)
    bool bAllowNeutrals;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* TargetCondition;
    
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
    
    UEnvQueryGenerator_TargetableActors();
};


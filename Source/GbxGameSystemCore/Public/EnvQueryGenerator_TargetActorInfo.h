#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "ActorTagCompositeQuery.h"
#include "EnvQueryGenerator_TargetActorInfo.generated.h"

class AActor;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UEnvQueryGenerator_TargetActorInfo : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxAge;
    
    UPROPERTY(EditAnywhere)
    bool bAllowHostiles;
    
    UPROPERTY(EditAnywhere)
    bool bAllowFriendlies;
    
    UPROPERTY(EditAnywhere)
    bool bAllowNeutrals;
    
    UPROPERTY(EditAnywhere)
    FActorTagCompositeQuery TagQuery;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseAllowedTypes: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AActor>> AllowedTypes;
    
    UPROPERTY(Transient)
    TArray<UClass*> AllowedTypesCache;
    
    UEnvQueryGenerator_TargetActorInfo();
};


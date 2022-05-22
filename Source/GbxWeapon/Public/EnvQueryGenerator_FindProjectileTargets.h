#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_FindProjectileTargets.generated.h"

class UGbxCondition;

UCLASS(EditInlineNew)
class GBXWEAPON_API UEnvQueryGenerator_FindProjectileTargets : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue Range;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* TargetSkipRangeCheckCondition;
    
    UPROPERTY(EditAnywhere)
    bool bAllowHostiles;
    
    UPROPERTY(EditAnywhere)
    bool bAllowFriendlies;
    
    UPROPERTY(EditAnywhere)
    bool bAllowNeutrals;
    
    UPROPERTY(VisibleAnywhere)
    bool bAlsoFindTargetableComponents;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreNonHostileAttachedParent;
    
    UEnvQueryGenerator_FindProjectileTargets();
};


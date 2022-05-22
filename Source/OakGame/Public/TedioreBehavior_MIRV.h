#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TedioreBehavior.h"
#include "EnvQueryParams.h"
#include "TedioreBehavior_MIRV.generated.h"

class ATedioreProjectile;

UCLASS(EditInlineNew)
class UTedioreBehavior_MIRV : public UTedioreBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float SpawnAngleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvSpawnOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATedioreProjectile> MirvChildClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHideWeaponVisuals;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvChildDamageScalar;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams MirvHomingSearchQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvHomingInitialDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvHomingRetryDelay;
    
public:
    UTedioreBehavior_MIRV();
};


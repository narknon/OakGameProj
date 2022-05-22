#pragma once
#include "CoreMinimal.h"
#include "DamageSource.h"
#include "OakDamageSource.generated.h"

class UGameStatData;

UCLASS()
class UOakDamageSource : public UDamageSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bEligibleForShieldAbsorption: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bPlayHitNotifySounds: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCanCauseLargeLiquidBodyExplosionSplash: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UGameStatData* KillStat;
    
    UOakDamageSource();
};


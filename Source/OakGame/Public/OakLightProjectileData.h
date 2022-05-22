#pragma once
#include "CoreMinimal.h"
#include "LightProjectileData.h"
#include "OakLightProjectileData.generated.h"

class UGameStatData;

UCLASS()
class UOakLightProjectileData : public ULightProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bSuppressAmpedTracerFX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDamageElementalInteractionsOnBounce: 1;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* KillStat;
    
    UOakLightProjectileData();
};


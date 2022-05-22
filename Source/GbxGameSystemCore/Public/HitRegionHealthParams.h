#pragma once
#include "CoreMinimal.h"
#include "EHitRegionDamageRule.h"
#include "HitRegionHealthParams.generated.h"

class UGameResourcePoolData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHitRegionHealthParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OwnerHealthPercent;
    
    UPROPERTY(EditAnywhere)
    UGameResourcePoolData* ResourcePool;
    
    UPROPERTY(EditAnywhere)
    EHitRegionDamageRule DamageRule;
    
    FHitRegionHealthParams();
};


#pragma once
#include "CoreMinimal.h"
#include "ECriticalHitDamageOverride.h"
#include "CriticalHitDamageOverrides.generated.h"

USTRUCT(BlueprintType)
struct FCriticalHitDamageOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECriticalHitDamageOverride Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDefaultCriticalHitMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalCriticalMultiplier;
    
    GBXGAMESYSTEMCORE_API FCriticalHitDamageOverrides();
};


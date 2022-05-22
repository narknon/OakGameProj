#pragma once
#include "CoreMinimal.h"
#include "DamagedActor.h"
#include "DamageTargetResult.generated.h"

class UDamageComponent;

USTRUCT()
struct GBXGAMESYSTEMCORE_API FDamageTargetResult {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDamageComponent* DamageComponent;
    
    UPROPERTY()
    FDamagedActor AsyncDamagedActor;
    
    FDamageTargetResult();
};


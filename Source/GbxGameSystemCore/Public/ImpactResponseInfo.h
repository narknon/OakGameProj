#pragma once
#include "CoreMinimal.h"
#include "ImpactResponseEffect.h"
#include "ImpactResponseInfo.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FImpactResponseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    FImpactResponseEffect Response;
    
    FImpactResponseInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterialImpactPair.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPhysicalMaterialImpactPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* MaterialA;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* MaterialB;
    
    FPhysicalMaterialImpactPair();
};


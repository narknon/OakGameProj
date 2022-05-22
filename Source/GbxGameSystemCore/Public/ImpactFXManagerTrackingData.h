#pragma once
#include "CoreMinimal.h"
#include "ImpactFXManagerTrackingData.generated.h"

class USceneComponent;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FImpactFXManagerTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Component;
    
    UPROPERTY()
    UPhysicalMaterial* PhysicalMaterial;
    
    GBXGAMESYSTEMCORE_API FImpactFXManagerTrackingData();
};


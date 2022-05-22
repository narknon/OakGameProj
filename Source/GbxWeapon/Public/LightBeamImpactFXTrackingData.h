#pragma once
#include "CoreMinimal.h"
#include "LightBeamImpactFXTrackingData.generated.h"

class USceneComponent;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FLightBeamImpactFXTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    USceneComponent* Component;
    
    UPROPERTY(Transient)
    UPhysicalMaterial* PhysicalMaterial;
    
    GBXWEAPON_API FLightBeamImpactFXTrackingData();
};


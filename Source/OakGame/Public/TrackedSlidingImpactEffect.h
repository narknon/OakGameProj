#pragma once
#include "CoreMinimal.h"
#include "TrackedSlidingImpactEffect.generated.h"

class USceneComponent;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FTrackedSlidingImpactEffect {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Component;
    
    UPROPERTY()
    UPhysicalMaterial* PhysicalMaterial;
    
    OAKGAME_API FTrackedSlidingImpactEffect();
};


#pragma once
#include "CoreMinimal.h"
#include "ImpactEffectEventInfo.generated.h"

class AActor;
class UPhysicalMaterial;

USTRUCT()
struct GBXGAMESYSTEMCORE_API FImpactEffectEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* InstigatorActor;
    
    UPROPERTY()
    AActor* HitActor;
    
    UPROPERTY()
    UPhysicalMaterial* HitMaterial;
    
    FImpactEffectEventInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "MeleeReverseImpactEntry.generated.h"

USTRUCT(BlueprintType)
struct FMeleeReverseImpactEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TargetMass;
    
    UPROPERTY(EditAnywhere)
    float ImpactForce;
    
    OAKGAME_API FMeleeReverseImpactEntry();
};


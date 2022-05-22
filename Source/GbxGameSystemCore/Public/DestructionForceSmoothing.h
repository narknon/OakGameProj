#pragma once
#include "CoreMinimal.h"
#include "DestructionForceSmoothing.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FDestructionForceSmoothing {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxResultantVelocity;
    
    UPROPERTY(EditAnywhere)
    float NormalizationFactor;
    
    UPROPERTY(EditAnywhere)
    float GlobalScale;
    
    FDestructionForceSmoothing();
};


#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_FlyToNavMesh.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_FlyToNavMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float GroundSearchDistance;
    
    UPROPERTY(EditAnywhere)
    float LookAheadDistance;
    
    UPROPERTY(EditAnywhere)
    float FlySearchDistance;
    
    UPROPERTY(EditAnywhere)
    float UpdatePeriod;
    
    GBXAI_API FAIAspectSettings_FlyToNavMesh();
};


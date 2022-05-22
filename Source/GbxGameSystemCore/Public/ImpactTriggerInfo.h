#pragma once
#include "CoreMinimal.h"
#include "ImpactTriggerInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FImpactTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RigidBodyRefireDelay;
    
    UPROPERTY(EditAnywhere)
    float RigidBodyMinimumVelocity;
    
    FImpactTriggerInfo();
};


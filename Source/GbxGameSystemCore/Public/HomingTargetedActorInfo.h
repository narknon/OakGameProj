#pragma once
#include "CoreMinimal.h"
#include "HomingTargetedActorInfo.generated.h"

class AActor;

USTRUCT()
struct FHomingTargetedActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Target;
    
    UPROPERTY()
    int32 ProjectileCount;
    
    GBXGAMESYSTEMCORE_API FHomingTargetedActorInfo();
};


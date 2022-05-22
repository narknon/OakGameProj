#pragma once
#include "CoreMinimal.h"
#include "AsyncExplosionImpactRequest.generated.h"

class UImpactData;
class AActor;
class UWorld;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAsyncExplosionImpactRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    UImpactData* ExplosionImpact;
    
    UPROPERTY()
    AActor* ExplodingActor;
    
    UPROPERTY()
    AActor* Instigator;
    
    UPROPERTY()
    UWorld* World;
    
    FAsyncExplosionImpactRequest();
};


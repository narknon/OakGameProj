#pragma once
#include "CoreMinimal.h"
#include "LightProjectileTimedEvent.generated.h"

USTRUCT(BlueprintType)
struct FLightProjectileTimedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    FName CustomEvent;
    
    GBXWEAPON_API FLightProjectileTimedEvent();
};


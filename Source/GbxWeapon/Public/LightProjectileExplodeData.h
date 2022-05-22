#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "LightProjectileExplodeData.generated.h"

USTRUCT(BlueprintType)
struct FLightProjectileExplodeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bHitActor;
    
    UPROPERTY()
    FVector_NetQuantize Location;
    
    GBXWEAPON_API FLightProjectileExplodeData();
};


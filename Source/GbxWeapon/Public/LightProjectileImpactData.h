#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "LightProjectileImpactData.generated.h"

USTRUCT(BlueprintType)
struct FLightProjectileImpactData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bPlayEffect;
    
    UPROPERTY()
    FVector_NetQuantize Location;
    
    GBXWEAPON_API FLightProjectileImpactData();
};


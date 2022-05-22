#pragma once
#include "CoreMinimal.h"
#include "ELightProjectileFlag.h"
#include "LightProjectileFlagName.generated.h"

USTRUCT(BlueprintType)
struct FLightProjectileFlagName {
    GENERATED_BODY()
public:
    UPROPERTY()
    ELightProjectileFlag Type;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FString Tooltip;
    
    GBXWEAPON_API FLightProjectileFlagName();
};


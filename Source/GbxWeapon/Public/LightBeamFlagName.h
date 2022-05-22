#pragma once
#include "CoreMinimal.h"
#include "ELightBeamFlag.h"
#include "LightBeamFlagName.generated.h"

USTRUCT(BlueprintType)
struct FLightBeamFlagName {
    GENERATED_BODY()
public:
    UPROPERTY()
    ELightBeamFlag Type;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FString Tooltip;
    
    GBXWEAPON_API FLightBeamFlagName();
};


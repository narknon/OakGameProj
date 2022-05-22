#pragma once
#include "CoreMinimal.h"
#include "EDamageSurfaceType.h"
#include "SurfaceTypeInfo.generated.h"

class UWwiseSwitch;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSurfaceTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDamageSurfaceType DamageSurfaceType;
    
    UPROPERTY(EditAnywhere)
    UWwiseSwitch* AudioMaterialSwitch;
    
    FSurfaceTypeInfo();
};


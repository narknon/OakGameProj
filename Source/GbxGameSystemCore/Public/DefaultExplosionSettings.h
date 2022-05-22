#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialBlurSelection -FallbackName=RadialBlurSelection
#include "DefaultExplosionSettings.generated.h"

USTRUCT(BlueprintType)
struct FDefaultExplosionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ExplosionSize;
    
    UPROPERTY(EditAnywhere)
    FRadialBlurSelection RadialBlur;
    
    GBXGAMESYSTEMCORE_API FDefaultExplosionSettings();
};


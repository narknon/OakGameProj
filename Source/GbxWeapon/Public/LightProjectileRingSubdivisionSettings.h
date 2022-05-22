#pragma once
#include "CoreMinimal.h"
#include "ELightProjectileSubdivisionMode.h"
#include "LightProjectileRingSubdivisionSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightProjectileRingSubdivisionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxSubdivisions;
    
    UPROPERTY(EditAnywhere)
    ELightProjectileSubdivisionMode ValueMode;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    GBXWEAPON_API FLightProjectileRingSubdivisionSettings();
};


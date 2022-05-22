#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightProjectileRingSubdivisionSettings.h"
#include "LightProjectileRingSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightProjectileRingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InitialRadius;
    
    UPROPERTY(EditAnywhere)
    float Angle;
    
    UPROPERTY(EditAnywhere)
    int32 InitialProjectileCount;
    
    UPROPERTY(EditAnywhere)
    bool bMakeSolidRing;
    
    UPROPERTY(EditAnywhere)
    bool bUseBodyMeshBoundsForCollision;
    
    UPROPERTY(EditAnywhere)
    FLightProjectileRingSubdivisionSettings Subdivide;
    
    UPROPERTY(EditAnywhere)
    bool bSubdivide;
    
    UPROPERTY(EditAnywhere)
    FVector RingAxis;
    
    UPROPERTY(EditAnywhere)
    bool bUseRingAxis;
    
    GBXWEAPON_API FLightProjectileRingSettings();
};


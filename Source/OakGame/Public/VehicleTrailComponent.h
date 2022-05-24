#pragma once
#include "CoreMinimal.h"
#include "VehicleComponent.h"
#include "Engine/EngineBaseTypes.h"
#include "UObject/NoExportTypes.h"
#include "VehicleTrailParticleSystemData.h"
#include "VehicleTrailData.h"
#include "ExtraWadingData.h"
#include "VehicleTrailComponent.generated.h"

class UElementalInteractionData;
class UPhysicalMaterial;
class UWheeledVehicleMovementComponentNW;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UVehicleTrailComponent : public UVehicleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETickingGroup> TrailTickGroup;
    
    UPROPERTY(EditAnywhere)
    FVehicleTrailParticleSystemData DefaultParticleSystem;
    
    UPROPERTY(EditAnywhere)
    TMap<UPhysicalMaterial*, FVehicleTrailParticleSystemData> ParticlePerPhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FVehicleTrailData> TrailData;
    
    UPROPERTY(EditAnywhere)
    int32 TrailTranslucentSortPriority;
    
    UPROPERTY(EditAnywhere)
    float MinSpeedForTrail;
    
    UPROPERTY(EditAnywhere)
    float TrailUpOffset;
    
    UPROPERTY(EditAnywhere)
    float FrameIndex;
    
    UPROPERTY(EditAnywhere)
    FVector SkidMarkSize;
    
    UPROPERTY(EditAnywhere)
    float MinRPMForFastSpin;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeedForFastSpin;
    
    UPROPERTY(EditAnywhere)
    float MinSpeedToActivateBigCore;
    
    UPROPERTY(EditAnywhere)
    float MinRPMToActivateBigCore;
    
    UPROPERTY(EditAnywhere)
    float ParticleDriftVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bHasUpgrade01;
    
    UPROPERTY(EditAnywhere)
    bool bHasUpgrade02;
    
    UPROPERTY(EditAnywhere)
    TMap<UElementalInteractionData*, FVehicleTrailParticleSystemData> WadeParticleSystems;
    
    UPROPERTY(EditAnywhere)
    FVehicleTrailParticleSystemData DefaultWadeParticleSystem;
    
    UPROPERTY(EditAnywhere)
    TArray<FExtraWadingData> ExtraWadingEffects;
    
protected:
    UPROPERTY(Export, Transient)
    UWheeledVehicleMovementComponentNW* WheelMoveComp;
    
public:
    UVehicleTrailComponent();
};


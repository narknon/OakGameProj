#pragma once
#include "CoreMinimal.h"
#include "VehicleTrailData.h"
#include "VehicleTrailParticleSystemData.h"
#include "ExtraWadingData.generated.h"

class UElementalInteractionData;

USTRUCT(BlueprintType)
struct FExtraWadingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVehicleTrailData WadingData;
    
    UPROPERTY(EditAnywhere)
    TMap<UElementalInteractionData*, FVehicleTrailParticleSystemData> WadeParticleSystems;
    
    UPROPERTY(EditAnywhere)
    FVehicleTrailParticleSystemData DefaultWadeParticleSystem;
    
    OAKGAME_API FExtraWadingData();
};


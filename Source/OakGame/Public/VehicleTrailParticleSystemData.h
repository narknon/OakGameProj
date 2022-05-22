#pragma once
#include "CoreMinimal.h"
#include "TrailVectorParam.h"
#include "VehicleTrailParticleSystemData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FVehicleTrailParticleSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleSystemTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FTrailVectorParam> VectorParamsToSet;
    
    OAKGAME_API FVehicleTrailParticleSystemData();
};

